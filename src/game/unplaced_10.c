#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_5fe250(_BYTE* result);
_BYTE* GameRoutine_5fe260(_BYTE* result);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_cc0b50();
_QWORD* GameRoutine_cc0d30();
_QWORD* GameRoutine_cc1700(__int64);
_QWORD* GameRoutine_cc7620(__int64);
_QWORD* GameRoutine_cc9d20();
_QWORD* GameRoutine_cca2e0(__int64);
_QWORD* GameRoutine_cca620(__int64);
_QWORD* GameRoutine_eafec0(int);
_QWORD* hub_PlaySE_cc8950(__int64, float);
_QWORD* hub_RunSubquestClear(__int64);
_QWORD* hub_TryPopWorldPost();
__attribute__((swiftcall)) void CharacterModel_cf7a40(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_a8ed00(PSEUDO_X8, __int64 result,
                                                   __int64, __int64);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64, float);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, int);
__attribute__((swiftcall)) void game_cfdb00(PSEUDO_X8, __int64, float32x4_t*,
                                            float32x4_t*, char);
__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);
__attribute__((swiftcall)) void game_zview_d56a60(PSEUDO_X8, __int64, __int64,
                                                  float);
__attribute__((swiftcall)) void hub_GetObjLocatorPos(PSEUDO_X8,
                                                     unsigned __int8*, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* GameRoutine_68cb20(__int64* result, unsigned __int64);
__int64* GameRoutine_714e40();
__int64* GameRoutine_8301a0(__int64* result, unsigned __int64);
__int64* GameRoutine_8462a0(__int64* result, unsigned __int64);
__int64* GameRoutine_89db20(__int64* result, unsigned __int64);
__int64* GameRoutine_8cfc00(__int64* result, unsigned __int64);
__int64* GameRoutine_8f7440(__int64* result, unsigned __int64);
__int64* game_8224a0(unsigned __int8);
__int64 CharacterModel_d198c0(float32x2_t*, float32x2_t*, char, char);
__int64 ClearHeadLookToTarget();
__int64 ClearLockTargetLeader();
__int64 Cursor_f566c0(__int64, __int64, __int64);
__int64 GameRoutine_106c820(_QWORD*, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_1551ac0(int);
__int64 GameRoutine_1551d30();
__int64 GameRoutine_2b0();
__int64 GameRoutine_5fe270(__int64, __int64, __int64);
__int64 GameRoutine_5fe290(__int64 result, _QWORD*, int);
__int64 GameRoutine_5fe3b0(__int64);
__int64 GameRoutine_6064a0(__int64);
__int64 GameRoutine_606650(__int64 result);
__int64 GameRoutine_7c9660(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a8fde0(__int64 result, __int64, __int64, float, float);
__int64 GameRoutine_ad66e0(__int64 result, __int64, __int64, float, float);
__int64 GameRoutine_ad6820(__int64 result, __int64, __int64, __int64, float,
                           float);
__int64 GameRoutine_d2c6a0(__int64 result);
__int64 GameRoutine_d2cec0(int);
__int64 GameRoutine_d2d5e0(_QWORD);
__int64 GameRoutine_d740c0(__int64, int*);
__int64 GameRoutine_e81b70();
__int64 GameRoutine_f56210(__int64 result, __int64, int);
__int64 GetAngle();
__int64 GetHp();
__int64 GetJID();
__int64 GetLeaderId();
__int64 GetLevel();
__int64 GetLinkPoint();
__int64 GetMaxHp();
__int64 GetPID();
__int64 GetPollution();
__int64 GetStock();
__int64 GetUnitCount();
__int64 GetUnitId();
__int64 HubCharacterNatives_cf7e00(_QWORD);
__int64 HubNatives_cbf330();
__int64 HubNatives_cbf460();
__int64 HubNatives_cbfa70();
__int64 HubNatives_cbfb20();
__int64 HubNatives_cc0630();
__int64 HubNatives_cc0760();
__int64 HubNatives_cc0970();
__int64 HubNatives_cc2480();
__int64 HubNatives_cc3660();
__int64 HubNatives_cc4ce0();
__int64 HubNatives_cc53f0();
__int64 HubNatives_cc5df0();
__int64 HubNatives_cc5f00();
__int64 HubNatives_ccaad0();
__int64 HubNatives_ccaff0();
__int64 HubNatives_ccb180();
__int64 HubNatives_ccb310();
__int64 HubNatives_ccb460();
__int64 HubScheduleNatives_dafab0();
__int64 HubScheduleNatives_db06b0();
__int64 IsVisible();
__int64 PlayIdleMotion();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 Registration_a5aca0(__int64);
__int64 SendUnitItemMenu_8ae490(_QWORD, _QWORD, _QWORD);
__int64 SetBonusMaxHp();
__int64 SetClearDying();
__int64 SetForceDying();
__int64 SetHp();
__int64 SetLifeState();
__int64 SetLinkPoint();
__int64 SetPollution();
__int64 SetVisible();
__int64 TransferFromTemporaty();
__int64 Trick_7d5160(__int64, char, __int64, __int64, __int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 cmdbtl_SetAIState();
__int64 cmdbtl_party_AddPrivateSkillOnce();
__int64 cmdbtl_party_AddTemporaryGuest();
__int64 cmdbtl_party_AddTemporaryUnit();
__int64 cmdbtl_party_Equip();
__int64 cmdbtl_party_GetEquipIID();
__int64 cmdbtl_party_GetIdByPID(__int64);
__int64 cmdbtl_party_GetPosition();
__int64 cmdbtl_party_GetUnitHp();
__int64 cmdbtl_party_HasSkill();
__int64 cmdbtl_party_IsIdle();
__int64 cmdbtl_party_IsPossession();
__int64 cmdbtl_party_PlayDefaultFacial();
__int64 cmdbtl_party_PlayFacial();
__int64 cmdbtl_party_PlayMotionDetail();
__int64 cmdbtl_party_PlayMotion_eb2160();
__int64 cmdbtl_party_PlayMotion_eb2360();
__int64 cmdbtl_party_PlayVoice();
__int64 cmdbtl_party_RemovePrivateSkill();
__int64 cmdbtl_party_SetAngle();
__int64 cmdbtl_party_SetEnableFacialUpdate();
__int64 cmdbtl_party_SetHeadLookToTarget();
__int64 cmdbtl_party_SetLeaderId();
__int64 cmdbtl_party_SetLockTargetLeader();
__int64 cmdbtl_party_WaitIdle();
__int64 fmodf(float, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_6163e0(__int64, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Register(__int64);
__int64 game_RandomSeed_GetFloat(_QWORD, float);
__int64 game_e81a10();
__int64 game_script_cmdbtl_ExitGmap();
__int64 game_script_cmdbtl_GetPhase();
__int64 game_script_cmdbtl_GetTurn();
__int64 game_script_cmdbtl_ItemGainSilentTransport();
__int64 game_script_cmdbtl_SituationComplete();
__int64 game_script_cmdbtl_SituationEscape();
__int64 game_script_cmdbtl_SituationGameOver();
__int64 game_script_cmdbtl_WaitLoadComplete();
__int64 game_script_dbg_DrawBox();
__int64 game_script_dbg_DrawCylinder();
__int64 game_script_dbg_DrawQuad();
__int64 game_script_dbg_DrawSphere();
__int64 game_script_dbg_WriteStringToScreen();
__int64 game_script_hub_BindEnemyNotice();
__int64 game_script_hub_BindEnemyStop();
__int64 game_script_hub_BindEnemyStopOnPlayable();
__int64 game_script_hub_EntryFlag();
__int64 game_script_hub_ExitPlayerWalk();
__int64 game_script_hub_GetAreaFullName();
__int64 game_script_hub_GetAreaName();
__int64 game_script_hub_GetDt();
__int64 game_script_hub_GetMapLoadVariationId();
__int64 game_script_hub_GetMapName();
__int64 game_script_hub_GetObjLocatorAngle();
__int64 game_script_hub_GetObserveCycleIdx();
__int64 game_script_hub_GetObserveDayIdx();
__int64 game_script_hub_HasObjLocator();
__int64 game_script_hub_ImmidiateJumpNextHubTimeline();
__int64 game_script_hub_InputRestart();
__int64 game_script_hub_InputStop();
__int64 game_script_hub_IsActiveFlag();
__int64 game_script_hub_IsCanSubquest();
__int64 game_script_hub_IsCompletedMap();
__int64 game_script_hub_IsEnableSituation();
__int64 game_script_hub_IsGameSkip();
__int64 game_script_hub_IsOpeningHourFacility();
__int64 game_script_hub_IsRunningScriptEvent();
__int64 game_script_hub_IsSkipFadeInEventEndCamera();
__int64 game_script_hub_IsTalkSeq_EnableBindFinal();
__int64 game_script_hub_PausePersistent();
__int64 game_script_hub_PlayBgm();
__int64 game_script_hub_PlayerRestart();
__int64 game_script_hub_PlayerStop();
__int64 game_script_hub_PopRunningScriptEvent();
__int64 game_script_hub_PushRunningScriptEvent();
__int64 game_script_hub_ReloadLightweight();
__int64 game_script_hub_ResumePersistent();
__int64 game_script_hub_SetContinueEncountBgm();
__int64 game_script_hub_SetDisableSaveMenu();
__int64 game_script_hub_SetDngUnitCountOne();
__int64 game_script_hub_SetEnableEventSkipLayer();
__int64 game_script_hub_SetEnableExitHubBgm();
__int64 game_script_hub_SetEnableFacility();
__int64 game_script_hub_SetEnableGameFadeVolume();
__int64 game_script_hub_SetHideNearest();
__int64 game_script_hub_SetLockLightReloadOutSide();
__int64 game_script_hub_SetTalkSeq_EnableBindFinal();
__int64 game_script_hub_UnbindEnemyNotice();
__int64 game_script_hub_UnbindEnemyStop();
__int64 game_script_hub_init_ChangeExLightingHades();
__int64 game_script_hub_init_ClearGroupIdDisposCharacter();
__int64 game_script_hub_init_DisableSituationDisposCharacter();
__int64 game_script_hub_init_PushGroupIdDisposCharacter();
__int64 game_script_hub_init_PushGroupIdDisposCharacterAll();
__int64 game_script_hub_init_RegisterTimelineEventFunc();
__int64 game_script_hub_init_SetCheckEnableBuildPerson();
__int64 game_script_hub_init_SetDestinationShowType();
__int64 game_script_hub_init_SetOverrideLoadVariationId();
__int64 game_script_hub_locator_Assign();
__int64 game_script_hub_locator_Construct();
__int64 game_script_hub_locator_CopyConstruct();
__int64 game_script_hub_locator_Destruct();
__int64 game_script_hub_locator_Equals();
__int64 game_script_hub_locator_GetDisposAngle();
__int64 game_script_hub_locator_GetDisposPosition();
__int64 game_script_hub_locator_GetGlobalHash();
__int64 game_script_hub_locator_GetHandleGlobalHash();
__int64 game_script_hub_locator_GetHandleLabel();
__int64 game_script_hub_locator_GetLabelCount();
__int64 game_script_hub_locator_IsPlaceable();
__int64 game_script_hub_locator_LctCopyForMain();
__int64 game_script_hub_locator_LctRegisterLabel();
__int64 game_script_hub_locator_ReserveErace();
__int64 game_script_hub_locator_SetDestinationOverride();
__int64 game_script_hub_schedule_AssignDate();
__int64 game_script_hub_schedule_CancelProgress();
__int64 game_script_hub_schedule_CompareDate();
__int64 game_script_hub_schedule_ConstructDate();
__int64 game_script_hub_schedule_DestructDate();
__int64 game_script_hub_schedule_DisplayProgress();
__int64 game_script_hub_schedule_FastSetDate();
__int64 game_script_hub_schedule_GetChapter();
__int64 game_script_hub_schedule_GetCycleIndex();
__int64 game_script_hub_schedule_GetDate();
__int64 game_script_hub_schedule_GetMonth();
__int64 game_script_hub_schedule_GetPart();
__int64 game_script_hub_schedule_IsSectionFree();
__int64 game_script_hub_schedule_IsZoneNight();
__int64 game_script_hub_schedule_IsZoneNoon();
__int64 game_script_hub_schedule_ProgressCycle();
__int64 game_script_hub_schedule_ProgressHour();
__int64 game_script_hub_schedule_ProgressMinute();
__int64 game_script_hub_talk_CommitRestore();
__int64 game_script_hub_talk_CreateTalkWindow();
__int64 game_script_hub_talk_ExitSelectMenu();
__int64 game_script_hub_talk_GetChoiceMenuResult();
__int64 game_script_hub_talk_IsActiveSelectMenu();
__int64 game_script_hub_talk_IsExistEventTalkedLabels();
__int64 game_script_hub_talk_IsYesNoDialogResult();
__int64 game_script_hub_talk_OnTalkCameraStateGroup();
__int64 game_script_hub_talk_RestorePosure();
__int64 game_script_hub_talk_ShowChoiceMenu();
__int64 game_script_hub_talk_ShowYesNoDialog();
__int64 game_script_hub_talk_ShowYesNoDialogArg();
__int64 game_script_hub_talk_ShowYesNoDialogArg2();
__int64 game_script_hub_talk_ShowYesNoDialogWithYesNoLabel();
__int64 game_script_hub_talk_StorePosure();
__int64 game_script_hub_talk_StorePosureCharaHash();
__int64 hub_ClearGameHierarchyOverride();
__int64 hub_ClearOverrideBgmLabel();
__int64 hub_IsAcceptEndDay(__int64);
__int64 hub_IsAccessibleFacility();
__int64 hub_IsAccessibleFacility_cc3de0(__int64);
__int64 hub_IsAlreadyRead(unsigned __int8*);
__int64 hub_IsFacilityArrival(__int64, __int64);
__int64 hub_IsJoinPid(__int64);
__int64 hub_IsNeedFacilityTalk(__int64, __int64);
__int64 hub_IsOutHourFacility();
__int64 hub_IsPlacementPattern();
__int64 hub_IsSideStoryCanTalk(__int64);
__int64 hub_IsSubquestCleared(__int64);
__int64 hub_IsSubquestCompletedBySharedComp(__int64);
__int64 hub_IsSubquestOrder(__int64);
__int64 hub_IsSubquestProgressing(__int64);
__int64 hub_IsSubquestReportable(__int64);
__int64 hub_IsSubquestTerm(__int64);
__int64 hub_PlayEffect(__int64, __int64*, int32x2_t);
__int64 hub_PlayEffect2D();
__int64 hub_PlayEffectBindPlayer(__int64, int32x2_t);
__int64 hub_PlayEffectLoop(__int64, __int64, __int64*, int32x2_t);
__int64 hub_PlaySE();
__int64 hub_PushMapHideTag();
__int64 hub_PushPrePlaySeqEvent();
__int64 hub_RunCmdBtl();
__int64 hub_RunDngBunquet();
__int64 hub_RunQuestDone();
__int64 hub_SaveReserveEnterEvent_cc5780();
__int64 hub_SaveReserveEnterEvent_cc5980();
__int64 hub_SetGameHierarchyOverride();
__int64 hub_SetOverrideBgmLabel();
__int64 hub_SetOverrideDisposIdLabel();
__int64 hub_SetOverrideEncountFieldName();
__int64 hub_SideStoryAccept();
__int64 hub_SideStoryBeginBmap(__int64 result);
__int64 hub_SideStoryClear(__int64);
__int64 hub_StartEventExitView();
__int64 hub_StartFacilityInstruction_cc3310();
__int64 hub_StartFacilityInstruction_cc3440();
__int64 hub_StartFacility_cc2fe0();
__int64 hub_StartFacility_cc3110();
__int64 hub_StopBgm(float);
__int64 hub_StopEffectLoop();
__int64 hub_UseTransporterCount(char*, int);
__int64 hub_WarpWorld();
__int64 hub_init_OverrideInitLocator();
__int64 hub_schedule_AddDateEventTiny(int*, unsigned __int8*);
__int64 hub_schedule_GameRouteToRouteMsg();
__int64 hub_schedule_StringToDate();
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_reset(__int64);
__int64 snd_isActive_100090(__int64);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 snd_stop_ffc40(__int64*, __int64);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_d1fb60(float32x4_t*, char);
__n128 GameRoutine_e5f7e0(_DWORD*, __int64);
__n128 GameRoutine_e5fa20(_DWORD*);
__n128 GameRoutine_f56340(__int64, int);
__n128 cmdbtl_party_AddPrivateSkill(int, char*);
__n128 cmdbtl_party_PlayVoiceDirectLabel(int, __int64);
__n128 cmdbtl_party_SetPosition(int, _DWORD*);
__n128 nn_os_LockMutex_alt1(_QWORD) __asm__("nn_os_LockMutex");
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_d1cdc0(__int64, unsigned int);
bool GameRoutine_d2d4e0(__int64);
bool hub_IsOutHourFacilityArg(__int64, __int64);
double snd_getDefineValue(unsigned __int8*);
extern _DWORD GameData_1a83020[4];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_1a91828;
extern _UNKNOWN GameData_1aed8c8;
extern _UNKNOWN GameData_1af1404;
extern _UNKNOWN GameData_1f9d7f0;
extern _UNKNOWN GameData_1f9d838;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN GameData_22110c8;
extern _UNKNOWN GameData_221b3f0;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_1ff8cd8[])();
extern __int64 (*game_ProcChangeCut_vtable[])();
extern __int64 (*game_script_hub_character_IsValid_ptr)();
extern __int64* GameData_212bf18[9];
extern __int64* GameData_212bf20[8];
extern __int64* GameData_212bf30[6];
extern __int64* GameData_212bf38[5];
extern __int64* GameData_212bf48[3];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212eda8[10];
extern __int64* GameData_21309c8[5];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212bf28[7];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d028[4];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21a60e0;
extern __int64 GameData_21c6978;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ec568;
extern __int64 GameData_21ec798;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_220b530;
extern __int64 GameData_220b538;
extern __int64 GameData_220b540;
extern __int64 GameData_220b548;
extern __int64 GameData_220b550;
extern __int64 GameData_220b558;
extern __int64 GameData_220b570;
extern __int64 GameData_220b578;
extern __int64 GameData_220b580;
extern __int64 GameData_220b588;
extern __int64 GameData_220b590;
extern __int64 GameData_220b598;
extern __int64 GameData_220b5b0;
extern __int64 GameData_220b5b8;
extern __int64 GameData_220b5c0;
extern __int64 GameData_220b5c8;
extern __int64 GameData_220b5d0;
extern __int64 GameData_220b5d8;
extern __int64 GameData_220b5f0;
extern __int64 GameData_220b5f8;
extern __int64 GameData_220b600;
extern __int64 GameData_220b608;
extern __int64 GameData_220b610;
extern __int64 GameData_220b618;
extern __int64 GameData_220b630;
extern __int64 GameData_220b638;
extern __int64 GameData_220b640;
extern __int64 GameData_220b648;
extern __int64 GameData_220b650;
extern __int64 GameData_220b658;
extern __int64 GameData_220b670;
extern __int64 GameData_220b678;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220b708;
extern __int64 GameData_220b710;
extern __int64 GameData_220b718;
extern __int64 GameData_220b720;
extern __int64 GameData_220b728;
extern __int64 GameData_220b730;
extern __int64 GameData_220b748;
extern __int64 GameData_220b750;
extern __int64 GameData_220b758;
extern __int64 GameData_220b760;
extern __int64 GameData_220b768;
extern __int64 GameData_220b770;
extern __int64 GameData_220b788;
extern __int64 GameData_220b790;
extern __int64 GameData_220b798;
extern __int64 GameData_220b7a0;
extern __int64 GameData_220b7a8;
extern __int64 GameData_220b7b0;
extern __int64 GameData_220b7c8;
extern __int64 GameData_220b7d0;
extern __int64 GameData_220b7d8;
extern __int64 GameData_220b7e0;
extern __int64 GameData_220b7e8;
extern __int64 GameData_220b7f0;
extern __int64 GameData_220b808;
extern __int64 GameData_220b810;
extern __int64 GameData_220b818;
extern __int64 GameData_220b820;
extern __int64 GameData_220b828;
extern __int64 GameData_220b830;
extern __int64 GameData_220b848;
extern __int64 GameData_220b850;
extern __int64 GameData_220b858;
extern __int64 GameData_220b860;
extern __int64 GameData_220b868;
extern __int64 GameData_220b870;
extern __int64 GameData_220b888;
extern __int64 GameData_220b890;
extern __int64 GameData_220b898;
extern __int64 GameData_220b8a0;
extern __int64 GameData_220b8a8;
extern __int64 GameData_220b8b0;
extern __int64 GameData_220b8c8;
extern __int64 GameData_220b8d0;
extern __int64 GameData_220b8d8;
extern __int64 GameData_220b8e0;
extern __int64 GameData_220b8e8;
extern __int64 GameData_220b8f0;
extern __int64 GameData_220b908;
extern __int64 GameData_220b910;
extern __int64 GameData_220b918;
extern __int64 GameData_220b920;
extern __int64 GameData_220b928;
extern __int64 GameData_220b930;
extern __int64 GameData_220b948;
extern __int64 GameData_220b950;
extern __int64 GameData_220b958;
extern __int64 GameData_220b960;
extern __int64 GameData_220b968;
extern __int64 GameData_220b970;
extern __int64 GameData_220b988;
extern __int64 GameData_220b990;
extern __int64 GameData_220b998;
extern __int64 GameData_220b9a0;
extern __int64 GameData_220b9a8;
extern __int64 GameData_220b9b0;
extern __int64 GameData_220b9c8;
extern __int64 GameData_220b9d0;
extern __int64 GameData_220b9d8;
extern __int64 GameData_220b9e0;
extern __int64 GameData_220b9e8;
extern __int64 GameData_220b9f0;
extern __int64 GameData_220ba08;
extern __int64 GameData_220ba10;
extern __int64 GameData_220ba18;
extern __int64 GameData_220ba20;
extern __int64 GameData_220ba28;
extern __int64 GameData_220ba30;
extern __int64 GameData_220ba48;
extern __int64 GameData_220ba50;
extern __int64 GameData_220ba58;
extern __int64 GameData_220ba60;
extern __int64 GameData_220ba68;
extern __int64 GameData_220ba70;
extern __int64 GameData_220ba88;
extern __int64 GameData_220ba90;
extern __int64 GameData_220ba98;
extern __int64 GameData_220baa0;
extern __int64 GameData_220baa8;
extern __int64 GameData_220bab0;
extern __int64 GameData_220bac8;
extern __int64 GameData_220bad0;
extern __int64 GameData_220bad8;
extern __int64 GameData_220bae0;
extern __int64 GameData_220bae8;
extern __int64 GameData_220baf0;
extern __int64 GameData_220bb08;
extern __int64 GameData_220bb10;
extern __int64 GameData_220bb18;
extern __int64 GameData_220bb20;
extern __int64 GameData_220bb28;
extern __int64 GameData_220bb30;
extern __int64 GameData_220bb48;
extern __int64 GameData_220bb50;
extern __int64 GameData_220bb58;
extern __int64 GameData_220bb60;
extern __int64 GameData_220bb68;
extern __int64 GameData_220bb70;
extern __int64 GameData_220bb88;
extern __int64 GameData_220bb90;
extern __int64 GameData_220bb98;
extern __int64 GameData_220bba0;
extern __int64 GameData_220bba8;
extern __int64 GameData_220bbb0;
extern __int64 GameData_220bbc8;
extern __int64 GameData_220bbd0;
extern __int64 GameData_220bbd8;
extern __int64 GameData_220bbe0;
extern __int64 GameData_220bbe8;
extern __int64 GameData_220bbf0;
extern __int64 GameData_220bc08;
extern __int64 GameData_220bc10;
extern __int64 GameData_220bc18;
extern __int64 GameData_220bc20;
extern __int64 GameData_220bc28;
extern __int64 GameData_220bc30;
extern __int64 GameData_220bc48;
extern __int64 GameData_220bc50;
extern __int64 GameData_220bc58;
extern __int64 GameData_220bc60;
extern __int64 GameData_220bc68;
extern __int64 GameData_220bc70;
extern __int64 GameData_220bc88;
extern __int64 GameData_220bc90;
extern __int64 GameData_220bc98;
extern __int64 GameData_220bca0;
extern __int64 GameData_220bca8;
extern __int64 GameData_220bcb0;
extern __int64 GameData_220bcc8;
extern __int64 GameData_220bcd0;
extern __int64 GameData_220bcd8;
extern __int64 GameData_220bce0;
extern __int64 GameData_220bce8;
extern __int64 GameData_220bcf0;
extern __int64 GameData_220bd08;
extern __int64 GameData_220bd10;
extern __int64 GameData_220bd18;
extern __int64 GameData_220bd20;
extern __int64 GameData_220bd28;
extern __int64 GameData_220bd30;
extern __int64 GameData_220bd48;
extern __int64 GameData_220bd50;
extern __int64 GameData_220bd58;
extern __int64 GameData_220bd60;
extern __int64 GameData_220bd68;
extern __int64 GameData_220bd70;
extern __int64 GameData_220bd88;
extern __int64 GameData_220bd90;
extern __int64 GameData_220bd98;
extern __int64 GameData_220bda0;
extern __int64 GameData_220bda8;
extern __int64 GameData_220bdb0;
extern __int64 GameData_220bdc8;
extern __int64 GameData_220bdd0;
extern __int64 GameData_220bdd8;
extern __int64 GameData_220bde0;
extern __int64 GameData_220bde8;
extern __int64 GameData_220bdf0;
extern __int64 GameData_220be08;
extern __int64 GameData_220be10;
extern __int64 GameData_220be18;
extern __int64 GameData_220be20;
extern __int64 GameData_220be28;
extern __int64 GameData_220be30;
extern __int64 GameData_220be48;
extern __int64 GameData_220be50;
extern __int64 GameData_220be58;
extern __int64 GameData_220be60;
extern __int64 GameData_220be68;
extern __int64 GameData_220be70;
extern __int64 GameData_220be88;
extern __int64 GameData_220be90;
extern __int64 GameData_220be98;
extern __int64 GameData_220bea0;
extern __int64 GameData_220bea8;
extern __int64 GameData_220beb0;
extern __int64 GameData_220bec8;
extern __int64 GameData_220bed0;
extern __int64 GameData_220bed8;
extern __int64 GameData_220bee0;
extern __int64 GameData_220bee8;
extern __int64 GameData_220bef0;
extern __int64 GameData_220bf08;
extern __int64 GameData_220bf10;
extern __int64 GameData_220bf18;
extern __int64 GameData_220bf20;
extern __int64 GameData_220bf28;
extern __int64 GameData_220bf30;
extern __int64 GameData_220bf48;
extern __int64 GameData_220bf50;
extern __int64 GameData_220bf58;
extern __int64 GameData_220bf60;
extern __int64 GameData_220bf68;
extern __int64 GameData_220bf70;
extern __int64 GameData_220bf88;
extern __int64 GameData_220bf90;
extern __int64 GameData_220bf98;
extern __int64 GameData_220bfa0;
extern __int64 GameData_220bfa8;
extern __int64 GameData_220bfb0;
extern __int64 GameData_220bfc8;
extern __int64 GameData_220bfd0;
extern __int64 GameData_220bfd8;
extern __int64 GameData_220bfe0;
extern __int64 GameData_220bfe8;
extern __int64 GameData_220bff0;
extern __int64 GameData_220c008;
extern __int64 GameData_220c010;
extern __int64 GameData_220c018;
extern __int64 GameData_220c020;
extern __int64 GameData_220c028;
extern __int64 GameData_220c030;
extern __int64 GameData_220c048;
extern __int64 GameData_220c050;
extern __int64 GameData_220c058;
extern __int64 GameData_220c060;
extern __int64 GameData_220c068;
extern __int64 GameData_220c070;
extern __int64 GameData_220c088;
extern __int64 GameData_220c090;
extern __int64 GameData_220c098;
extern __int64 GameData_220c0a0;
extern __int64 GameData_220c0a8;
extern __int64 GameData_220c0b0;
extern __int64 GameData_220c0c8;
extern __int64 GameData_220c0d0;
extern __int64 GameData_220c0d8;
extern __int64 GameData_220c0e0;
extern __int64 GameData_220c0e8;
extern __int64 GameData_220c0f0;
extern __int64 GameData_220c108;
extern __int64 GameData_220c110;
extern __int64 GameData_220c118;
extern __int64 GameData_220c120;
extern __int64 GameData_220c128;
extern __int64 GameData_220c130;
extern __int64 GameData_220c148;
extern __int64 GameData_220c150;
extern __int64 GameData_220c158;
extern __int64 GameData_220c160;
extern __int64 GameData_220c168;
extern __int64 GameData_220c170;
extern __int64 GameData_220c188;
extern __int64 GameData_220c190;
extern __int64 GameData_220c198;
extern __int64 GameData_220c1a0;
extern __int64 GameData_220c1a8;
extern __int64 GameData_220c1b0;
extern __int64 GameData_220c1c8;
extern __int64 GameData_220c1d0;
extern __int64 GameData_220c1d8;
extern __int64 GameData_220c1e0;
extern __int64 GameData_220c1e8;
extern __int64 GameData_220c1f0;
extern __int64 GameData_220c208;
extern __int64 GameData_220c210;
extern __int64 GameData_220c218;
extern __int64 GameData_220c220;
extern __int64 GameData_220c228;
extern __int64 GameData_220c230;
extern __int64 GameData_220c248;
extern __int64 GameData_220c250;
extern __int64 GameData_220c258;
extern __int64 GameData_220c260;
extern __int64 GameData_220c268;
extern __int64 GameData_220c270;
extern __int64 GameData_220c288;
extern __int64 GameData_220c290;
extern __int64 GameData_220c298;
extern __int64 GameData_220c2a0;
extern __int64 GameData_220c2a8;
extern __int64 GameData_220c2b0;
extern __int64 GameData_220c2c8;
extern __int64 GameData_220c2d0;
extern __int64 GameData_220c2d8;
extern __int64 GameData_220c2e0;
extern __int64 GameData_220c2e8;
extern __int64 GameData_220c2f0;
extern __int64 GameData_220c308;
extern __int64 GameData_220c310;
extern __int64 GameData_220c318;
extern __int64 GameData_220c320;
extern __int64 GameData_220c328;
extern __int64 GameData_220c330;
extern __int64 GameData_220c348;
extern __int64 GameData_220c350;
extern __int64 GameData_220c358;
extern __int64 GameData_220c360;
extern __int64 GameData_220c368;
extern __int64 GameData_220c370;
extern __int64 GameData_220c388;
extern __int64 GameData_220c390;
extern __int64 GameData_220c398;
extern __int64 GameData_220c3a0;
extern __int64 GameData_220c3a8;
extern __int64 GameData_220c3b0;
extern __int64 GameData_220c3c8;
extern __int64 GameData_220c3d0;
extern __int64 GameData_220c3d8;
extern __int64 GameData_220c3e0;
extern __int64 GameData_220c3e8;
extern __int64 GameData_220c3f0;
extern __int64 GameData_220c408;
extern __int64 GameData_220c410;
extern __int64 GameData_220c418;
extern __int64 GameData_220c420;
extern __int64 GameData_220c428;
extern __int64 GameData_220c430;
extern __int64 GameData_220c448;
extern __int64 GameData_220c450;
extern __int64 GameData_220c458;
extern __int64 GameData_220c460;
extern __int64 GameData_220c468;
extern __int64 GameData_220c470;
extern __int64 GameData_220c488;
extern __int64 GameData_220c490;
extern __int64 GameData_220c498;
extern __int64 GameData_220c4a0;
extern __int64 GameData_220c4a8;
extern __int64 GameData_220c4b0;
extern __int64 GameData_220c4c8;
extern __int64 GameData_220c4d0;
extern __int64 GameData_220c4d8;
extern __int64 GameData_220c4e0;
extern __int64 GameData_220c4e8;
extern __int64 GameData_220c4f0;
extern __int64 GameData_220c508;
extern __int64 GameData_220c510;
extern __int64 GameData_220c518;
extern __int64 GameData_220c520;
extern __int64 GameData_220c528;
extern __int64 GameData_220c530;
extern __int64 GameData_220c548;
extern __int64 GameData_220c550;
extern __int64 GameData_220c558;
extern __int64 GameData_220c560;
extern __int64 GameData_220c568;
extern __int64 GameData_220c570;
extern __int64 GameData_220c588;
extern __int64 GameData_220c590;
extern __int64 GameData_220c598;
extern __int64 GameData_220c5a0;
extern __int64 GameData_220c5a8;
extern __int64 GameData_220c5b0;
extern __int64 GameData_220c5c8;
extern __int64 GameData_220c5d0;
extern __int64 GameData_220c5d8;
extern __int64 GameData_220c5e0;
extern __int64 GameData_220c5e8;
extern __int64 GameData_220c5f0;
extern __int64 GameData_220c608;
extern __int64 GameData_220c610;
extern __int64 GameData_220c618;
extern __int64 GameData_220c620;
extern __int64 GameData_220c628;
extern __int64 GameData_220c630;
extern __int64 GameData_220c648;
extern __int64 GameData_220c650;
extern __int64 GameData_220c658;
extern __int64 GameData_220c660;
extern __int64 GameData_220c668;
extern __int64 GameData_220c670;
extern __int64 GameData_220c688;
extern __int64 GameData_220c690;
extern __int64 GameData_220c698;
extern __int64 GameData_220c6a0;
extern __int64 GameData_220c6a8;
extern __int64 GameData_220c6b0;
extern __int64 GameData_220c6c8;
extern __int64 GameData_220c6d0;
extern __int64 GameData_220c6d8;
extern __int64 GameData_220c6e0;
extern __int64 GameData_220c6e8;
extern __int64 GameData_220c6f0;
extern __int64 GameData_220c708;
extern __int64 GameData_220c710;
extern __int64 GameData_220c718;
extern __int64 GameData_220c720;
extern __int64 GameData_220c728;
extern __int64 GameData_220c730;
extern __int64 GameData_220c748;
extern __int64 GameData_220c750;
extern __int64 GameData_220c758;
extern __int64 GameData_220c760;
extern __int64 GameData_220c768;
extern __int64 GameData_220c770;
extern __int64 GameData_220c788;
extern __int64 GameData_220c790;
extern __int64 GameData_220c798;
extern __int64 GameData_220c7a0;
extern __int64 GameData_220c7a8;
extern __int64 GameData_220c7b0;
extern __int64 GameData_220c7c8;
extern __int64 GameData_220c7d0;
extern __int64 GameData_220c7d8;
extern __int64 GameData_220c7e0;
extern __int64 GameData_220c7e8;
extern __int64 GameData_220c7f0;
extern __int64 GameData_220c808;
extern __int64 GameData_220c810;
extern __int64 GameData_220c818;
extern __int64 GameData_220c820;
extern __int64 GameData_220c828;
extern __int64 GameData_220c830;
extern __int64 GameData_220c848;
extern __int64 GameData_220c850;
extern __int64 GameData_220c858;
extern __int64 GameData_220c860;
extern __int64 GameData_220c868;
extern __int64 GameData_220c870;
extern __int64 GameData_220c888;
extern __int64 GameData_220c890;
extern __int64 GameData_220c898;
extern __int64 GameData_220c8a0;
extern __int64 GameData_220c8a8;
extern __int64 GameData_220c8b0;
extern __int64 GameData_220c8c8;
extern __int64 GameData_220c8d0;
extern __int64 GameData_220c8d8;
extern __int64 GameData_220c8e0;
extern __int64 GameData_220c8e8;
extern __int64 GameData_220c8f0;
extern __int64 GameData_220c908;
extern __int64 GameData_220c910;
extern __int64 GameData_220c918;
extern __int64 GameData_220c920;
extern __int64 GameData_220c928;
extern __int64 GameData_220c930;
extern __int64 GameData_220c948;
extern __int64 GameData_220c950;
extern __int64 GameData_220c958;
extern __int64 GameData_220c960;
extern __int64 GameData_220c968;
extern __int64 GameData_220c970;
extern __int64 GameData_220c988;
extern __int64 GameData_220c990;
extern __int64 GameData_220c998;
extern __int64 GameData_220c9a0;
extern __int64 GameData_220c9a8;
extern __int64 GameData_220c9b0;
extern __int64 GameData_220c9c8;
extern __int64 GameData_220c9d0;
extern __int64 GameData_220c9d8;
extern __int64 GameData_220c9e0;
extern __int64 GameData_220c9e8;
extern __int64 GameData_220c9f0;
extern __int64 GameData_220ca08;
extern __int64 GameData_220ca10;
extern __int64 GameData_220ca18;
extern __int64 GameData_220ca20;
extern __int64 GameData_220ca28;
extern __int64 GameData_220ca30;
extern __int64 GameData_220ca48;
extern __int64 GameData_220ca50;
extern __int64 GameData_220ca58;
extern __int64 GameData_220ca60;
extern __int64 GameData_220ca68;
extern __int64 GameData_220ca70;
extern __int64 GameData_220ca88;
extern __int64 GameData_220ca90;
extern __int64 GameData_220ca98;
extern __int64 GameData_220caa0;
extern __int64 GameData_220caa8;
extern __int64 GameData_220cab0;
extern __int64 GameData_220cac8;
extern __int64 GameData_220cad0;
extern __int64 GameData_220cad8;
extern __int64 GameData_220cae0;
extern __int64 GameData_220cae8;
extern __int64 GameData_220caf0;
extern __int64 GameData_220cb08;
extern __int64 GameData_220cb10;
extern __int64 GameData_220cb18;
extern __int64 GameData_220cb20;
extern __int64 GameData_220cb28;
extern __int64 GameData_220cb30;
extern __int64 GameData_220cb48;
extern __int64 GameData_220cb50;
extern __int64 GameData_220cb58;
extern __int64 GameData_220cb60;
extern __int64 GameData_220cb68;
extern __int64 GameData_220cb70;
extern __int64 GameData_220cb88;
extern __int64 GameData_220cb90;
extern __int64 GameData_220cb98;
extern __int64 GameData_220cba0;
extern __int64 GameData_220cba8;
extern __int64 GameData_220cbb0;
extern __int64 GameData_220cbc8;
extern __int64 GameData_220cbd0;
extern __int64 GameData_220cbd8;
extern __int64 GameData_220cbe0;
extern __int64 GameData_220cbe8;
extern __int64 GameData_220cbf0;
extern __int64 GameData_220cc08;
extern __int64 GameData_220cc10;
extern __int64 GameData_220cc18;
extern __int64 GameData_220cc20;
extern __int64 GameData_220cc28;
extern __int64 GameData_220cc30;
extern __int64 GameData_220cc48;
extern __int64 GameData_220cc50;
extern __int64 GameData_220cc58;
extern __int64 GameData_220cc60;
extern __int64 GameData_220cc68;
extern __int64 GameData_220cc70;
extern __int64 GameData_220cc88;
extern __int64 GameData_220cc90;
extern __int64 GameData_220cc98;
extern __int64 GameData_220cca0;
extern __int64 GameData_220cca8;
extern __int64 GameData_220ccb0;
extern __int64 GameData_220ccc8;
extern __int64 GameData_220ccd0;
extern __int64 GameData_220ccd8;
extern __int64 GameData_220cce0;
extern __int64 GameData_220cce8;
extern __int64 GameData_220ccf0;
extern __int64 GameData_220cd08;
extern __int64 GameData_220cd10;
extern __int64 GameData_220cd18;
extern __int64 GameData_220cd20;
extern __int64 GameData_220cd28;
extern __int64 GameData_220cd30;
extern __int64 GameData_220cd48;
extern __int64 GameData_220cd50;
extern __int64 GameData_220cd58;
extern __int64 GameData_220cd60;
extern __int64 GameData_220cd68;
extern __int64 GameData_220cd70;
extern __int64 GameData_220cd88;
extern __int64 GameData_220cd90;
extern __int64 GameData_220cd98;
extern __int64 GameData_220cda0;
extern __int64 GameData_220cda8;
extern __int64 GameData_220cdb0;
extern __int64 GameData_220cdc8;
extern __int64 GameData_220cdd0;
extern __int64 GameData_220cdd8;
extern __int64 GameData_220cde0;
extern __int64 GameData_220cde8;
extern __int64 GameData_220cdf0;
extern __int64 GameData_220ce08;
extern __int64 GameData_220ce10;
extern __int64 GameData_220ce18;
extern __int64 GameData_220ce20;
extern __int64 GameData_220ce28;
extern __int64 GameData_220ce30;
extern __int64 GameData_220ce48;
extern __int64 GameData_220ce50;
extern __int64 GameData_220ce58;
extern __int64 GameData_220ce60;
extern __int64 GameData_220ce68;
extern __int64 GameData_220ce70;
extern __int64 GameData_220ce88;
extern __int64 GameData_220ce90;
extern __int64 GameData_220ce98;
extern __int64 GameData_220cea0;
extern __int64 GameData_220cea8;
extern __int64 GameData_220ceb0;
extern __int64 GameData_220cec8;
extern __int64 GameData_220ced0;
extern __int64 GameData_220ced8;
extern __int64 GameData_220cee0;
extern __int64 GameData_220cee8;
extern __int64 GameData_220cef0;
extern __int64 GameData_220cf08;
extern __int64 GameData_220cf10;
extern __int64 GameData_220cf18;
extern __int64 GameData_220cf20;
extern __int64 GameData_220cf28;
extern __int64 GameData_220cf30;
extern __int64 GameData_220cf48;
extern __int64 GameData_220cf50;
extern __int64 GameData_220cf58;
extern __int64 GameData_220cf60;
extern __int64 GameData_220cf68;
extern __int64 GameData_220cf70;
extern __int64 GameData_220cf88;
extern __int64 GameData_220cf90;
extern __int64 GameData_220cf98;
extern __int64 GameData_220cfa0;
extern __int64 GameData_220cfa8;
extern __int64 GameData_220cfb0;
extern __int64 GameData_220cfc8;
extern __int64 GameData_220cfd0;
extern __int64 GameData_220cfd8;
extern __int64 GameData_220cfe0;
extern __int64 GameData_220cfe8;
extern __int64 GameData_220cff0;
extern __int64 GameData_220d008;
extern __int64 GameData_220d010;
extern __int64 GameData_220d018;
extern __int64 GameData_220d020;
extern __int64 GameData_220d028;
extern __int64 GameData_220d030;
extern __int64 GameData_220d048;
extern __int64 GameData_220d050;
extern __int64 GameData_220d058;
extern __int64 GameData_220d060;
extern __int64 GameData_220d068;
extern __int64 GameData_220d070;
extern __int64 GameData_220d088;
extern __int64 GameData_220d090;
extern __int64 GameData_220d098;
extern __int64 GameData_220d0a0;
extern __int64 GameData_220d0a8;
extern __int64 GameData_220d0b0;
extern __int64 GameData_220d0c8;
extern __int64 GameData_220d0d0;
extern __int64 GameData_220d0d8;
extern __int64 GameData_220d0e0;
extern __int64 GameData_220d0e8;
extern __int64 GameData_220d0f0;
extern __int64 GameData_220d108;
extern __int64 GameData_220d110;
extern __int64 GameData_220d118;
extern __int64 GameData_220d120;
extern __int64 GameData_220d128;
extern __int64 GameData_220d130;
extern __int64 GameData_220d148;
extern __int64 GameData_220d150;
extern __int64 GameData_220d158;
extern __int64 GameData_220d160;
extern __int64 GameData_220d168;
extern __int64 GameData_220d170;
extern __int64 GameData_220d188;
extern __int64 GameData_220d190;
extern __int64 GameData_220d198;
extern __int64 GameData_220d1a0;
extern __int64 GameData_220d1a8;
extern __int64 GameData_220d1b0;
extern __int64 GameData_220d1c8;
extern __int64 GameData_220d1d0;
extern __int64 GameData_220d1d8;
extern __int64 GameData_220d1e0;
extern __int64 GameData_220d1e8;
extern __int64 GameData_220d1f0;
extern __int64 GameData_220d208;
extern __int64 GameData_220d210;
extern __int64 GameData_220d218;
extern __int64 GameData_220d220;
extern __int64 GameData_220d228;
extern __int64 GameData_220d230;
extern __int64 GameData_220d248;
extern __int64 GameData_220d250;
extern __int64 GameData_220d258;
extern __int64 GameData_220d260;
extern __int64 GameData_220d268;
extern __int64 GameData_220d270;
extern __int64 GameData_220d288;
extern __int64 GameData_220d290;
extern __int64 GameData_220d298;
extern __int64 GameData_220d2a0;
extern __int64 GameData_220d2a8;
extern __int64 GameData_220d2b0;
extern __int64 GameData_220d2c8;
extern __int64 GameData_220d2d0;
extern __int64 GameData_220d2d8;
extern __int64 GameData_220d2e0;
extern __int64 GameData_220d2e8;
extern __int64 GameData_220d2f0;
extern __int64 GameData_220d308;
extern __int64 GameData_220d310;
extern __int64 GameData_220d318;
extern __int64 GameData_220d320;
extern __int64 GameData_220d328;
extern __int64 GameData_220d330;
extern __int64 GameData_220d348;
extern __int64 GameData_220d350;
extern __int64 GameData_220d358;
extern __int64 GameData_220d360;
extern __int64 GameData_220d368;
extern __int64 GameData_220d370;
extern __int64 GameData_220d388;
extern __int64 GameData_220d390;
extern __int64 GameData_220d398;
extern __int64 GameData_220d3a0;
extern __int64 GameData_220d3a8;
extern __int64 GameData_220d3b0;
extern __int64 GameData_220d3c8;
extern __int64 GameData_220d3d0;
extern __int64 GameData_220d3d8;
extern __int64 GameData_220d3e0;
extern __int64 GameData_220d3e8;
extern __int64 GameData_220d3f0;
extern __int64 GameData_220d408;
extern __int64 GameData_220d410;
extern __int64 GameData_220d418;
extern __int64 GameData_220d420;
extern __int64 GameData_220d428;
extern __int64 GameData_220d430;
extern __int64 GameData_220d448;
extern __int64 GameData_220d450;
extern __int64 GameData_220d458;
extern __int64 GameData_220d460;
extern __int64 GameData_220d468;
extern __int64 GameData_220d470;
extern __int64 GameData_220d488;
extern __int64 GameData_220d490;
extern __int64 GameData_220d498;
extern __int64 GameData_220d4a0;
extern __int64 GameData_220d4a8;
extern __int64 GameData_220d4b0;
extern __int64 GameData_220d4c8;
extern __int64 GameData_220d4d0;
extern __int64 GameData_220d4d8;
extern __int64 GameData_220d4e0;
extern __int64 GameData_220d4e8;
extern __int64 GameData_220d4f0;
extern __int64 GameData_220d508;
extern __int64 GameData_220d510;
extern __int64 GameData_220d518;
extern __int64 GameData_220d520;
extern __int64 GameData_220d528;
extern __int64 GameData_220d530;
extern __int64 GameData_220d548;
extern __int64 GameData_220d550;
extern __int64 GameData_220d558;
extern __int64 GameData_220d560;
extern __int64 GameData_220d568;
extern __int64 GameData_220d570;
extern __int64 GameData_220d588;
extern __int64 GameData_220d590;
extern __int64 GameData_220d598;
extern __int64 GameData_220d5a0;
extern __int64 GameData_220d5a8;
extern __int64 GameData_220d5b0;
extern __int64 GameData_220d5c8;
extern __int64 GameData_220d5d0;
extern __int64 GameData_220d5d8;
extern __int64 GameData_220d5e0;
extern __int64 GameData_220d5e8;
extern __int64 GameData_220d5f0;
extern __int64 GameData_220d608;
extern __int64 GameData_220d610;
extern __int64 GameData_22110ac;
extern __int64 GameData_22110c0;
extern __int64 GameData_2213840;
extern __int64 GameData_2213848;
extern __int64 GameData_2213850;
extern __int64 GameData_2213858;
extern __int64 GameData_2213860;
extern __int64 GameData_2213868;
extern __int64 GameData_2213880;
extern __int64 GameData_2213888;
extern __int64 GameData_2213890;
extern __int64 GameData_2213898;
extern __int64 GameData_22138a0;
extern __int64 GameData_22138a8;
extern __int64 GameData_22138c0;
extern __int64 GameData_22138c8;
extern __int64 GameData_22138d0;
extern __int64 GameData_22138d8;
extern __int64 GameData_22138e0;
extern __int64 GameData_22138e8;
extern __int64 GameData_2213900;
extern __int64 GameData_2213908;
extern __int64 GameData_2213910;
extern __int64 GameData_2213918;
extern __int64 GameData_2213920;
extern __int64 GameData_2213928;
extern __int64 GameData_2213930;
extern __int64 GameData_2213938;
extern __int64 GameData_2213940;
extern __int64 GameData_2213948;
extern __int64 GameData_2213950;
extern __int64 GameData_2213968;
extern __int64 GameData_2213970;
extern __int64 GameData_2213978;
extern __int64 GameData_2213980;
extern __int64 GameData_2213988;
extern __int64 GameData_2213990;
extern __int64 GameData_2213998;
extern __int64 GameData_22139a0;
extern __int64 GameData_22139b8;
extern __int64 GameData_22139c0;
extern __int64 GameData_22139c8;
extern __int64 GameData_22139d0;
extern __int64 GameData_22139d8;
extern __int64 GameData_22139e0;
extern __int64 GameData_22139e8;
extern __int64 GameData_22139f0;
extern __int64 GameData_2213a08;
extern __int64 GameData_2213a18;
extern __int64 GameData_2213a20;
extern __int64 GameData_2213a28;
extern __int64 GameData_2213a30;
extern __int64 GameData_2213a40;
extern __int64 GameData_2213a48;
extern __int64 GameData_2213a50;
extern __int64 GameData_2213a58;
extern __int64 GameData_2213a68;
extern __int64 GameData_2213a70;
extern __int64 GameData_2213a78;
extern __int64 GameData_2213a80;
extern __int64 GameData_2213a90;
extern __int64 GameData_2213a98;
extern __int64 GameData_2213aa0;
extern __int64 GameData_2213aa8;
extern __int64 GameData_2213ab8;
extern __int64 GameData_2213ac0;
extern __int64 GameData_2213ac8;
extern __int64 GameData_2213ad0;
extern __int64 GameData_2213ae0;
extern __int64 GameData_2213ae8;
extern __int64 GameData_2213af0;
extern __int64 GameData_2213af8;
extern __int64 GameData_2213b08;
extern __int64 GameData_2213b10;
extern __int64 GameData_2213b18;
extern __int64 GameData_2213b20;
extern __int64 GameData_2213b28;
extern __int64 GameData_2213b40;
extern __int64 GameData_2213b48;
extern __int64 GameData_2213b50;
extern __int64 GameData_2213b58;
extern __int64 GameData_2213b60;
extern __int64 GameData_2213b68;
extern __int64 GameData_2213b80;
extern __int64 GameData_2213b88;
extern __int64 GameData_2213b90;
extern __int64 GameData_2213b98;
extern __int64 GameData_2213ba0;
extern __int64 GameData_2213ba8;
extern __int64 GameData_2213bc0;
extern __int64 GameData_2213bc8;
extern __int64 GameData_2213bd0;
extern __int64 GameData_2213bd8;
extern __int64 GameData_2213be0;
extern __int64 GameData_2213be8;
extern __int64 GameData_2213c00;
extern __int64 GameData_2213c08;
extern __int64 GameData_2213c10;
extern __int64 GameData_2213c18;
extern __int64 GameData_2213c20;
extern __int64 GameData_2213c28;
extern __int64 GameData_2213c40;
extern __int64 GameData_2213c48;
extern __int64 GameData_2213c50;
extern __int64 GameData_2213c58;
extern __int64 GameData_2213c60;
extern __int64 GameData_2213c68;
extern __int64 GameData_2213c80;
extern __int64 GameData_2213c88;
extern __int64 GameData_2213c90;
extern __int64 GameData_2213c98;
extern __int64 GameData_2213ca0;
extern __int64 GameData_2213ca8;
extern __int64 GameData_2213cc0;
extern __int64 GameData_2213cc8;
extern __int64 GameData_2213cd0;
extern __int64 GameData_2213cd8;
extern __int64 GameData_2213ce0;
extern __int64 GameData_2213ce8;
extern __int64 GameData_2213d00;
extern __int64 GameData_2213d08;
extern __int64 GameData_2213d10;
extern __int64 GameData_2213d18;
extern __int64 GameData_2213d20;
extern __int64 GameData_2213d28;
extern __int64 GameData_2213d40;
extern __int64 GameData_2213d48;
extern __int64 GameData_2213d50;
extern __int64 GameData_2213d58;
extern __int64 GameData_2213d60;
extern __int64 GameData_2213d68;
extern __int64 GameData_2213d80;
extern __int64 GameData_2213d88;
extern __int64 GameData_2213d90;
extern __int64 GameData_2213d98;
extern __int64 GameData_2213da0;
extern __int64 GameData_2213da8;
extern __int64 GameData_2213dc0;
extern __int64 GameData_2213dc8;
extern __int64 GameData_2213dd0;
extern __int64 GameData_2213dd8;
extern __int64 GameData_2213de0;
extern __int64 GameData_2213de8;
extern __int64 GameData_2213e00;
extern __int64 GameData_2213e08;
extern __int64 GameData_2213e10;
extern __int64 GameData_2213e18;
extern __int64 GameData_2213e20;
extern __int64 GameData_2213e28;
extern __int64 GameData_2213e40;
extern __int64 GameData_2213e48;
extern __int64 GameData_2213e50;
extern __int64 GameData_2213e58;
extern __int64 GameData_2213e60;
extern __int64 GameData_2213e68;
extern __int64 GameData_2213e80;
extern __int64 GameData_2213e88;
extern __int64 GameData_2213e90;
extern __int64 GameData_2213e98;
extern __int64 GameData_2213ea0;
extern __int64 GameData_2213ea8;
extern __int64 GameData_2213ec0;
extern __int64 GameData_2213ec8;
extern __int64 GameData_2213ed0;
extern __int64 GameData_2213ed8;
extern __int64 GameData_2213ee0;
extern __int64 GameData_2213ee8;
extern __int64 GameData_2213f00;
extern __int64 GameData_2213f08;
extern __int64 GameData_2213f10;
extern __int64 GameData_2213f18;
extern __int64 GameData_2213f20;
extern __int64 GameData_2213f28;
extern __int64 GameData_2213f40;
extern __int64 GameData_2213f48;
extern __int64 GameData_2215718;
extern __int64 GameData_2215720;
extern __int64 GameData_2215728;
extern __int64 GameData_2215730;
extern __int64 GameData_2215738;
extern __int64 GameData_2215740;
extern __int64 GameData_2215758;
extern __int64 GameData_2215760;
extern __int64 GameData_2215768;
extern __int64 GameData_2215770;
extern __int64 GameData_2215778;
extern __int64 GameData_2215780;
extern __int64 GameData_2215798;
extern __int64 GameData_22157a0;
extern __int64 GameData_22157a8;
extern __int64 GameData_22157b0;
extern __int64 GameData_22157b8;
extern __int64 GameData_22157c0;
extern __int64 GameData_22157d8;
extern __int64 GameData_22157e0;
extern __int64 GameData_22157e8;
extern __int64 GameData_22157f0;
extern __int64 GameData_22157f8;
extern __int64 GameData_2215800;
extern __int64 GameData_2215818;
extern __int64 GameData_2215820;
extern __int64 GameData_2215828;
extern __int64 GameData_2215830;
extern __int64 GameData_2215838;
extern __int64 GameData_2215840;
extern __int64 GameData_2215858;
extern __int64 GameData_2215860;
extern __int64 GameData_2215868;
extern __int64 GameData_2215870;
extern __int64 GameData_2215878;
extern __int64 GameData_2215880;
extern __int64 GameData_2215898;
extern __int64 GameData_22158a0;
extern __int64 GameData_22158a8;
extern __int64 GameData_22158b0;
extern __int64 GameData_22158b8;
extern __int64 GameData_22158c0;
extern __int64 GameData_22158d8;
extern __int64 GameData_22158e0;
extern __int64 GameData_22158e8;
extern __int64 GameData_22158f0;
extern __int64 GameData_22158f8;
extern __int64 GameData_2215900;
extern __int64 GameData_2215918;
extern __int64 GameData_2215920;
extern __int64 GameData_2215928;
extern __int64 GameData_2215930;
extern __int64 GameData_2215938;
extern __int64 GameData_2215940;
extern __int64 GameData_2215958;
extern __int64 GameData_2215960;
extern __int64 GameData_2215968;
extern __int64 GameData_2215970;
extern __int64 GameData_2215978;
extern __int64 GameData_2215980;
extern __int64 GameData_2215998;
extern __int64 GameData_22159a0;
extern __int64 GameData_22159a8;
extern __int64 GameData_22159b0;
extern __int64 GameData_22159b8;
extern __int64 GameData_22159c0;
extern __int64 GameData_22159d8;
extern __int64 GameData_22159e0;
extern __int64 GameData_22159e8;
extern __int64 GameData_22159f0;
extern __int64 GameData_22159f8;
extern __int64 GameData_2215a00;
extern __int64 GameData_2215a18;
extern __int64 GameData_2215a20;
extern __int64 GameData_2215a28;
extern __int64 GameData_2215a30;
extern __int64 GameData_2215a38;
extern __int64 GameData_2215a40;
extern __int64 GameData_2215a58;
extern __int64 GameData_2215a60;
extern __int64 GameData_2215a68;
extern __int64 GameData_2215a70;
extern __int64 GameData_2215a78;
extern __int64 GameData_2215a80;
extern __int64 GameData_2215a98;
extern __int64 GameData_2215aa0;
extern __int64 GameData_2215aa8;
extern __int64 GameData_2215ab0;
extern __int64 GameData_2215ab8;
extern __int64 GameData_2215ac0;
extern __int64 GameData_2215ad8;
extern __int64 GameData_2215ae0;
extern __int64 GameData_2215ae8;
extern __int64 GameData_2215af0;
extern __int64 GameData_2215af8;
extern __int64 GameData_2215b00;
extern __int64 GameData_2215b18;
extern __int64 GameData_2215b20;
extern __int64 GameData_2215b28;
extern __int64 GameData_2215b30;
extern __int64 GameData_2215b38;
extern __int64 GameData_2215b40;
extern __int64 GameData_2215b48;
extern __int64 GameData_2215b50;
extern __int64 GameData_2215b68;
extern __int64 GameData_2215b70;
extern __int64 GameData_2215b78;
extern __int64 GameData_2215b80;
extern __int64 GameData_2215b88;
extern __int64 GameData_2215b90;
extern __int64 GameData_2215ba8;
extern __int64 GameData_2215bb0;
extern __int64 GameData_2215bb8;
extern __int64 GameData_2215bc0;
extern __int64 GameData_2215bc8;
extern __int64 GameData_2215bd0;
extern __int64 GameData_2215be8;
extern __int64 GameData_2215bf0;
extern __int64 GameData_2215bf8;
extern __int64 GameData_2215c00;
extern __int64 GameData_2215c08;
extern __int64 GameData_2215c10;
extern __int64 GameData_2215c28;
extern __int64 GameData_2215c30;
extern __int64 GameData_2215c38;
extern __int64 GameData_2215c40;
extern __int64 GameData_2215c48;
extern __int64 GameData_2215c50;
extern __int64 GameData_2215c68;
extern __int64 GameData_2215c70;
extern __int64 GameData_2215c78;
extern __int64 GameData_2215c80;
extern __int64 GameData_2215c88;
extern __int64 GameData_2215c90;
extern __int64 GameData_2215ca8;
extern __int64 GameData_2215cb0;
extern __int64 GameData_2215cb8;
extern __int64 GameData_2215cc0;
extern __int64 GameData_2215cc8;
extern __int64 GameData_2215cd0;
extern __int64 GameData_2215ce8;
extern __int64 GameData_2215cf0;
extern __int64 GameData_2215cf8;
extern __int64 GameData_2215d00;
extern __int64 GameData_2215d08;
extern __int64 GameData_2215d10;
extern __int64 GameData_2215d28;
extern __int64 GameData_2215d30;
extern __int64 GameData_2215d38;
extern __int64 GameData_2215d40;
extern __int64 GameData_2215d48;
extern __int64 GameData_2215d50;
extern __int64 GameData_2215d68;
extern __int64 GameData_2215d70;
extern __int64 GameData_2215d78;
extern __int64 GameData_2215d80;
extern __int64 GameData_2215d88;
extern __int64 GameData_2215d90;
extern __int64 GameData_2215da8;
extern __int64 GameData_2215db0;
extern __int64 GameData_22162b0;
extern __int64 GameData_22162b8;
extern __int64 GameData_22162c0;
extern __int64 GameData_22162c8;
extern __int64 GameData_22162d0;
extern __int64 GameData_22162d8;
extern __int64 GameData_22162e0;
extern __int64 GameData_22162e8;
extern __int64 GameData_22162f0;
extern __int64 GameData_22162f8;
extern __int64 GameData_2216300;
extern __int64 GameData_2216318;
extern __int64 GameData_2216320;
extern __int64 GameData_2216328;
extern __int64 GameData_2216330;
extern __int64 GameData_2216338;
extern __int64 GameData_2216340;
extern __int64 GameData_2216348;
extern __int64 GameData_2216350;
extern __int64 GameData_2216368;
extern __int64 GameData_2216370;
extern __int64 GameData_2216378;
extern __int64 GameData_2216380;
extern __int64 GameData_2216388;
extern __int64 GameData_2216390;
extern __int64 GameData_2216398;
extern __int64 GameData_22163a0;
extern __int64 GameData_22163b8;
extern __int64 GameData_22163c0;
extern __int64 GameData_22163c8;
extern __int64 GameData_22163d0;
extern __int64 GameData_22163d8;
extern __int64 GameData_22163e0;
extern __int64 GameData_22163e8;
extern __int64 GameData_22163f0;
extern __int64 GameData_2216408;
extern __int64 GameData_2216418;
extern __int64 GameData_2216420;
extern __int64 GameData_2216428;
extern __int64 GameData_2216430;
extern __int64 GameData_2216438;
extern __int64 GameData_2216440;
extern __int64 GameData_2216458;
extern __int64 GameData_2216468;
extern __int64 GameData_2216470;
extern __int64 GameData_2216478;
extern __int64 GameData_2216480;
extern __int64 GameData_2216488;
extern __int64 GameData_2216490;
extern __int64 GameData_22164a8;
extern __int64 GameData_22164b8;
extern __int64 GameData_22164c0;
extern __int64 GameData_22164c8;
extern __int64 GameData_22164d0;
extern __int64 GameData_22164d8;
extern __int64 GameData_22164f0;
extern __int64 GameData_22164f8;
extern __int64 GameData_2216500;
extern __int64 GameData_2216508;
extern __int64 GameData_2216510;
extern __int64 GameData_2216518;
extern __int64 GameData_2216530;
extern __int64 GameData_2216538;
extern __int64 GameData_2216540;
extern __int64 GameData_2216548;
extern __int64 GameData_2216550;
extern __int64 GameData_2216558;
extern __int64 GameData_2216570;
extern __int64 GameData_2216578;
extern __int64 GameData_2216580;
extern __int64 GameData_2216588;
extern __int64 GameData_2216590;
extern __int64 GameData_2216598;
extern __int64 GameData_22165b0;
extern __int64 GameData_22165b8;
extern __int64 GameData_22165c0;
extern __int64 GameData_22165c8;
extern __int64 GameData_22165d0;
extern __int64 GameData_22165d8;
extern __int64 GameData_22165f0;
extern __int64 GameData_22165f8;
extern __int64 GameData_2216600;
extern __int64 GameData_2216608;
extern __int64 GameData_2216610;
extern __int64 GameData_2216618;
extern __int64 GameData_2216630;
extern __int64 GameData_2216638;
extern __int64 GameData_2216640;
extern __int64 GameData_2216648;
extern __int64 GameData_2216650;
extern __int64 GameData_2216658;
extern __int64 GameData_2216670;
extern __int64 GameData_2216678;
extern __int64 GameData_2216680;
extern __int64 GameData_2216688;
extern __int64 GameData_2216690;
extern __int64 GameData_2216698;
extern __int64 GameData_22166b0;
extern __int64 GameData_22166b8;
extern __int64 GameData_22166c0;
extern __int64 GameData_22166c8;
extern __int64 GameData_22166d0;
extern __int64 GameData_22166d8;
extern __int64 GameData_22166f0;
extern __int64 GameData_22166f8;
extern __int64 GameData_2216700;
extern __int64 GameData_2216708;
extern __int64 GameData_2216710;
extern __int64 GameData_2216718;
extern __int64 GameData_2216730;
extern __int64 GameData_2216738;
extern __int64 GameData_2216740;
extern __int64 GameData_2216748;
extern __int64 GameData_2216750;
extern __int64 GameData_2216758;
extern __int64 GameData_2216770;
extern __int64 GameData_2216778;
extern __int64 GameData_221b2f8;
extern __int64 GameData_221b300;
extern __int64 GameData_221b308;
extern __int64 GameData_221b318;
extern __int64 GameData_221b328;
extern __int64 GameData_221b338;
extern __int64 GameData_221b340;
extern __int64 GameData_221b348;
extern __int64 GameData_221b358;
extern __int64 GameData_221b368;
extern __int64 GameData_221b378;
extern __int64 GameData_221b380;
extern __int64 GameData_221b388;
extern __int64 GameData_221b398;
extern __int64 GameData_221b3a8;
extern __int64 GameData_221b3b8;
extern __int64 GameData_221b3c0;
extern __int64 GameData_221b3c8;
extern __int64 GameData_221b3d8;
extern __int64 GameData_221b3e8;
extern __int64 GameData_221c4d8;
extern __int64 GameData_221c4e0;
extern __int64 GameData_221c4e8;
extern __int64 GameData_221c4f0;
extern __int64 GameData_221c4f8;
extern __int64 GameData_221c500;
extern __int64 GameData_221c518;
extern __int64 GameData_221c520;
extern __int64 GameData_221c528;
extern __int64 GameData_221c530;
extern __int64 GameData_221c538;
extern __int64 GameData_221c540;
extern __int64 GameData_221c558;
extern __int64 GameData_221c560;
extern __int64 GameData_221c568;
extern __int64 GameData_221c570;
extern __int64 GameData_221c578;
extern __int64 GameData_221c580;
extern __int64 GameData_221c598;
extern __int64 GameData_221c5a0;
extern __int64 GameData_221c5a8;
extern __int64 GameData_221c5b0;
extern __int64 GameData_221c5b8;
extern __int64 GameData_221c5c0;
extern __int64 GameData_221c5d8;
extern __int64 GameData_221c5e0;
extern __int64 GameData_221c5e8;
extern __int64 GameData_221c5f0;
extern __int64 GameData_221c5f8;
extern __int64 GameData_221c600;
extern __int64 GameData_221c618;
extern __int64 GameData_221c620;
extern __int64 GameData_221c628;
extern __int64 GameData_221c630;
extern __int64 GameData_221c638;
extern __int64 GameData_221c640;
extern __int64 GameData_221c658;
extern __int64 GameData_221c660;
extern __int64 GameData_221c668;
extern __int64 GameData_221c670;
extern __int64 GameData_221c678;
extern __int64 GameData_221c680;
extern __int64 GameData_221c698;
extern __int64 GameData_221c6a0;
extern __int64 GameData_221c6a8;
extern __int64 GameData_221c6b0;
extern __int64 GameData_221c6b8;
extern __int64 GameData_221c6c0;
extern __int64 GameData_221c6d8;
extern __int64 GameData_221c6e0;
extern __int64 GameData_221c6e8;
extern __int64 GameData_221c6f0;
extern __int64 GameData_221c6f8;
extern __int64 GameData_221c700;
extern __int64 GameData_221c718;
extern __int64 GameData_221c720;
extern __int64 GameData_221c728;
extern __int64 GameData_221c730;
extern __int64 GameData_221c738;
extern __int64 GameData_221c740;
extern __int64 GameData_221c748;
extern __int64 GameData_221c750;
extern __int64 GameData_221c768;
extern __int64 GameData_221c770;
extern __int64 GameData_221c778;
extern __int64 GameData_221c780;
extern __int64 GameData_221c788;
extern __int64 GameData_221c790;
extern __int64 GameData_221c7a8;
extern __int64 GameData_221c7b0;
extern __int64 GameData_221c7b8;
extern __int64 GameData_221c7c0;
extern __int64 GameData_221c7c8;
extern __int64 GameData_221c7d0;
extern __int64 GameData_221c7e8;
extern __int64 GameData_221c7f0;
extern __int64 GameData_221c7f8;
extern __int64 GameData_221c800;
extern __int64 GameData_221c808;
extern __int64 GameData_221c810;
extern __int64 GameData_221c828;
extern __int64 GameData_221c830;
extern __int64 GameData_221c838;
extern __int64 GameData_221c840;
extern __int64 GameData_221c848;
extern __int64 GameData_221c850;
extern __int64 GameData_221c868;
extern __int64 GameData_221c870;
extern __int64 GameData_221c878;
extern __int64 GameData_221c880;
extern __int64 GameData_221c888;
extern __int64 GameData_221c890;
extern __int64 GameData_221c8a8;
extern __int64 GameData_221c8b0;
extern __int64 GameData_221c8b8;
extern __int64 GameData_221c8c0;
extern __int64 GameData_221c8c8;
extern __int64 GameData_221c8d0;
extern __int64 GameData_221c8e8;
extern __int64 GameData_221c8f0;
extern __int64 GameData_221c8f8;
extern __int64 GameData_221c900;
extern __int64 GameData_221c908;
extern __int64 GameData_221c910;
extern __int64 GameData_221c928;
extern __int64 GameData_221c930;
extern __int64 GameData_221c938;
extern __int64 GameData_221c940;
extern __int64 GameData_221c948;
extern __int64 GameData_221c950;
extern __int64 GameData_221c968;
extern __int64 GameData_221c970;
extern __int64 GameData_221c978;
extern __int64 GameData_221c980;
extern __int64 GameData_221c988;
extern __int64 GameData_221c990;
extern __int64 GameData_221c9a8;
extern __int64 GameData_221c9b0;
extern __int64 GameData_221c9b8;
extern __int64 GameData_221c9c0;
extern __int64 GameData_221c9c8;
extern __int64 GameData_221c9d0;
extern __int64 GameData_221c9e8;
extern __int64 GameData_221c9f0;
extern __int64 GameData_221c9f8;
extern __int64 GameData_221ca00;
extern __int64 GameData_221ca08;
extern __int64 GameData_221ca10;
extern __int64 GameData_221ca28;
extern __int64 GameData_221ca30;
extern __int64 GameData_221ca38;
extern __int64 GameData_221ca40;
extern __int64 GameData_221ca48;
extern __int64 GameData_221ca50;
extern __int64 GameData_221ca68;
extern __int64 GameData_221ca70;
extern __int64 GameData_221ca78;
extern __int64 GameData_221ca80;
extern __int64 GameData_221ca88;
extern __int64 GameData_221ca90;
extern __int64 GameData_221caa8;
extern __int64 GameData_221cab0;
extern __int64 GameData_221cab8;
extern __int64 GameData_221cac0;
extern __int64 GameData_221cac8;
extern __int64 GameData_221cad0;
extern __int64 GameData_221cae8;
extern __int64 GameData_221caf0;
extern __int64 GameData_221caf8;
extern __int64 GameData_221cb00;
extern __int64 GameData_221cb08;
extern __int64 GameData_221cb10;
extern __int64 GameData_221cb28;
extern __int64 GameData_221cb30;
extern __int64 GameData_221cb38;
extern __int64 GameData_221cb40;
extern __int64 GameData_221cb48;
extern __int64 GameData_221cb50;
extern __int64 GameData_221cb68;
extern __int64 GameData_221cb70;
extern __int64 GameData_221cb78;
extern __int64 GameData_221cb80;
extern __int64 GameData_221cb88;
extern __int64 GameData_221cb90;
extern __int64 GameData_221cba8;
extern __int64 GameData_221cbb0;
extern __int64 GameData_221cbb8;
extern __int64 GameData_221cbc0;
extern __int64 GameData_221cbc8;
extern __int64 GameData_221cbd0;
extern __int64 GameData_221cbe8;
extern __int64 GameData_221cbf0;
extern __int64 GameData_221cbf8;
extern __int64 GameData_221cc00;
extern __int64 GameData_221cc08;
extern __int64 GameData_221cc10;
extern __int64 GameData_221cc28;
extern __int64 GameData_221cc30;
extern __int64 GameData_221cc38;
extern __int64 GameData_221cc40;
extern __int64 GameData_221cc48;
extern __int64 GameData_221cc50;
extern __int64 GameData_221cc68;
extern __int64 GameData_221cc70;
extern __int64 GameData_221cc78;
extern __int64 GameData_221cc80;
extern __int64 GameData_221cc88;
extern __int64 GameData_221cc90;
extern __int64 GameData_221cca8;
extern __int64 GameData_221ccb0;
extern __int64 GameData_221ccb8;
extern __int64 GameData_221ccc0;
extern __int64 GameData_221ccc8;
extern __int64 GameData_221ccd0;
extern __int64 GameData_221cce8;
extern __int64 GameData_221ccf0;
extern __int64 GameData_221ccf8;
extern __int64 GameData_221cd00;
extern __int64 GameData_221cd08;
extern __int64 GameData_221cd10;
extern __int64 GameData_221cd28;
extern __int64 GameData_221cd30;
extern __int64 GameData_221cd38;
extern __int64 GameData_221cd40;
extern __int64 GameData_221cd48;
extern __int64 GameData_221cd50;
extern __int64 GameData_221cd68;
extern __int64 GameData_221cd70;
extern __int64 GameData_221cd78;
extern __int64 GameData_221cd80;
extern __int64 GameData_221cd88;
extern __int64 GameData_221cd90;
extern __int64 GameData_221cda8;
extern __int64 GameData_221cdb0;
extern __int64 GameData_221cdb8;
extern __int64 GameData_221cdc0;
extern __int64 GameData_221cdc8;
extern __int64 GameData_221cdd0;
extern __int64 GameData_221cde8;
extern __int64 GameData_221cdf0;
extern __int64 GameData_221cdf8;
extern __int64 GameData_221ce00;
extern __int64 GameData_221ce08;
extern __int64 GameData_221ce10;
extern __int64 GameData_221ce28;
extern __int64 GameData_221ce30;
extern __int64 GameData_221ce38;
extern __int64 GameData_221ce40;
extern __int64 GameData_221ce48;
extern __int64 GameData_221ce50;
extern __int64 GameData_221ce68;
extern __int64 GameData_221ce70;
extern __int64 GameData_221ce78;
extern __int64 GameData_221ce80;
extern __int64 GameData_221ce88;
extern __int64 GameData_221ce90;
extern __int64 GameData_221cea8;
extern __int64 GameData_221ceb0;
extern __int64 GameData_221ceb8;
extern __int64 GameData_221cec0;
extern __int64 GameData_221cec8;
extern __int64 GameData_221ced0;
extern __int64 GameData_221cee8;
extern __int64 GameData_221cef0;
extern __int64 GameData_221cef8;
extern __int64 GameData_221cf00;
extern __int64 GameData_221cf08;
extern __int64 GameData_221cf10;
extern __int64 GameData_221cf28;
extern __int64 GameData_221cf30;
extern __int64 GameData_221cf38;
extern __int64 GameData_221cf40;
extern __int64 GameData_221cf48;
extern __int64 GameData_221cf50;
extern __int64 GameData_221cf68;
extern __int64 GameData_221cf70;
extern __int64 GameData_221cf78;
extern __int64 GameData_221cf80;
extern __int64 GameData_221cf88;
extern __int64 GameData_221cf90;
extern __int64 GameData_221cfa8;
extern __int64 GameData_221cfb0;
extern __int64 GameData_221cfb8;
extern __int64 GameData_221cfc0;
extern __int64 GameData_221cfc8;
extern __int64 GameData_221cfd0;
extern __int64 GameData_221cfe8;
extern __int64 GameData_221cff0;
extern __int64 GameData_221cff8;
extern __int64 GameData_221d000;
extern __int64 GameData_221d008;
extern __int64 GameData_221d010;
extern __int64 GameData_221d028;
extern __int64 GameData_221d030;
extern __int64 GameData_221d038;
extern __int64 GameData_221d040;
extern __int64 GameData_221d048;
extern __int64 GameData_221d050;
extern __int64 GameData_221d068;
extern __int64 GameData_221d070;
extern __int64 GameData_221d078;
extern __int64 GameData_221d080;
extern __int64 GameData_221d088;
extern __int64 GameData_221d090;
extern __int64 GameData_221d0a8;
extern __int64 GameData_221d0b0;
extern __int64 GameData_221d0b8;
extern __int64 GameData_221d0c0;
extern __int64 GameData_221d0c8;
extern __int64 GameData_221d0d0;
extern __int64 GameData_221d0e8;
extern __int64 GameData_221d0f0;
extern __int64 GameData_221d0f8;
extern __int64 GameData_221d100;
extern __int64 GameData_221d108;
extern __int64 GameData_221d110;
extern __int64 GameData_221d128;
extern __int64 GameData_221d130;
extern __int64 GameData_221d138;
extern __int64 GameData_221d140;
extern __int64 GameData_221d148;
extern __int64 GameData_221d150;
extern __int64 GameData_221d168;
extern __int64 GameData_221d170;
extern __int64 GameData_221d178;
extern __int64 GameData_221d180;
extern __int64 GameData_221d188;
extern __int64 GameData_221d190;
extern __int64 GameData_221d1a8;
extern __int64 GameData_221d1b0;
extern __int64 GameData_221d1b8;
extern __int64 GameData_221d1c0;
extern __int64 GameData_221d1c8;
extern __int64 GameData_221d1d0;
extern __int64 GameData_221d1e8;
extern __int64 GameData_221d1f0;
extern __int64 GameData_221d1f8;
extern __int64 GameData_221d200;
extern __int64 GameData_221d208;
extern __int64 GameData_221d210;
extern __int64 GameData_221d228;
extern __int64 GameData_221d230;
extern __int64 GameData_221d238;
extern __int64 GameData_221d240;
extern __int64 GameData_221d248;
extern __int64 GameData_221d250;
extern __int64 GameData_221d268;
extern __int64 GameData_221d270;
extern __int64 GameData_221d278;
extern __int64 GameData_221d280;
extern __int64 GameData_221d288;
extern __int64 GameData_221d290;
extern __int64 GameData_221d2a8;
extern __int64 GameData_221d2b0;
extern __int64 GameData_221d2b8;
extern __int64 GameData_221d2c0;
extern __int64 GameData_221d2c8;
extern __int64 GameData_221d2d0;
extern __int64 GameData_221d2e8;
extern __int64 GameData_221d2f0;
extern __int64 GameData_221d2f8;
extern __int64 GameData_221d300;
extern __int64 GameData_221d308;
extern __int64 GameData_221d310;
extern __int64 GameData_221d328;
extern __int64 GameData_221d330;
extern __int64 GameData_221d338;
extern __int64 GameData_221d340;
extern __int64 GameData_221d348;
extern __int64 GameData_221d350;
extern __int64 GameData_221d368;
extern __int64 GameData_221d370;
extern __int64 GameData_221d378;
extern __int64 GameData_221d380;
extern __int64 GameData_221d388;
extern __int64 GameData_221d390;
extern __int64 GameData_221d3a8;
extern __int64 GameData_221d3b0;
extern __int64 GameData_221d3b8;
extern __int64 GameData_221d3c0;
extern __int64 GameData_221d3c8;
extern __int64 GameData_221d3d0;
extern __int64 GameData_221d3e8;
extern __int64 GameData_221d3f0;
extern __int64 GameData_221d3f8;
extern __int64 GameData_221d400;
extern __int64 GameData_221d408;
extern __int64 GameData_221d410;
extern __int64 GameData_221d428;
extern __int64 GameData_221d430;
extern __int64 GameData_221d438;
extern __int64 GameData_221d440;
extern __int64 GameData_221d448;
extern __int64 GameData_221d450;
extern __int64 GameData_221d468;
extern __int64 GameData_221d470;
extern __int64 GameData_2258178;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 game_sound_g_game_sound;
extern char GameData_1a9f09e;
extern char GameData_21ec594;
extern char GameData_220b560;
extern char GameData_220b568;
extern char GameData_220b5a0;
extern char GameData_220b5a8;
extern char GameData_220b5e0;
extern char GameData_220b5e8;
extern char GameData_220b620;
extern char GameData_220b628;
extern char GameData_220b660;
extern char GameData_220b668;
extern char GameData_220b738;
extern char GameData_220b740;
extern char GameData_220b778;
extern char GameData_220b780;
extern char GameData_220b7b8;
extern char GameData_220b7c0;
extern char GameData_220b7f8;
extern char GameData_220b800;
extern char GameData_220b838;
extern char GameData_220b840;
extern char GameData_220b878;
extern char GameData_220b880;
extern char GameData_220b8b8;
extern char GameData_220b8c0;
extern char GameData_220b8f8;
extern char GameData_220b900;
extern char GameData_220b938;
extern char GameData_220b940;
extern char GameData_220b978;
extern char GameData_220b980;
extern char GameData_220b9b8;
extern char GameData_220b9c0;
extern char GameData_220b9f8;
extern char GameData_220ba00;
extern char GameData_220ba38;
extern char GameData_220ba40;
extern char GameData_220ba78;
extern char GameData_220ba80;
extern char GameData_220bab8;
extern char GameData_220bac0;
extern char GameData_220baf8;
extern char GameData_220bb00;
extern char GameData_220bb38;
extern char GameData_220bb40;
extern char GameData_220bb78;
extern char GameData_220bb80;
extern char GameData_220bbb8;
extern char GameData_220bbc0;
extern char GameData_220bbf8;
extern char GameData_220bc00;
extern char GameData_220bc38;
extern char GameData_220bc40;
extern char GameData_220bc78;
extern char GameData_220bc80;
extern char GameData_220bcb8;
extern char GameData_220bcc0;
extern char GameData_220bcf8;
extern char GameData_220bd00;
extern char GameData_220bd38;
extern char GameData_220bd40;
extern char GameData_220bd78;
extern char GameData_220bd80;
extern char GameData_220bdb8;
extern char GameData_220bdc0;
extern char GameData_220bdf8;
extern char GameData_220be00;
extern char GameData_220be38;
extern char GameData_220be40;
extern char GameData_220be78;
extern char GameData_220be80;
extern char GameData_220beb8;
extern char GameData_220bec0;
extern char GameData_220bef8;
extern char GameData_220bf00;
extern char GameData_220bf38;
extern char GameData_220bf40;
extern char GameData_220bf78;
extern char GameData_220bf80;
extern char GameData_220bfb8;
extern char GameData_220bfc0;
extern char GameData_220bff8;
extern char GameData_220c000;
extern char GameData_220c038;
extern char GameData_220c040;
extern char GameData_220c078;
extern char GameData_220c080;
extern char GameData_220c0b8;
extern char GameData_220c0c0;
extern char GameData_220c0f8;
extern char GameData_220c100;
extern char GameData_220c138;
extern char GameData_220c140;
extern char GameData_220c178;
extern char GameData_220c180;
extern char GameData_220c1b8;
extern char GameData_220c1c0;
extern char GameData_220c1f8;
extern char GameData_220c200;
extern char GameData_220c238;
extern char GameData_220c240;
extern char GameData_220c278;
extern char GameData_220c280;
extern char GameData_220c2b8;
extern char GameData_220c2c0;
extern char GameData_220c2f8;
extern char GameData_220c300;
extern char GameData_220c338;
extern char GameData_220c340;
extern char GameData_220c378;
extern char GameData_220c380;
extern char GameData_220c3b8;
extern char GameData_220c3c0;
extern char GameData_220c3f8;
extern char GameData_220c400;
extern char GameData_220c438;
extern char GameData_220c440;
extern char GameData_220c478;
extern char GameData_220c480;
extern char GameData_220c4b8;
extern char GameData_220c4c0;
extern char GameData_220c4f8;
extern char GameData_220c500;
extern char GameData_220c538;
extern char GameData_220c540;
extern char GameData_220c578;
extern char GameData_220c580;
extern char GameData_220c5b8;
extern char GameData_220c5c0;
extern char GameData_220c5f8;
extern char GameData_220c600;
extern char GameData_220c638;
extern char GameData_220c640;
extern char GameData_220c678;
extern char GameData_220c680;
extern char GameData_220c6b8;
extern char GameData_220c6c0;
extern char GameData_220c6f8;
extern char GameData_220c700;
extern char GameData_220c738;
extern char GameData_220c740;
extern char GameData_220c778;
extern char GameData_220c780;
extern char GameData_220c7b8;
extern char GameData_220c7c0;
extern char GameData_220c7f8;
extern char GameData_220c800;
extern char GameData_220c838;
extern char GameData_220c840;
extern char GameData_220c878;
extern char GameData_220c880;
extern char GameData_220c8b8;
extern char GameData_220c8c0;
extern char GameData_220c8f8;
extern char GameData_220c900;
extern char GameData_220c938;
extern char GameData_220c940;
extern char GameData_220c978;
extern char GameData_220c980;
extern char GameData_220c9b8;
extern char GameData_220c9c0;
extern char GameData_220c9f8;
extern char GameData_220ca00;
extern char GameData_220ca38;
extern char GameData_220ca40;
extern char GameData_220ca78;
extern char GameData_220ca80;
extern char GameData_220cab8;
extern char GameData_220cac0;
extern char GameData_220caf8;
extern char GameData_220cb00;
extern char GameData_220cb38;
extern char GameData_220cb40;
extern char GameData_220cb78;
extern char GameData_220cb80;
extern char GameData_220cbb8;
extern char GameData_220cbc0;
extern char GameData_220cbf8;
extern char GameData_220cc00;
extern char GameData_220cc38;
extern char GameData_220cc40;
extern char GameData_220cc78;
extern char GameData_220cc80;
extern char GameData_220ccb8;
extern char GameData_220ccc0;
extern char GameData_220ccf8;
extern char GameData_220cd00;
extern char GameData_220cd38;
extern char GameData_220cd40;
extern char GameData_220cd78;
extern char GameData_220cd80;
extern char GameData_220cdb8;
extern char GameData_220cdc0;
extern char GameData_220cdf8;
extern char GameData_220ce00;
extern char GameData_220ce38;
extern char GameData_220ce40;
extern char GameData_220ce78;
extern char GameData_220ce80;
extern char GameData_220ceb8;
extern char GameData_220cec0;
extern char GameData_220cef8;
extern char GameData_220cf00;
extern char GameData_220cf38;
extern char GameData_220cf40;
extern char GameData_220cf78;
extern char GameData_220cf80;
extern char GameData_220cfb8;
extern char GameData_220cfc0;
extern char GameData_220cff8;
extern char GameData_220d000;
extern char GameData_220d038;
extern char GameData_220d040;
extern char GameData_220d078;
extern char GameData_220d080;
extern char GameData_220d0b8;
extern char GameData_220d0c0;
extern char GameData_220d0f8;
extern char GameData_220d100;
extern char GameData_220d138;
extern char GameData_220d140;
extern char GameData_220d178;
extern char GameData_220d180;
extern char GameData_220d1b8;
extern char GameData_220d1c0;
extern char GameData_220d1f8;
extern char GameData_220d200;
extern char GameData_220d238;
extern char GameData_220d240;
extern char GameData_220d278;
extern char GameData_220d280;
extern char GameData_220d2b8;
extern char GameData_220d2c0;
extern char GameData_220d2f8;
extern char GameData_220d300;
extern char GameData_220d338;
extern char GameData_220d340;
extern char GameData_220d378;
extern char GameData_220d380;
extern char GameData_220d3b8;
extern char GameData_220d3c0;
extern char GameData_220d3f8;
extern char GameData_220d400;
extern char GameData_220d438;
extern char GameData_220d440;
extern char GameData_220d478;
extern char GameData_220d480;
extern char GameData_220d4b8;
extern char GameData_220d4c0;
extern char GameData_220d4f8;
extern char GameData_220d500;
extern char GameData_220d538;
extern char GameData_220d540;
extern char GameData_220d578;
extern char GameData_220d580;
extern char GameData_220d5b8;
extern char GameData_220d5c0;
extern char GameData_220d5f8;
extern char GameData_220d600;
extern char GameData_2213870;
extern char GameData_2213878;
extern char GameData_22138b0;
extern char GameData_22138b8;
extern char GameData_22138f0;
extern char GameData_22138f8;
extern char GameData_2213958;
extern char GameData_2213960;
extern char GameData_22139a8;
extern char GameData_22139b0;
extern char GameData_22139f8;
extern char GameData_2213a00;
extern char GameData_2213b30;
extern char GameData_2213b38;
extern char GameData_2213b70;
extern char GameData_2213b78;
extern char GameData_2213bb0;
extern char GameData_2213bb8;
extern char GameData_2213bf0;
extern char GameData_2213bf8;
extern char GameData_2213c30;
extern char GameData_2213c38;
extern char GameData_2213c70;
extern char GameData_2213c78;
extern char GameData_2213cb0;
extern char GameData_2213cb8;
extern char GameData_2213cf0;
extern char GameData_2213cf8;
extern char GameData_2213d30;
extern char GameData_2213d38;
extern char GameData_2213d70;
extern char GameData_2213d78;
extern char GameData_2213db0;
extern char GameData_2213db8;
extern char GameData_2213df0;
extern char GameData_2213df8;
extern char GameData_2213e30;
extern char GameData_2213e38;
extern char GameData_2213e70;
extern char GameData_2213e78;
extern char GameData_2213eb0;
extern char GameData_2213eb8;
extern char GameData_2213ef0;
extern char GameData_2213ef8;
extern char GameData_2213f30;
extern char GameData_2213f38;
extern char GameData_2215748;
extern char GameData_2215750;
extern char GameData_2215788;
extern char GameData_2215790;
extern char GameData_22157c8;
extern char GameData_22157d0;
extern char GameData_2215808;
extern char GameData_2215810;
extern char GameData_2215848;
extern char GameData_2215850;
extern char GameData_2215888;
extern char GameData_2215890;
extern char GameData_22158c8;
extern char GameData_22158d0;
extern char GameData_2215908;
extern char GameData_2215910;
extern char GameData_2215948;
extern char GameData_2215950;
extern char GameData_2215988;
extern char GameData_2215990;
extern char GameData_22159c8;
extern char GameData_22159d0;
extern char GameData_2215a08;
extern char GameData_2215a10;
extern char GameData_2215a48;
extern char GameData_2215a50;
extern char GameData_2215a88;
extern char GameData_2215a90;
extern char GameData_2215ac8;
extern char GameData_2215ad0;
extern char GameData_2215b08;
extern char GameData_2215b10;
extern char GameData_2215b58;
extern char GameData_2215b60;
extern char GameData_2215b98;
extern char GameData_2215ba0;
extern char GameData_2215bd8;
extern char GameData_2215be0;
extern char GameData_2215c18;
extern char GameData_2215c20;
extern char GameData_2215c58;
extern char GameData_2215c60;
extern char GameData_2215c98;
extern char GameData_2215ca0;
extern char GameData_2215cd8;
extern char GameData_2215ce0;
extern char GameData_2215d18;
extern char GameData_2215d20;
extern char GameData_2215d58;
extern char GameData_2215d60;
extern char GameData_2215d98;
extern char GameData_2215da0;
extern char GameData_2216308;
extern char GameData_2216310;
extern char GameData_2216358;
extern char GameData_2216360;
extern char GameData_22163a8;
extern char GameData_22163b0;
extern char GameData_22163f8;
extern char GameData_2216400;
extern char GameData_2216448;
extern char GameData_2216450;
extern char GameData_2216498;
extern char GameData_22164a0;
extern char GameData_22164e0;
extern char GameData_22164e8;
extern char GameData_2216520;
extern char GameData_2216528;
extern char GameData_2216560;
extern char GameData_2216568;
extern char GameData_22165a0;
extern char GameData_22165a8;
extern char GameData_22165e0;
extern char GameData_22165e8;
extern char GameData_2216620;
extern char GameData_2216628;
extern char GameData_2216660;
extern char GameData_2216668;
extern char GameData_22166a0;
extern char GameData_22166a8;
extern char GameData_22166e0;
extern char GameData_22166e8;
extern char GameData_2216720;
extern char GameData_2216728;
extern char GameData_2216760;
extern char GameData_2216768;
extern char GameData_221b2f0;
extern char GameData_221b330;
extern char GameData_221b370;
extern char GameData_221b3b0;
extern char GameData_221c508;
extern char GameData_221c510;
extern char GameData_221c548;
extern char GameData_221c550;
extern char GameData_221c588;
extern char GameData_221c590;
extern char GameData_221c5c8;
extern char GameData_221c5d0;
extern char GameData_221c608;
extern char GameData_221c610;
extern char GameData_221c648;
extern char GameData_221c650;
extern char GameData_221c688;
extern char GameData_221c690;
extern char GameData_221c6c8;
extern char GameData_221c6d0;
extern char GameData_221c708;
extern char GameData_221c710;
extern char GameData_221c758;
extern char GameData_221c760;
extern char GameData_221c798;
extern char GameData_221c7a0;
extern char GameData_221c7d8;
extern char GameData_221c7e0;
extern char GameData_221c818;
extern char GameData_221c820;
extern char GameData_221c858;
extern char GameData_221c860;
extern char GameData_221c898;
extern char GameData_221c8a0;
extern char GameData_221c8d8;
extern char GameData_221c8e0;
extern char GameData_221c918;
extern char GameData_221c920;
extern char GameData_221c958;
extern char GameData_221c960;
extern char GameData_221c998;
extern char GameData_221c9a0;
extern char GameData_221c9d8;
extern char GameData_221c9e0;
extern char GameData_221ca18;
extern char GameData_221ca20;
extern char GameData_221ca58;
extern char GameData_221ca60;
extern char GameData_221ca98;
extern char GameData_221caa0;
extern char GameData_221cad8;
extern char GameData_221cae0;
extern char GameData_221cb18;
extern char GameData_221cb20;
extern char GameData_221cb58;
extern char GameData_221cb60;
extern char GameData_221cb98;
extern char GameData_221cba0;
extern char GameData_221cbd8;
extern char GameData_221cbe0;
extern char GameData_221cc18;
extern char GameData_221cc20;
extern char GameData_221cc58;
extern char GameData_221cc60;
extern char GameData_221cc98;
extern char GameData_221cca0;
extern char GameData_221ccd8;
extern char GameData_221cce0;
extern char GameData_221cd18;
extern char GameData_221cd20;
extern char GameData_221cd58;
extern char GameData_221cd60;
extern char GameData_221cd98;
extern char GameData_221cda0;
extern char GameData_221cdd8;
extern char GameData_221cde0;
extern char GameData_221ce18;
extern char GameData_221ce20;
extern char GameData_221ce58;
extern char GameData_221ce60;
extern char GameData_221ce98;
extern char GameData_221cea0;
extern char GameData_221ced8;
extern char GameData_221cee0;
extern char GameData_221cf18;
extern char GameData_221cf20;
extern char GameData_221cf58;
extern char GameData_221cf60;
extern char GameData_221cf98;
extern char GameData_221cfa0;
extern char GameData_221cfd8;
extern char GameData_221cfe0;
extern char GameData_221d018;
extern char GameData_221d020;
extern char GameData_221d058;
extern char GameData_221d060;
extern char GameData_221d098;
extern char GameData_221d0a0;
extern char GameData_221d0d8;
extern char GameData_221d0e0;
extern char GameData_221d118;
extern char GameData_221d120;
extern char GameData_221d158;
extern char GameData_221d160;
extern char GameData_221d198;
extern char GameData_221d1a0;
extern char GameData_221d1d8;
extern char GameData_221d1e0;
extern char GameData_221d218;
extern char GameData_221d220;
extern char GameData_221d258;
extern char GameData_221d260;
extern char GameData_221d298;
extern char GameData_221d2a0;
extern char GameData_221d2d8;
extern char GameData_221d2e0;
extern char GameData_221d318;
extern char GameData_221d320;
extern char GameData_221d358;
extern char GameData_221d360;
extern char GameData_221d398;
extern char GameData_221d3a0;
extern char GameData_221d3d8;
extern char GameData_221d3e0;
extern char GameData_221d418;
extern char GameData_221d420;
extern char GameData_221d458;
extern char GameData_221d460;
extern int GameData_21ec57c;
extern int GameData_21ec580;
extern int GameData_21ec584;
extern int GameData_21ec590;
extern int GameData_2213a10;
extern int GameData_2213a38;
extern int GameData_2213a60;
extern int GameData_2213a88;
extern int GameData_2213ab0;
extern int GameData_2213ad8;
extern int GameData_2213b00;
extern int GameData_2216410;
extern int GameData_2216460;
extern int GameData_22164b0;
extern int GameData_221b310;
extern int GameData_221b320;
extern int GameData_221b350;
extern int GameData_221b360;
extern int GameData_221b390;
extern int GameData_221b3a0;
extern int GameData_221b3d0;
extern int GameData_221b3e0;
float CharacterRotate_d52080(__int64);
float GameRoutine_d1cbc0(_QWORD, _QWORD);
float Unit_6c7fa0(__int64, __int64);
float fmodf_alt1(float, float) __asm__("fmodf");
float powf(float, float);
unsigned __int64 GameRoutine_d271a0(__int64);
unsigned __int64 hub_JoinPersonCreate(__int64);
unsigned __int64 hub_PlaySE_cc8740(__int64, __int128*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void game_80e8e0(__int64);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910(__int64, int);
void wld_a7fda0(__int64, _DWORD*);
__int64 game_80ef70();
__int64 game_812030(__int64 result, char a2);
__int64* game_846040(__int64 a1, unsigned __int64 a2, unsigned __int16* a3);
_QWORD* game_89d820(__int64 a1, unsigned __int64* a2, __int64 a3, __int64** a4);
unsigned __int64 game_8a0de0(unsigned __int64 result, unsigned __int64* a2,
                             __int64* a3, _DWORD* a4);
bool game_8aed00(_QWORD* a1, __int64 a2, int a3);
unsigned __int64 game_8cf920(unsigned __int64 result, unsigned __int8* a2,
                             char* a3, _QWORD* a4);
_QWORD* game_8f7120(__int64 a1, __int64* a2, __int64* a3);
__int64 game_973a90(_QWORD* a1);
__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2);
__int64 game_a49830(_QWORD* a1, __int64 a2);
void game_a61180(__int64 a1, float a2);
unsigned __int64 game_a617e0(_QWORD* a1);
__int64 game_a8f100(__int64 result);
__int64 game_bc8340(float32x4_t** a1);
void game_c8a480();
_QWORD* game_c9e1c0(float* a1, unsigned __int8* a2, __int64 a3, __int64** a4);
__int64 (*game_cccaf0())();
void game_cfc7c0(__int64 a1, float* a2, char a3, float a4);
void game_d25cc0(__int64 a1);
float game_d26b60(__int64 a1);
bool game_d26f50(__int64 a1, int a2);
float game_d27af0(float a1, float a2, float a3, float a4, __int64 a5);
bool game_d27d30(__int64 a1);
__int64 game_dad600(__int64 a1);
void game_dad970(__int64 a1);
__int64 game_daddf0(__int64 a1);
__int64 game_dae060(__int64 a1);
__int64 game_dae200(__int64 a1);
__int64 game_dae300(float32x2_t* a1);
__int64 game_dae730(__int64 a1);
__int64 game_dae870(__int64 a1);
__int64 game_daeec0(__int64 a1);
__int64 game_daf080(__int64 a1, unsigned __int32 a2, unsigned __int64* a3);
void game_daf210(__int64 a1);
void game_db09e0();
void game_e146a0();
void game_e196a0();
void game_e5c8f0();
__n128 game_e5f420_alt1(_DWORD* a1, char* a2) __asm__("game_e5f420");
__int64 game_e803d0_alt1(__int64 a1, __int64 a2) __asm__("game_e803d0");
void game_eae830();
void game_eb4fd0();
__attribute__((swiftcall)) void
game_zview_d56a60_alt1(PSEUDO_X8, __int64, const char*,
                       float) __asm__("game_zview_d56a60");
__int64 GameHr_7c9660(char**, unsigned int, unsigned int, __int64);
__int64 GameHr_d1fb60(__int64, char);
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 GameRoutine_d2d5e0_alt1(signed int) __asm__("GameRoutine_d2d5e0");
__int64 GameRoutine_e5f7e0_alt1(_DWORD*, __int64) __asm__("GameRoutine_e5f7e0");
__int64 GameRoutine_e5fa20_alt1(_DWORD*) __asm__("GameRoutine_e5fa20");
__int64 SendUnitItemMenu_8ae490_alt1(unsigned __int16*, __int64,
                                     char) __asm__("SendUnitItemMenu_8ae490");
__int64 Trick_7d5160_alt1(__int64, char) __asm__("Trick_7d5160");
__int64 nn_os_LockMutex_alt2(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool HubCharacterNatives_cf7e00_alt1(__int64) __asm__(
    "HubCharacterNatives_cf7e00");
double GameHr_d1cbc0(__int64, int);
float game_RandomSeed_GetFloat_alt1(_DWORD*,
                                    float) __asm__("game_RandomSeed_GetFloat");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_a5aca0(__int64);
void GameRoutine_f56340_alt1(__int64, int) __asm__("GameRoutine_f56340");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 game_e5f420(_DWORD* a1, char* a2);
_QWORD* game_e803d0(__int64 a1, __int64 a2);

__int64 game_80ef70()
{

#pragma clang fp contract(off)
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  char* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  double v8;
  float v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  char v13;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;

  game_80e8e0(0);
  v14 = 0;
  v13 = 1;
  v0 = GameData_212d448[0];
  v1 = (_QWORD*)*GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    v15_.v15[0] = GameData_1ff8cd8;
    v15_.v15[1] = &v14;
    v15_.v16 = v15_.v15;
    v15_.v15[2] = &v13;
    GameRoutine_106c820(v1, (__int64)v15_.v15);
    if (v15_.v16 == v15_.v15) {
      v2 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        goto LABEL_7;
      }
      v2 = 40;
    }
    (*(void (**)(__int64))(*v15_.v16 + v2))((__int64)v15_.v16);
  }
LABEL_7:
  snd_Fade_Fade_10c910((__int64)v15_.v15, 500);
  snd_startSlotVolume_100b50(&GameData_21ec584, (__int64)v15_.v15,
                             0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v15_.v15);
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    v3 = &GameData_1a9f09e;
  }
  else {
    v3 = "SE_SYS_Battle_Out";
  }
  v4 = game_sound_g_game_sound;
  v5 = *(_DWORD*)(game_sound_g_game_sound + 644);
  if (v5 != 0) {
    if (*v3 != 0) {
      snd_Fade_Fade_10c830((__int64)v15_.v15, 0x0.0p+0f);
      snd_play_ff2d0((__int64)v3, (__int64)v3, (__int64)v15_.v15, 0, 0x10001u,
                     0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v15_.v15);
      v5 = *(_DWORD*)(v4 + 644);
    }
    *(_DWORD*)(v4 + 644) = v5 - 1;
  }
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v6 != 0 && *(_BYTE*)(v6 + 138) != 0 &&
        game_cmdbtl_ProcCmdBtlSeqView_instance_ == 0) {
      v8 = snd_getDefineValue("SetVolume_SE_Bmap_AMBVolume");
      v9 = *(float*)&v8 / 0x1.9000000000000p+6f;
      snd_Fade_Fade_10cb00((__int64)v15_.v15, "FadeTime_ENV_Combat_Cross");
      snd_startSlotVolume_100b50(&GameData_21ec57c, (__int64)v15_.v15, v9);
      snd_Fade_Destroy_Fade(v15_.v15);
    }
  }
  if ((snd_fnd_WeakHandle_isValid(&GameData_21ec568) & 1) != 0) {
    v10 = snd_fnd_WeakHandle_get((__int64)&GameData_21ec568);
    snd_Fade_Fade_10c910((__int64)v15_.v15, 500);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(
        *(_QWORD*)(v10 - 5592) + 248LL))(v10 - 5592, v15_.v15, 0, 0x0.0p+0);
    snd_Fade_Destroy_Fade(v15_.v15);
    snd_fnd_WeakHandle_reset((__int64)&GameData_21ec568);
  }
  snd_Fade_Fade_10c910((__int64)v15_.v15, 300);
  snd_startSlotVolume_100b50(&GameData_21ec580, (__int64)v15_.v15,
                             0x1.0000000000000p+0f);
  result = snd_Fade_Destroy_Fade(v15_.v15);
  if (*v0 == 0 || (v12 = *(_QWORD*)(*v0 + 8)) == 0 ||
      (*(_WORD*)(v12 + 112) & 0x118) == 0) {
    GameData_21ec594 = 1;
  }
  GameData_21ec590 = 0;
  return result;
}

__int64 game_812030(__int64 result, char a2)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  const char* v4;
  float v5;
  _BYTE v6[16];
  _QWORD v7[25];

  if ((unsigned __int8)result >= 9u) {
    if ((unsigned __int8)result != 9) {
      return result;
    }
    if (*((_BYTE*)GameRoutine_714e40() + 32) == 1) {
      v4 = "V_PTV_IsmM_Preview";
    }
    else {
      v4 = "V_PTV_IsmF_Preview";
    }
    goto LABEL_10;
  }
  v3 = &GameData_1f9d7f0;
  if ((a2 & 1) != 0) {
    v3 = &GameData_1f9d838;
  }
  v4 = (const char*)v3[(unsigned __int8)result];
  if (v4 != nullptr) {
  LABEL_10:
    if ((snd_fnd_WeakHandle_isValid(&GameData_21ec798) & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)v7, 0x1.2c00000000000p+8f);
      snd_stop_ffc40(&GameData_21ec798, (__int64)v7);
      snd_Fade_Destroy_Fade(v7);
    }
    result = snd_isActive_100090((__int64)"ObeliskFotVoice");
    if ((result & 1) == 0) {
      snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
      v5 = 0x1.2c00000000000p+8f;
      if ((a2 & 1) == 0) {
        v5 = 0x0.0p+0f;
      }
      snd_play_ff2d0((__int64)v4, (__int64)v4, (__int64)v7, 0, 0x10001u, 0, v5,
                     0x1.0000000000000p+0f);
      GameRoutine_112180((__int64)&GameData_21ec798, (__int64)v6);
      return snd_Fade_Destroy_Fade(v7);
    }
  }
  return result;
}

__int64* game_846040(__int64 a1, unsigned __int64 a2, unsigned __int16* a3)
{

#pragma clang fp contract(off)
  float v3;
  unsigned __int64 v4;
  float v8;
  float v9;
  _BOOL8 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 primeEm;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  int v20;
  _BOOL4 v21;
  _BOOL4 v22;
  int v23;
  __int64* result;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  int v28;
  _BOOL4 v29;
  _BOOL4 v30;
  char v31;
  __int64 v32;

  v3 = *(float*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 8);
  v8 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v4 == 0 || (float)(v3 * (float)v4) < v8) {
    v9 = v8 / v3;
    v10 = true;
    if (v4 >= 3) {
      v10 = (v4 & (v4 - 1)) != 0;
    }
    v11 = v10 | (2 * v4);
    v12 = vcvtps_u64_f32(v9);
    if (v11 <= v12) {
      v13 = v12;
    }
    else {
      v13 = v11;
    }
    if (v13 == 1) {
      v13 = 2;
    }
    else if ((v13 & (v13 - 1)) != 0) {
      primeEm = std___1___next_prime(v13);
      v4 = *(_QWORD*)(a1 + 8);
      v13 = primeEm;
    }
    if (v13 > v4) {
      goto LABEL_13;
    }
    if (v13 < v4) {
      v15 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v4 < 3 || (v4 & (v4 - 1)) != 0) {
        v15 = std___1___next_prime(v15);
      }
      else {
        v16 = 1LL << -(char)__clz(v15 - 1);
        if (v15 >= 2) {
          v15 = v16;
        }
      }
      if (v13 <= v15) {
        v13 = v15;
      }
      if (v13 < v4) {
      LABEL_13:
        GameRoutine_8462a0((__int64*)a1, v13);
      }
    }
    v4 = *(_QWORD*)(a1 + 8);
  }
  v17 = v4 - 1;
  if ((v4 & (v4 - 1)) == 0) {
    v27 = *(__int64**)(*(_QWORD*)a1 + 8 * (v17 & a2));
    if (v27 != nullptr) {
      v28 = 0;
      do {
        result = v27;
        v27 = (__int64*)*v27;
        if (v27 == nullptr) {
          break;
        }
        v32 = v27[1];
        if ((v32 & v17) != (v17 & a2)) {
          break;
        }
        v29 = v32 == a2 && *((unsigned __int16*)v27 + 8) == *a3;
        v30 = v29 != (v28 & 1);
        v31 = v28 & v30;
        v28 |= v30;
      } while ((v31 & 1) == 0);
      return result;
    }
    return nullptr;
  }
  v18 = a2;
  if (a2 >= v4) {
    v18 = a2 % v4;
  }
  v19 = *(__int64**)(*(_QWORD*)a1 + 8 * v18);
  if (v19 == nullptr) {
    return nullptr;
  }
  v20 = 0;
  do {
    result = v19;
    v19 = (__int64*)*v19;
    if (v19 == nullptr) {
      break;
    }
    v25 = v19[1];
    v26 = v25;
    if (v25 >= v4) {
      v26 = v25 % v4;
    }
    if (v26 != v18) {
      break;
    }
    v21 = v25 == a2 && *((unsigned __int16*)v19 + 8) == *a3;
    v22 = v21 != (v20 & 1);
    v23 = v20 & v22;
    v20 |= v22;
  } while (v23 != 1);
  return result;
}

_QWORD* game_89d820(__int64 a1, unsigned __int64* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  _QWORD** v10;
  _QWORD* result;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  unsigned __int64 v31;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v9 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v9 & v5;
    }
    v10 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v4);
    if (v10 != nullptr) {
      result = *v10;
      if (*v10 != nullptr) {
        if ((v6 & v9) == 0) {
          while (1) {
            v13 = result[1];
            if (v13 == v5) {
              if (result[2] == v5) {
                return result;
              }
            }
            else if ((v13 & v9) != v4) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v12 = result[1];
          if (v12 == v5) {
            if (result[2] == v5) {
              return result;
            }
          }
          else {
            if (v12 >= v6) {
              v12 %= v6;
            }
            if (v12 != v4) {
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
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v14 = *a4;
  *result = 0;
  result[1] = v5;
  v15 = *(float*)(a1 + 32);
  v16 = *v14;
  result[4] = 0;
  result[5] = 0;
  result[2] = v16;
  result[3] = 0;
  v17 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v15 * (float)v6) < v17) {
    v18 = v17 / v15;
    v19 = true;
    if (v6 >= 3) {
      v19 = (v6 & (v6 - 1)) != 0;
    }
    v20 = v19 | (2 * v6);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      primeEm = v21;
    }
    else {
      primeEm = v20;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v23 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v23;
      v6 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v6) {
      goto LABEL_35;
    }
    if (primeEm < v6) {
      v25 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v27 = result;
        v25 = std___1___next_prime(v25);
        result = v27;
      }
      else {
        v26 = 1LL << -(char)__clz(v25 - 1);
        if (v25 >= 2) {
          v25 = v26;
        }
      }
      if (primeEm <= v25) {
        primeEm = v25;
      }
      if (primeEm < v6) {
      LABEL_35:
        v24 = result;
        GameRoutine_89db20((__int64*)a1, primeEm);
        result = v24;
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
  v28 = *(_QWORD*)a1;
  v29 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v29 != nullptr) {
    *result = *v29;
    *v29 = result;
  }
  else {
    v30 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v30;
    *(_QWORD*)(v28 + 8 * v4) = a1 + 16;
    if (*result != 0) {
      v31 = *(_QWORD*)(*result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v31 >= v6) {
          v31 %= v6;
        }
      }
      else {
        v31 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

unsigned __int64 game_8a0de0(unsigned __int64 result, unsigned __int64* a2,
                             __int64* a3, _DWORD* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  unsigned __int64 v28;

  v5 = *a2;
  v6 = *(_QWORD*)(result + 8);
  v9 = result;
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
    v11 = *(_QWORD**)(*(_QWORD*)result + 8 * v4);
    if (v11 != nullptr) {
      v12 = (_QWORD*)*v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (v12[2] == v5) {
                return result;
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
              return result;
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
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15 = *a3;
  v16 = *(float*)(v9 + 32);
  v17 = result;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v5;
  *(_QWORD*)(result + 16) = v15;
  *(_DWORD*)(result + 24) = *a4;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(v9 + 24) + 1LL);
  if (v6 == 0 || (float)(v16 * (float)v6) < v18) {
    v19 = v18 / v16;
    v20 = true;
    if (v6 >= 3) {
      v20 = (v6 & (v6 - 1)) != 0;
    }
    v21 = v20 | (2 * v6);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      v23 = v22;
    }
    else {
      v23 = v21;
    }
    if (v23 == 1) {
      v23 = 2;
    }
    else if ((v23 & (v23 - 1)) != 0) {
      result = std___1___next_prime(v23);
      v6 = *(_QWORD*)(v9 + 8);
      v23 = result;
    }
    if (v23 > v6) {
      goto LABEL_34;
    }
    if (v23 < v6) {
      result = vcvtps_u64_f32((float)*(unsigned __int64*)(v9 + 24) /
                              *(float*)(v9 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v24 = 1LL << -(char)__clz(result - 1);
        if (result >= 2) {
          result = v24;
        }
      }
      if (v23 <= result) {
        v23 = result;
      }
      if (v23 < v6) {
      LABEL_34:
        result = (unsigned __int64)GameRoutine_8301a0((__int64*)v9, v23);
      }
    }
    v6 = *(_QWORD*)(v9 + 8);
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
  v25 = *(_QWORD*)v9;
  v26 = *(unsigned __int64**)(*(_QWORD*)v9 + 8 * v4);
  if (v26 != nullptr) {
    *(_QWORD*)v17 = *v26;
    *v26 = v17;
  }
  else {
    v27 = *(_QWORD*)(v9 + 16);
    *(_QWORD*)(v9 + 16) = v17;
    *(_QWORD*)v17 = v27;
    *(_QWORD*)(v25 + 8 * v4) = v9 + 16;
    if (*(_QWORD*)v17 != 0) {
      v28 = *(_QWORD*)(*(_QWORD*)v17 + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v28 >= v6) {
          v28 %= v6;
        }
      }
      else {
        v28 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)v9 + 8 * v28) = v17;
    }
  }
  ++*(_QWORD*)(v9 + 24);
  return result;
}

bool game_8aed00(_QWORD* a1, __int64 a2, int a3)
{
  __int64 v3;
  char v5;
  char v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64* v14;
  struct {
    _BYTE v16[4];
    int v17;
  } v16_;
  unsigned __int64 v18[2];
  __int64 v19;

  if (a3 >= (unsigned __int64)((__int64)(a1[1] - *a1) >> 3)) {
    return false;
  }
  v3 = *(_QWORD*)(*a1 + 8LL * a3);
  v19 = v3;
  v5 = SendUnitItemMenu_8ae490_alt1((unsigned __int16*)&v19, a2, 0);
  v6 = v5;
  if ((v5 & 1) == 0) {
    if ((v5 & 4) != 0) {
      game_UnitUtil_UniqueMap_Commit_89abc0(
          (void*)((__int64)v16_.v16),
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          (unsigned __int16*)&v19, 1);
      if ((v16_.v17 & 0x80000000) == 0) {
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * (unsigned __int16)v19) +
                      73LL) != 13 ||
            (v18[1] = (unsigned __int64)&GameData_1af1404,
             v18[0] = game_HashString_alt1((__int64)&GameData_1af1404),
             GameRoutine_9b11a0_alt1(&GameData_21f61c0, v18, 1),
             (v16_.v17 & 0x80000000) == 0)) {
          v7 = *GameData_21309c8[0];
          if (*GameData_21309c8[0] == 0 || *(_BYTE*)(v7 + 8) != 1 ||
              (*(_BYTE*)(v7 + 9) & 1) != 0) {
            return true;
          }
          v8 = 64;
          goto LABEL_24;
        }
      }
    }
    if ((v6 & 8) != 0) {
      v14 = GameData_212cfb8[0];
      GameHr_7c9660(*(char***)(*GameData_212cfb8[0] + 16), *(char*)(a2 + 584),
                    *(char*)(a2 + 585),
                    *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * (unsigned __int16)v19));
      if ((Trick_7d5160_alt1(*(_QWORD*)(*v14 + 16),
                             *(_BYTE*)(*(_QWORD*)(*v14 + 16) + 92848LL)) &
           1) != 0) {
        v7 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] == 0 || *(_BYTE*)(v7 + 8) != 1 ||
            (*(_BYTE*)(v7 + 9) & 1) != 0) {
          return true;
        }
        v8 = 1026;
        goto LABEL_24;
      }
    }
    return (v6 & 0x10) != 0;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * (unsigned __int16)v3);
  v10 = *(_DWORD*)(v9 + 76);
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v9 + 87);
    v12 = (v11 - BYTE2(v3)) & ~((int)(v11 - BYTE2(v3)) >> 31);
    if (v12 < v11) {
      v10 = (int)(v12 * v10) / (int)v11;
    }
    if (v10 <= 1) {
      v10 = 1;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v13 = (*(_DWORD*)(game_GameModeData_instance_ + 72) + v10) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 72) + v10) >> 31);
    if (v13 >= 9999999) {
      v13 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v13;
  }
  v7 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] == 0 || *(_BYTE*)(v7 + 8) != 1 ||
      (*(_BYTE*)(v7 + 9) & 1) != 0) {
    return true;
  }
  v8 = 256;
LABEL_24:
  *(_DWORD*)(v7 + 12) |= v8;
  return true;
}

unsigned __int64 game_8cf920(unsigned __int64 result, unsigned __int8* a2,
                             char* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64*** v11;
  __int64** v12;
  unsigned __int64 v13;
  __int64* v14;
  char v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  unsigned __int64 v28;

  v5 = *a2;
  v6 = *(_QWORD*)(result + 8);
  v9 = result;
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = (unsigned int)v5 % (unsigned int)v6;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
    v11 = *(__int64****)(*(_QWORD*)result + 8 * v4);
    if (v11 != nullptr) {
      v12 = *v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == (__int64*)v5) {
              if (*((unsigned __int8*)v12 + 16) == (_DWORD)v5) {
                return result;
              }
            }
            else if (((unsigned __int64)v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (__int64**)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = (unsigned __int64)v12[1];
          if (v13 == v5) {
            if (*((unsigned __int8*)v12 + 16) == (_DWORD)v5) {
              return result;
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
          v12 = (__int64**)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15 = *a3;
  v16 = *(float*)(v9 + 32);
  v17 = result;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v5;
  *(_BYTE*)(result + 16) = v15;
  *(_QWORD*)(result + 24) = *a4;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(v9 + 24) + 1LL);
  if (v6 == 0 || (float)(v16 * (float)v6) < v18) {
    v19 = v18 / v16;
    v20 = true;
    if (v6 >= 3) {
      v20 = (v6 & (v6 - 1)) != 0;
    }
    v21 = v20 | (2 * v6);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      v23 = v22;
    }
    else {
      v23 = v21;
    }
    if (v23 == 1) {
      v23 = 2;
    }
    else if ((v23 & (v23 - 1)) != 0) {
      result = std___1___next_prime(v23);
      v6 = *(_QWORD*)(v9 + 8);
      v23 = result;
    }
    if (v23 > v6) {
      goto LABEL_34;
    }
    if (v23 < v6) {
      result = vcvtps_u64_f32((float)*(unsigned __int64*)(v9 + 24) /
                              *(float*)(v9 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v24 = 1LL << -(char)__clz(result - 1);
        if (result >= 2) {
          result = v24;
        }
      }
      if (v23 <= result) {
        v23 = result;
      }
      if (v23 < v6) {
      LABEL_34:
        result = (unsigned __int64)GameRoutine_8cfc00((__int64*)v9, v23);
      }
    }
    v6 = *(_QWORD*)(v9 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
  }
  v25 = *(_QWORD*)v9;
  v26 = *(unsigned __int64**)(*(_QWORD*)v9 + 8 * v4);
  if (v26 != nullptr) {
    *(_QWORD*)v17 = *v26;
    *v26 = v17;
  }
  else {
    v27 = *(_QWORD*)(v9 + 16);
    *(_QWORD*)(v9 + 16) = v17;
    *(_QWORD*)v17 = v27;
    *(_QWORD*)(v25 + 8 * v4) = v9 + 16;
    if (*(_QWORD*)v17 != 0) {
      v28 = *(_QWORD*)(*(_QWORD*)v17 + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v28 >= v6) {
          v28 %= v6;
        }
      }
      else {
        v28 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)v9 + 8 * v28) = v17;
    }
  }
  ++*(_QWORD*)(v9 + 24);
  return result;
}

_QWORD* game_8f7120(__int64 a1, __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD** v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;

  v4 = *a2;
  v32 = *a2;
  v7 = std___1___hash_memory(&v32, 8);
  v8 = *(_QWORD*)(a1 + 8);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = result[1];
            if (v14 == v9) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v13 = result[1];
          if (v13 == v9) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
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
  v15 = *a3;
  v16 = *(float*)(a1 + 32);
  *result = 0;
  result[1] = v9;
  result[2] = v15;
  v17 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v8 == 0 || (float)(v16 * (float)v8) < v17) {
    v18 = v17 / v16;
    v19 = true;
    if (v8 >= 3) {
      v19 = (v8 & (v8 - 1)) != 0;
    }
    v20 = v19 | (2 * v8);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      primeEm = v21;
    }
    else {
      primeEm = v20;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v23 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v23;
      v8 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v8) {
      goto LABEL_35;
    }
    if (primeEm < v8) {
      v25 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v27 = result;
        v25 = std___1___next_prime(v25);
        result = v27;
      }
      else {
        v26 = 1LL << -(char)__clz(v25 - 1);
        if (v25 >= 2) {
          v25 = v26;
        }
      }
      if (primeEm <= v25) {
        primeEm = v25;
      }
      if (primeEm < v8) {
      LABEL_35:
        v24 = result;
        GameRoutine_8f7440((__int64*)a1, primeEm);
        result = v24;
      }
    }
    v8 = *(_QWORD*)(a1 + 8);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v28 = *(_QWORD*)a1;
  v29 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v29 != nullptr) {
    *result = *v29;
    *v29 = result;
  }
  else {
    v30 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v30;
    *(_QWORD*)(v28 + 8 * v3) = a1 + 16;
    if (*result != 0) {
      v31 = *(_QWORD*)(*result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v31 >= v8) {
          v31 %= v8;
        }
      }
      else {
        v31 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 game_973a90(_QWORD* a1)
{
  if (game_HashString_alt1((__int64)"NONE") == *a1) {
    return 0;
  }
  if (game_HashString_alt1((__int64)"TITLE") == *a1) {
    return 1;
  }
  if (game_HashString_alt1((__int64)"MAP") == *a1) {
    return 2;
  }
  if (game_HashString_alt1((__int64)"UNUSED") == *a1) {
    return 3;
  }
  if (game_HashString_alt1((__int64)"GMAP") == *a1) {
    return 4;
  }
  if (game_HashString_alt1((__int64)&GameData_1aed8c8) == *a1) {
    return 5;
  }
  if (game_HashString_alt1((__int64)"DUNGEON") == *a1) {
    return 6;
  }
  if (game_HashString_alt1((__int64)"CMDBTL") == *a1) {
    return 7;
  }
  if (game_HashString_alt1((__int64)"TIMELINE") == *a1) {
    return 8;
  }
  if (game_HashString_alt1((__int64)"DEMO") == *a1) {
    return 9;
  }
  if (game_HashString_alt1((__int64)"MOVIE") == *a1) {
    return 10;
  }
  if (game_HashString_alt1((__int64)"CHAPTER") == *a1) {
    return 11;
  }
  if (game_HashString_alt1((__int64)"AUTOSAVE") == *a1) {
    return 12;
  }
  if (game_HashString_alt1((__int64)"MAP_COMPLETE") == *a1) {
    return 13;
  }
  if (game_HashString_alt1((__int64)"CMDBTL_COMPLETE") == *a1) {
    return 14;
  }
  if (game_HashString_alt1((__int64)"MAKE") == *a1) {
    return 15;
  }
  if (game_HashString_alt1((__int64)"MAKE_COMPLETE") == *a1) {
    return 16;
  }
  return 0;
}

__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float32x4_t v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t* result;
  int v19;
  int8x16_t v20;
  unsigned int v21;
  int8x16_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float v27;
  int8x16_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float v41;
  float v42;
  float32x4_t v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x2_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float v80;
  float v81;
  bool v82;
  unsigned int v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  int8x16_t v92;
  int8x16_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  int8x16_t v103;
  int8x16_t v104;
  float32x4_t v105;
  int v106;
  int8x16_t v107;
  unsigned int v108;
  float32x4_t v109;
  int8x16_t v110;
  float32x4_t v111;
  int8x16_t v112;
  int v113;
  __int64 v114;
  int v115;
  __int64 v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  int8x16_t v121;
  float v122;
  float v123;
  float v124;
  unsigned __int64 v125;
  float v126;
  float v127;
  float v128;
  unsigned __int64 v129;
  float v130;
  float32x4_t v131;
  float32x4_t v132;
  int8x16_t v133;
  int8x16_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  struct {
    _QWORD v139[10];
    unsigned __int8 v140;
    char gap353_[103];
    float v141;
    float v142;
  } v139_;

  *(_QWORD*)(a3 + 8) = 0;
  v4 = -1024;
  do {
    v7 = a3 + v4;
    v4 += 128;
    *(_WORD*)(v7 + 1040) = 0;
    *(_DWORD*)(v7 + 1052) = 0;
    *(_WORD*)(v7 + 1056) = 0;
    *(_DWORD*)(v7 + 1068) = 0;
    *(_WORD*)(v7 + 1072) = 0;
    *(_DWORD*)(v7 + 1084) = 0;
    *(_WORD*)(v7 + 1088) = 0;
    *(_DWORD*)(v7 + 1100) = 0;
    *(_WORD*)(v7 + 1104) = 0;
    *(_DWORD*)(v7 + 1116) = 0;
    *(_WORD*)(v7 + 1120) = 0;
    *(_DWORD*)(v7 + 1132) = 0;
    *(_WORD*)(v7 + 1136) = 0;
    *(_DWORD*)(v7 + 1148) = 0;
    *(_WORD*)(v7 + 1152) = 0;
    *(_DWORD*)(v7 + 1164) = 0;
    *(_QWORD*)(v7 + 1044) = 0;
    *(_QWORD*)(v7 + 1060) = 0;
    *(_QWORD*)(v7 + 1076) = 0;
    *(_QWORD*)(v7 + 1092) = 0;
    *(_QWORD*)(v7 + 1108) = 0;
    *(_QWORD*)(v7 + 1124) = 0;
    *(_QWORD*)(v7 + 1140) = 0;
    *(_QWORD*)(v7 + 1156) = 0;
  } while (v4 != 0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
    GameHr_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release_alt1((__int64)&GameData_21fde98);
  }
  v8 = a1[2];
  v9 = a1[3];
  v10 = a2[2];
  v11 = a2[3];
  LANES128(v12).n128_u32[3] = 0;
  v13 = a1[4];
  v14 = a2[4];
  v15 = v9 + (float)((float)(v11 - v9) * 0x1.99999a0000000p-5f);
  v16 = v11 + (float)((float)(v9 - v11) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_u32[3] = 0;
  LANES128(v12).n128_f32[0] =
      v8 + (float)((float)(v10 - v8) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[0] =
      v10 + (float)((float)(v8 - v10) * 0x1.99999a0000000p-5f);
  LANES128(v12).n128_f32[1] = v15;
  LANES128(v17).n128_f32[1] = v16;
  LANES128(v12).n128_f32[2] =
      v13 + (float)((float)(v14 - v13) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[2] =
      v14 + (float)((float)(v13 - v14) * 0x1.99999a0000000p-5f);
  v137 = v17;
  v138 = v12;
  result = X8CALL_X0(float32x4_t*,
                     collision_670c60((void*)((__int64)v139_.v139), &v138,
                                      &v137, 0x1000100000001LL));
  v20 = *(int8x16_t*)v139_.v139;
  v19 = v139_.v140;
  *(_BYTE*)(a3 + 1) = 0;
  *(_BYTE*)a3 = v19;
  LANES128(v20).n128_u32[3] = 0;
  if (v19 != 0) {
    v21 = -1;
  }
  else {
    v21 = 0;
  }
  v22 = vandq_s8(v20, vdupq_n_s32(v21));
  v23 = vsubq_f32(v22, v138);
  v24 = vmulq_f32(v23, v23);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  v25 = vsubq_f32(v137, v138);
  v26 = vmulq_f32(v25, v25);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  *(_DWORD*)(a3 + 4) =
      LANES64_OF(
          vdiv_f32(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))),
                   vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))))
          .n64_u32[0];
  if (v19 == 1) {
    v133 = v22;
    LANES128(v30).n128_u64[1] = 0;
    LANES128(v30).n128_f32[0] = a1[2] - a2[2];
    LANES128(v28).n128_f32[0] = LANES128(v30).n128_f32[0];
    HIDWORD(v29) = 0;
    v27 = a1[4] - a2[4];
    LANES128(v28).n128_f32[1] = a1[3] - a2[3];
    *(float*)&v29 = v27;
    LANES128(v30).n128_f32[1] = LANES128(v28).n128_f32[1];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                              memory_order_acquire) &
         1) == 0) {
      v125 = v29;
      v127 = v27;
      v129 = LANES128(v28).n128_u64[0];
      v131 = v30;
      v113 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6170);
      v29 = v125;
      v27 = v127;
      LANES128(v28).n128_u64[0] = v129;
      v30 = v131;
      if (v113 != 0) {
        v114 = *((_QWORD*)GameData_212c550 + 1);
        *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
        *((_QWORD*)&GameData_21a6160 + 1) = v114;
        __cxa_guard_release_alt1((__int64)&GameData_21a6170);
        v29 = v125;
        v27 = v127;
        LANES128(v28).n128_u64[0] = v129;
        v30 = v131;
      }
    }
    LANES128(v30).n128_f32[2] = v27;
    LANES128(v28).n128_u64[1] = v29;
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v31).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v34 = vmulq_f32(v31, v32);
    *(int8x8_t*)&LANES128(v33).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v35 = vmlsq_f32(v34, v32, v33);
    v36 = vmulq_f32(v35, v35);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v36).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v132 = v30;
        v115 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190);
        v30 = v132;
        if (v115 != 0) {
          v116 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v116;
          __cxa_guard_release_alt1((__int64)&GameData_21a6190);
          v30 = v132;
        }
      }
      v39 = COERCE_AS(int8x16_t, GameData_21a6180);
      LANES128(v39).n128_u32[3] = 0;
    }
    else {
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      v37 = vrsqrteq_f32(v36);
      v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
      v39 = vbicq_s8(
          vmulq_f32(v35,
                    vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
          vceqzq_f32(v36));
    }
    v40 = vmulq_f32(v39, v39);
    v41 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    LANES128(v40).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    v128 = *((float*)GameData_212c190 + 1);
    v130 = *(float*)GameData_212c190;
    v126 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v139_.v141 =
        *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v42 = v139_.v141;
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v45 = *(float*)GameData_212c188;
    v47 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v46 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v48 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v49 = vrsqrteq_f32(v43);
    v139_.v142 = *((float*)GameData_212c188 + 1);
    v44 = v139_.v142;
    v124 = v45;
    v122 = v47;
    v123 = v41;
    v50 = vmulq_f32(v49, vrsqrtsq_f32(v49, vmulq_f32(v43, v49)));
    v51 = vmulq_f32(v30, v30);
    v52 = vsubq_f32(COERCE_AS(float32x4_t, 0), v30);
    *(_DWORD*)(a3 + 1040) = 2;
    v53 = vmulq_n_f32(
        vbicq_s8(vmulq_f32(v39, vmulq_f32(v50, vrsqrtsq_f32(
                                                   v50, vmulq_f32(v43, v50)))),
                 vceqzq_f32(v43)),
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.9442500000000p-8f)) *
                                                                              0x1.9442500000000p-8f)) *
                                                           0x1.9442500000000p-8f)) *
                                           0x1.9442500000000p-8f)) *
                        0x1.9442500000000p-8f) +
                0x1.0000000000000p+0f) *
            0x1.41b2f80000000p-4f);
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] = LANES128(v52).n128_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v57 = v53;
    LANES64(v58).n64_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v54).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v52).n128_u64[0];
    LANES128(v57).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)((float)(v44 -
                                                                              (float)(v45 *
                                                                                      0x1.9442500000000p-8f)) *
                                                                      0x1.9442500000000p-8f)) *
                                                   0x1.9442500000000p-8f)) *
                                   0x1.9442500000000p-8f)) *
                0x1.9442500000000p-8f) +
        0x1.0000000000000p+0f;
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[0] = LANES64_OF(vpadd_f32(v58, v58)).n64_u64[0];
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v60 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v63 = vrsqrteq_f32(v59);
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]), 1);
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v65 = v44 - (float)(v45 * 0x0.0p+0f);
    LANES128(v66).n128_u64[0] = LANES128(v53).n128_u64[0];
    v67 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v43, v60),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v55, v61)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v56, v62)),
                  v64, v54);
    v68 = vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v59, v63)));
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
    LANES128(v66).n128_u64[1] = LANES128(v61).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v53).n128_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v69 = vmulq_f32(v63, v67);
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v63).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v121 = vbicq_s8(
        vmulq_f32(v30, vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v59, v68)))),
        vceqzq_f32(v59));
    v70 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x0.0p+0f)) *
                                                                              0x0.0p+0f)) *
                                                           0x0.0p+0f)) *
                                           0x0.0p+0f)) *
                        0x0.0p+0f) +
                0x1.0000000000000p+0f) *
            0x0.0p+0f);
    v71 = vmlsq_f32(
        vmlaq_f32(vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v66, v64)),
                  COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v62)),
        v63, v61);
    v72 = v70;
    LANES128(v71).n128_u32[3] = 0;
    LANES128(v72).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)(v65 *
                                                                      0x0.0p+0f)) *
                                                   0x0.0p+0f)) *
                                   0x0.0p+0f)) *
                0x0.0p+0f) +
        0x1.0000000000000p+0f;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v73 = vmulq_f32(v72, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v64).n128_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v71).n128_u64[0];
    LANES128(v71).n128_u64[1] = LANES128(v61).n128_u64[0];
    v74 = v54;
    v119 = v54;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v54).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]), 1);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v120 = v61;
    v117 = v71;
    v118 = v64;
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v75 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v74, v73),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v71, v68)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v64, v54)),
                  v57, v61);
    LANES128(v61).n128_u64[0] = LANES128(v70).n128_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v72).n128_u64[0];
    LANES128(v72).n128_u64[1] = LANES128(v68).n128_u64[0];
    LANES128(v68).n128_u64[1] = LANES128(v70).n128_u64[0];
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v64).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0]), 1);
    v76 = vmulq_f32(v61, v57);
    LANES128(v61).n128_f32[0] = a1[4];
    v77 = vmlaq_f32(vmulq_f32(v73, v75),
                    COERCE_AS(float32x4_t, GameData_1a83800), v76);
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v78 = vmulq_f32(v68, v64);
    LANES128(v64).n128_u32[3] = 0;
    v79 =
        vmlsq_f32(vmlaq_f32(v77, COERCE_AS(float32x4_t, GameData_1a83800), v78),
                  v70, v72);
    LANES128(v70).n128_f32[0] = a1[2];
    LANES128(v72).n128_f32[0] = a1[3];
    LANES128(v64).n128_f32[0] =
        LANES128(v70).n128_f32[0] +
        (float)((float)((float)(LANES128(v70).n128_f32[0] +
                                LANES128(v79).n128_f32[0]) -
                        LANES128(v70).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[1] =
        LANES128(v72).n128_f32[0] +
        (float)((float)((float)(LANES128(v72).n128_f32[0] +
                                LANES128(v79).n128_f32[1]) -
                        LANES128(v72).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[2] =
        LANES128(v61).n128_f32[0] +
        (float)((float)((float)(LANES128(v61).n128_f32[0] +
                                LANES128(v79).n128_f32[2]) -
                        LANES128(v61).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v72).n128_u32[3] = 0;
    v136 = v64;
    LANES128(v72).n128_u64[0] = __PAIR64__(
        (float)(LANES128(v72).n128_f32[0] + LANES128(v79).n128_f32[1]) +
            (float)((float)((float)(LANES128(v72).n128_f32[0] -
                                    LANES128(v72).n128_f32[0]) +
                            LANES128(v79).n128_f32[1]) *
                    0x1.99999a0000000p-5f),
        (float)(LANES128(v70).n128_f32[0] + LANES128(v79).n128_f32[0]) +
            (float)((float)((float)(LANES128(v70).n128_f32[0] -
                                    LANES128(v70).n128_f32[0]) +
                            LANES128(v79).n128_f32[0]) *
                    0x1.99999a0000000p-5f));
    LANES128(v72).n128_f32[2] =
        (float)(LANES128(v61).n128_f32[0] + LANES128(v79).n128_f32[2]) +
        (float)((float)((float)(LANES128(v61).n128_f32[0] -
                                LANES128(v61).n128_f32[0]) +
                        LANES128(v79).n128_f32[2]) *
                0x1.99999a0000000p-5f);
    v135 = v72;
    collision_670c60((void*)((__int64)v139_.v139), &v136, &v135,
                     0x1000100000001LL);
    v80 = v139_.v141;
    v81 = v139_.v142;
    *(_BYTE*)(a3 + 17) = 0;
    v82 = v139_.v140 == 0;
    *(_BYTE*)(a3 + 16) = v139_.v140;
    if (v82) {
      v83 = 0;
    }
    else {
      v83 = -1;
    }
    v84 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v123 -
                                   (float)((float)(v80 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.3bd3ce0000000p+1f)) *
                                                                              0x1.3bd3ce0000000p+1f)) *
                                                           0x1.3bd3ce0000000p+1f)) *
                                           0x1.3bd3ce0000000p+1f)) *
                        0x1.3bd3ce0000000p+1f) +
                0x1.0000000000000p+0f) *
            0x1.921fb60000000p+0f);
    v85 = v84;
    LANES128(v86).n128_u64[0] = LANES128(v84).n128_u64[0];
    LANES128(v85).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v122 -
                                                              (float)((float)(v81 -
                                                                              (float)(v124 *
                                                                                      0x1.3bd3ce0000000p+1f)) *
                                                                      0x1.3bd3ce0000000p+1f)) *
                                                   0x1.3bd3ce0000000p+1f)) *
                                   0x1.3bd3ce0000000p+1f)) *
                0x1.3bd3ce0000000p+1f) +
        0x1.0000000000000p+0f;
    v87 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v88).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v89).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v87).n128_u64[0]), 1);
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v91 = vmlaq_f32(vmlaq_f32(vmulq_f32(v119, v87),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v117, v88)),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v118, v89));
    v92 = *(int8x16_t*)v139_.v139;
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v93 = vmlsq_f32(v91, v90, v120);
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v92).n128_u32[3] = 0;
    LANES128(v86).n128_u64[1] = LANES128(v89).n128_u64[0];
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[1] = LANES128(v85).n128_u64[0];
    LANES128(v94).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[1] = LANES128(v88).n128_u64[0];
    LANES128(v88).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v95 = vbslq_s8(vdupq_n_s32(v83), v92, v133);
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v94).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v93).n128_u64[0]), 1);
    v96 = a1[4];
    v97 = vmulq_f32(v85, v93);
    v134 = v95;
    v98 = vmulq_f32(v86, v90);
    v99 = vsubq_f32(v137, v138);
    v100 = vsubq_f32(v95, v138);
    *(int8x8_t*)&LANES128(v84).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v101 = vmulq_f32(v88, v94);
    LANES128(v86).n128_u32[3] = 0;
    v102 = vmlaq_f32(v97, COERCE_AS(float32x4_t, GameData_1a83800), v98);
    v103 = vmulq_f32(v99, v99);
    v104 = vmulq_f32(v100, v100);
    v105 = vmlsq_f32(
        vmlaq_f32(v102, COERCE_AS(float32x4_t, GameData_1a83800), v101), v84,
        v89);
    LANES128(v101).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
            .n64_u64[0];
    LANES128(v103).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
            .n64_u64[0];
    LANES128(v84).n128_f32[0] = a1[2];
    PSEUDO_LOW_LANE128(v104, n128_f32, a1[3]);
    LANES128(v86).n128_f32[0] =
        LANES128(v84).n128_f32[0] +
        (float)((float)((float)(LANES128(v84).n128_f32[0] +
                                LANES128(v105).n128_f32[0]) -
                        LANES128(v84).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    *(_DWORD*)(a3 + 20) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))))
            .n64_u32[0];
    LANES128(v86).n128_f32[1] =
        LANES128(v104).n128_f32[0] +
        (float)((float)((float)(LANES128(v104).n128_f32[0] +
                                LANES128(v105).n128_f32[1]) -
                        LANES128(v104).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v103).n128_u32[3] = 0;
    LANES128(v103).n128_f32[0] =
        (float)(LANES128(v84).n128_f32[0] + LANES128(v105).n128_f32[0]) +
        (float)((float)((float)(LANES128(v84).n128_f32[0] -
                                LANES128(v84).n128_f32[0]) +
                        LANES128(v105).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v86).n128_f32[2] =
        v96 + (float)((float)((float)(v96 + LANES128(v105).n128_f32[2]) - v96) *
                      0x1.99999a0000000p-5f);
    LANES128(v103).n128_f32[1] =
        (float)(LANES128(v104).n128_f32[0] + LANES128(v105).n128_f32[1]) +
        (float)((float)((float)(LANES128(v104).n128_f32[0] -
                                LANES128(v104).n128_f32[0]) +
                        LANES128(v105).n128_f32[1]) *
                0x1.99999a0000000p-5f);
    v136 = v86;
    LANES128(v103).n128_f32[2] =
        (float)(v96 + LANES128(v105).n128_f32[2]) +
        (float)((float)(LANES128(v105).n128_f32[2] + (float)(v96 - v96)) *
                0x1.99999a0000000p-5f);
    v135 = v103;
    result = X8CALL_X0(float32x4_t*,
                       collision_670c60((void*)((__int64)v139_.v139), &v136,
                                        &v135, 0x1000100000001LL));
    v107 = *(int8x16_t*)v139_.v139;
    v106 = v139_.v140;
    *(_WORD*)(a3 + 32) = v139_.v140;
    LANES128(v107).n128_u32[3] = 0;
    if (v106 != 0) {
      v108 = -1;
    }
    else {
      v108 = 0;
    }
    v109 = vsubq_f32(vbslq_s8(vdupq_n_s32(v108), v107, v134), v138);
    v110 = vmulq_f32(v109, v109);
    LANES128(v110).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
            .n64_u64[0];
    v111 = vsubq_f32(v137, v138);
    v112 = vmulq_f32(v111, v111);
    LANES128(v112).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
            .n64_u64[0];
    *(_DWORD*)(a3 + 36) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))))
            .n64_u32[0];
  }
  {
    result;
    return;
  }
}

__int64 game_a49830(_QWORD* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = game_g_frame_clock_ptr[0];
  v5 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 552);
  v6 = *(_QWORD*)(v5 + 24);
  nn_os_LockMutex(v6 + 216),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD))(**(_QWORD**)(v5 + 16) + 32LL))(*(_QWORD*)(v5 + 16)),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v5) = v7;
  nn_os_UnlockMutex(v6 + 216),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = *(_QWORD*)(*v4 + 552);
  GameRoutine_5fe250((_BYTE*)(v8 + 112)),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_5fe270(v8 + 112, (unsigned int)v5, a2),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_5fe260((_BYTE*)(v8 + 112)),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_5fe290(v8 + 112, a1, v5),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return 1;
}

void game_a61180(__int64 a1, float a2)
{
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  __int128 v42;
  float v43;
  float v44;
  int v45;
  __int64 v46;
  int8x16_t v47;
  int8x16_t v48;

  v3 = a2 / 0x1.e000000000000p+5f;
  v4 = fminf(fmaxf(v3 + *(float*)(a1 + 4), 0x0.0p+0f), 0x1.d4c0000000000p+14f);
  v5 = *(float*)(a1 + 12);
  *(float*)(a1 + 4) = v4;
  if (v5 <= 0x0.0p+0f) {
    if ((*(_BYTE*)a1 & 1) == 0) {
      return;
    }
    v10 = 0x1.0000000000000p+0f;
    if (*(float*)(a1 + 16) >= v4) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v6 = v4 / v5;
  if (*(_BYTE*)a1 != 0) {
    v7 = 0x1.0000000000000p+0f;
  }
  else {
    v7 = 0x0.0p+0f;
  }
  v8 = *(float*)(a1 + 8);
  v9 = fminf(fmaxf(v6, 0x0.0p+0f), 0x1.0000000000000p+0f);
  if ((float)((float)(PSEUDO_UNFUSED(v9 * v7)) +
              (float)(v8 * (float)(0x1.0000000000000p+0f - v9))) <= 0x0.0p+0f) {
    return;
  }
  if (*(_BYTE*)a1 != 0 && *(float*)(a1 + 16) < v4) {
    v10 = v9 + (float)(v8 * (float)(0x1.0000000000000p+0f - v9));
  LABEL_11:
    *(float*)(a1 + 8) = v10;
    *(_BYTE*)a1 = 0;
    *(_DWORD*)(a1 + 4) = 0;
    *(_DWORD*)(a1 + 12) = 1045220557;
  }
LABEL_12:
  v11 = *(float*)(a1 + 20) + (float)(v3 * *(float*)(a1 + 28));
  if (v11 > 0x1.0000000000000p+6f) {
    v11 = v11 + -0x1.0000000000000p+6f;
  }
  v12 = *(float*)(a1 + 36);
  v13 = *(float*)(a1 + 40);
  *(float*)(a1 + 20) = v11;
  v14 = v12 * 0x1.1df46a0000000p-6f;
  v15 = v13 * 0x1.1df46a0000000p-6f;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0) {
    v43 = v14;
    v44 = v13 * 0x1.1df46a0000000p-6f;
    v45 = __cxa_guard_acquire(&GameData_21a61b0);
    v15 = v44;
    v14 = v43;
    if (v45 != 0) {
      v46 = *((_QWORD*)GameData_212c560 + 1);
      *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
      *((_QWORD*)&GameData_21a61a0 + 1) = v46;
      __cxa_guard_release(&GameData_21a61b0);
      v15 = v44;
      v14 = v43;
    }
  }
  math_Quat_FromYawPitchRoll((void*)(&v48), v15, v14, 0x0.0p+0f);
  LANES128(v16).n128_u64[0] = GameData_21a61a0;
  v17 = vmulq_f32(v48, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v19).n128_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v22 = vmlaq_f32(vmulq_f32(v17, v18), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v16, v20));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v21).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 1);
  LANES128(v19).n128_u64[1] = LANES128(v20).n128_u64[0];
  LANES128(v20).n128_u64[1] = GameData_21a61a0;
  v23 = vmulq_f32(v20, v21);
  LANES128(v20).n128_u64[0] = LANES128(v48).n128_u64[0];
  v24 = vmlaq_f32(v22, COERCE_AS(float32x4_t, GameData_1a83800), v23);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v25 = vmlsq_f32(v24, v23, v19);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v26 = vmulq_f32(v23, v25);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v23).n128_u64[0];
  v27 = vmlaq_f32(v26, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v20, v17));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v19).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1);
  LANES128(v23).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v48).n128_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v29 = vmlsq_f32(vmlaq_f32(v27, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v17, v19)),
                  v28, v23);
  LANES128(v29).n128_u32[3] = 0;
  v47 = v29;
  Quat_624bc0((void*)(&v48), *(_QWORD*)(a1 + 64));
  v30 = vmulq_f32(v48, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] = LANES128(v47).n128_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[1] = LANES128(v31).n128_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v32).n128_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v36 = vmlaq_f32(vmulq_f32(v30, v31), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v33, v34));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v35).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 1);
  LANES128(v33).n128_u64[0] = LANES128(v48).n128_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v34).n128_u64[0];
  LANES128(v34).n128_u64[1] = LANES128(v47).n128_u64[0];
  v37 = vmlaq_f32(v36, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v34, v35));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v30).n128_u64[0];
  v38 = vmlsq_f32(v37, v34, v32);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v32).n128_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v39 = vmlaq_f32(vmulq_f32(v30, v38), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v33, v34));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v35).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1);
  LANES128(v32).n128_u64[1] = LANES128(v34).n128_u64[0];
  LANES128(v34).n128_u64[1] = LANES128(v48).n128_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v41 = vmlsq_f32(vmlaq_f32(v39, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v34, v35)),
                  v40, v32);
  *(_QWORD*)(a1 + 48) = LANES128(v41).n128_u64[0];
  v42 = *(_OWORD*)(a1 + 48);
  *((_QWORD*)&v42 + 1) = LANES128(v41).n128_u32[2];
  *(_OWORD*)(a1 + 48) = v42;
}

unsigned __int64 game_a617e0(_QWORD* a1)
{
  unsigned __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int16* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE v20[64];

  result = snprintf(v20, 64, "%s.bntx", (const char*)(a1[4] + 2LL));
  v3 = a1[24];
  if (v3 != 0) {
    result = strlen(v20);
    v4 = v3 + 8;
    v5 = *(unsigned __int16*)(v3 + 12);
    v6 = v3 + 8 + 16 * v5;
    v7 = *(_DWORD*)v6;
    if (*(_DWORD*)(v3 + 8) < *(_DWORD*)v6) {
      do {
        v10 = (__int64)v7 >> 3;
        if (result > v10) {
          v8 = ((unsigned __int8)v20[result + ~v10] >> (v7 & 7)) & 1;
        }
        else {
          v8 = 0;
        }
        v5 = *(unsigned __int16*)(v3 + 12 + 16 * v5 + 2 * v8);
        v9 = v7 < *(_DWORD*)(v4 + 16 * v5);
        v7 = *(_DWORD*)(v4 + 16 * v5);
      } while (v9);
      v6 = v4 + 16 * v5;
    }
    v11 = *(unsigned __int16**)(v6 + 8);
    if (result == *v11) {
      result = memcmp(v11 + 1, v20, result);
      if ((_DWORD)result == 0) {
        v12 = v6 - v3 - 24;
        if ((~v12 & 0xFFFFFFFF0LL) != 0) {
          v13 = a1[23];
          if (v13 != 0) {
            v14 = *(_QWORD**)(v13 + 16LL * (int)(v12 >> 4));
            v15 = game_g_frame_clock_ptr[0];
            if (*(int*)(v14[7] + 4LL) >= 1) {
              v16 = 0;
              do {
                v17 = *(_QWORD*)(v14[5] + 8 * v16);
                GameRoutine_6064a0(*(_QWORD*)(v17 + 128));
                GameRoutine_606650(*(_QWORD*)(v17 + 136));
                ++v16;
              } while (v16 < *(int*)(v14[7] + 4LL));
            }
            v18 = v14[8];
            if (v14[9] == v18) {
              GameRoutine_5fe3b0(v18);
            }
            v19 = *v15;
            v14[9] = 0;
            return game_6163e0(*(_QWORD*)(v19 + 552), (__int64)v14);
          }
        }
      }
    }
  }
  return result;
}

__int64 game_a8f100(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  bool v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  int v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64* v33;
  float v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned int k;
  unsigned __int64 v38;
  bool v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64* v44;
  float v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned int n;
  int v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64* v52;
  float v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned int i;
  unsigned __int64 v57;
  bool v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  unsigned __int64 v62;
  bool v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64* v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  float v74;
  unsigned int v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float v83;
  __int64 v84;
  unsigned __int64* v85;
  unsigned __int64 v86;
  unsigned int v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  float v98;
  unsigned int v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  float v106;
  unsigned int v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned int ii;
  __int64 v114;
  __int64 v115;
  float v116;
  unsigned int v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned int j;
  __int64 v123;
  __int64 v124;
  float v125;
  unsigned int v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned int m;
  __int64 v132;
  __int64 v133;
  float v134;
  unsigned int v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned __int64 v144;
  unsigned int v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  struct {
    __int64 v154;
    __int64 v155;
  } v154_;
  struct {
    __int64 v156;
    __int64 v157;
  } v156_;
  struct {
    __int64 v158;
    __int64 v159;
  } v158_;

  v1 = result + 208;
  v2 = result;
  v152 = result;
  v153 = result + 1752;
  v3 = 208;
  do {
    v151 = v3;
    if (*(_BYTE*)(v1 + 1536) == 1) {
      v4 = *(unsigned __int64**)(v1 + 1544);
      if (v4 != nullptr) {
        v5 = *v4;
        if (*v4 != 0) {
          v6 = 0;
          v7 = 0;
          do {
            v8 = *(_QWORD*)(v4[1] + 8 * v6);
            if (v8 != 0) {
              v9 = *(__int64**)(v8 + 32);
              v10 = *(__int64**)(v8 + 40);
              if (v9 != v10) {
                do {
                  v11 = *v9++;
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 72LL))(v11);
                } while (v9 != v10);
                v5 = *v4;
              }
            }
            v6 = ++v7;
          } while (v5 > v7);
        }
        v12 = *(float*)(v1 + 1540);
        v2 = v152;
        v13 = 0;
        while (1) {
          v14 = v1 + v13;
          v15 = *(_DWORD*)(v1 + v13);
          if (v15 > 3) {
            if (v15 == 4) {
              v49 = *(_DWORD*)(v14 + 80);
              if (v49 == -1) {
                goto LABEL_13;
              }
              v50 = (__int64*)(v153 + 1560LL * v49);
              v51 = *v50;
              v31 = v50[1];
              if (v31 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8),
                                          1u, memory_order_relaxed);
              }
              if (v51 != 0) {
                v52 = *(unsigned __int64**)(v1 + 1544);
                v53 = *(float*)(v14 + 88);
                v54 = *v52;
                if ((*(_BYTE*)(v51 + 36) & 1) != 0) {
                  if (v54 != 0) {
                    v55 = 0;
                    for (i = 0; i < v54; v55 = ++i) {
                      v96 = *(_QWORD*)(v52[1] + 8 * v55);
                      if (v96 != 0) {
                        v97 = *(_QWORD*)(*(_QWORD*)(v51 + 8) + 8 * v55);
                        if (v97 != 0) {
                          v98 = v53 * *(float*)(v51 + 32);
                          if (v98 != 0x0.0p+0f &&
                              *(_QWORD*)(v96 + 40) != *(_QWORD*)(v96 + 32)) {
                            v99 = 1;
                            v100 = 0;
                            do {
                              v102 =
                                  *(_QWORD*)(*(_QWORD*)(v97 + 32) + 8 * v100);
                              if (((*(__int64 (**)(__int64))(*(_QWORD*)v102 +
                                                             48LL))(v102) &
                                   1) != 0 ||
                                  (v103 = *(_QWORD*)(*(_QWORD*)(v97 + 32) +
                                                     8 * v100),
                                   ((result = (*(__int64 (**)(__int64))(
                                         *(_QWORD*)v103 + 56LL))(v103)) &
                                    1) != 0)) {
                                v101 =
                                    *(_QWORD*)(*(_QWORD*)(v96 + 32) + 8 * v100);
                                result = (*(__int64 (**)(__int64, __int64,
                                                         _QWORD, float, float))(
                                    *(_QWORD*)v101 + 24LL))(
                                    v101, v101,
                                    *(_QWORD*)(*(_QWORD*)(v97 + 32) + 8 * v100),
                                    v98, v12);
                              }
                              v100 = v99++;
                            } while (v100 < (__int64)(*(_QWORD*)(v96 + 40) -
                                                      *(_QWORD*)(v96 + 32)) >>
                                     3);
                            v54 = *v52;
                            v2 = v152;
                          }
                        }
                      }
                    }
                  }
                }
                else if (v54 != 0) {
                  v121 = 0;
                  for (j = 0; j < v54; v121 = ++j) {
                    v123 = *(_QWORD*)(v52[1] + 8 * v121);
                    if (v123 != 0) {
                      v124 = *(_QWORD*)(*(_QWORD*)(v51 + 8) + 8 * v121);
                      if (v124 != 0) {
                        v125 = v53 * *(float*)(v51 + 32);
                        if (v125 != 0x0.0p+0f &&
                            *(_QWORD*)(v123 + 40) != *(_QWORD*)(v123 + 32)) {
                          v126 = 1;
                          v127 = 0;
                          do {
                            v128 = *(_QWORD*)(*(_QWORD*)(v124 + 32) + 8 * v127);
                            result = (*(__int64 (**)(__int64))(*(_QWORD*)v128 +
                                                               48LL))(v128);
                            if ((result & 1) != 0) {
                              v129 =
                                  *(_QWORD*)(*(_QWORD*)(v123 + 32) + 8 * v127);
                              result = (*(__int64 (**)(__int64, __int64, _QWORD,
                                                       float, float))(
                                  *(_QWORD*)v129 + 24LL))(
                                  v129, v129,
                                  *(_QWORD*)(*(_QWORD*)(v124 + 32) + 8 * v127),
                                  v125, v12);
                            }
                            v127 = v126++;
                          } while (v127 < (__int64)(*(_QWORD*)(v123 + 40) -
                                                    *(_QWORD*)(v123 + 32)) >>
                                   3);
                          v54 = *v52;
                          v2 = v152;
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_201;
            }
            if (v15 != 5) {
              if (v15 != 6) {
                goto LABEL_13;
              }
              v29 = *(_DWORD*)(v14 + 4LL * *(int*)(v14 + 92) + 80);
              if (v29 == -1) {
                goto LABEL_13;
              }
              v30 = (__int64*)(v153 + 1560LL * v29);
              v32 = *v30;
              v31 = v30[1];
              if (v31 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8),
                                          1u, memory_order_relaxed);
              }
              if (v32 != 0) {
                v33 = *(unsigned __int64**)(v1 + 1544);
                v34 = *(float*)(v14 + 88);
                v35 = *v33;
                if ((*(_BYTE*)(v32 + 36) & 1) != 0) {
                  if (v35 != 0) {
                    v36 = 0;
                    for (k = 0; k < v35; v36 = ++k) {
                      v104 = *(_QWORD*)(v33[1] + 8 * v36);
                      if (v104 != 0) {
                        v105 = *(_QWORD*)(*(_QWORD*)(v32 + 8) + 8 * v36);
                        if (v105 != 0) {
                          v106 = v34 * *(float*)(v32 + 32);
                          if (v106 != 0x0.0p+0f &&
                              *(_QWORD*)(v104 + 40) != *(_QWORD*)(v104 + 32)) {
                            v107 = 1;
                            v108 = 0;
                            do {
                              v110 =
                                  *(_QWORD*)(*(_QWORD*)(v105 + 32) + 8 * v108);
                              if (((*(__int64 (**)(__int64))(*(_QWORD*)v110 +
                                                             48LL))(v110) &
                                   1) != 0 ||
                                  (v111 = *(_QWORD*)(*(_QWORD*)(v105 + 32) +
                                                     8 * v108),
                                   ((result = (*(__int64 (**)(__int64))(
                                         *(_QWORD*)v111 + 56LL))(v111)) &
                                    1) != 0)) {
                                v109 = *(_QWORD*)(*(_QWORD*)(v104 + 32) +
                                                  8 * v108);
                                result = (*(__int64 (**)(__int64, __int64,
                                                         _QWORD, float, float))(
                                    *(_QWORD*)v109 + 24LL))(
                                    v109, v109,
                                    *(_QWORD*)(*(_QWORD*)(v105 + 32) +
                                               8 * v108),
                                    v106, v12);
                              }
                              v108 = v107++;
                            } while (v108 < (__int64)(*(_QWORD*)(v104 + 40) -
                                                      *(_QWORD*)(v104 + 32)) >>
                                     3);
                            v35 = *v33;
                            v2 = v152;
                          }
                        }
                      }
                    }
                  }
                }
                else if (v35 != 0) {
                  v130 = 0;
                  for (m = 0; m < v35; v130 = ++m) {
                    v132 = *(_QWORD*)(v33[1] + 8 * v130);
                    if (v132 != 0) {
                      v133 = *(_QWORD*)(*(_QWORD*)(v32 + 8) + 8 * v130);
                      if (v133 != 0) {
                        v134 = v34 * *(float*)(v32 + 32);
                        if (v134 != 0x0.0p+0f &&
                            *(_QWORD*)(v132 + 40) != *(_QWORD*)(v132 + 32)) {
                          v135 = 1;
                          v136 = 0;
                          do {
                            v137 = *(_QWORD*)(*(_QWORD*)(v133 + 32) + 8 * v136);
                            result = (*(__int64 (**)(__int64))(*(_QWORD*)v137 +
                                                               48LL))(v137);
                            if ((result & 1) != 0) {
                              v138 =
                                  *(_QWORD*)(*(_QWORD*)(v132 + 32) + 8 * v136);
                              result = (*(__int64 (**)(__int64, __int64, _QWORD,
                                                       float, float))(
                                  *(_QWORD*)v138 + 24LL))(
                                  v138, v138,
                                  *(_QWORD*)(*(_QWORD*)(v133 + 32) + 8 * v136),
                                  v134, v12);
                            }
                            v136 = v135++;
                          } while (v136 < (__int64)(*(_QWORD*)(v132 + 40) -
                                                    *(_QWORD*)(v132 + 32)) >>
                                   3);
                          v35 = *v33;
                          v2 = v152;
                        }
                      }
                    }
                  }
                }
              }
            LABEL_201:
              if (v31 != 0) {
                goto LABEL_227;
              }
              goto LABEL_13;
            }
            v68 = *(_DWORD*)(v14 + 80);
            if (v68 == -1) {
              v71 = *(_DWORD*)(v14 + 84);
              if (v71 == -1) {
                goto LABEL_13;
              }
              v31 = 0;
              v70 = 0;
            }
            else {
              v69 = (__int64*)(v153 + 1560LL * v68);
              v70 = *v69;
              v31 = v69[1];
              if (v31 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8),
                                          1u, memory_order_relaxed);
              }
              v71 = *(_DWORD*)(v14 + 84);
              if (v71 == -1) {
                goto LABEL_201;
              }
            }
            v93 = (__int64*)(v153 + 1560LL * v71);
            v94 = *v93;
            v95 = v93[1];
            if (v95 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v95 + 8), 1u,
                                        memory_order_relaxed);
            }
            if (v70 != 0 && v94 != 0) {
              result = GameRoutine_a8fde0(*(_QWORD*)(v1 + 1544), v70, v94,
                                          *(float*)(v14 + 88), v12);
            }
            if (v95 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
              result = std___1___shared_weak_count___release_weak(v95);
              if (v31 != 0) {
                goto LABEL_227;
              }
              goto LABEL_13;
            }
            goto LABEL_201;
          }
          if (v15 != 1) {
            break;
          }
          v38 = *(unsigned __int8*)(v14 + 8);
          v39 = (v38 & 1) == 0;
          v40 = v38 >> 1;
          if (v39) {
            v41 = (_QWORD*)(v14 + 9);
          }
          else {
            v41 = *(_QWORD**)(v14 + 24);
          }
          if (v39) {
            v42 = v40;
          }
          else {
            v42 = *(_QWORD*)(v14 + 16);
          }
          if (v42 == 8 && *v41 == 0x656469727265764FLL) {
            v43 = *(_QWORD*)(v2 + 48);
            v139 = *(_QWORD*)(v2 + 56);
            v158_.v158 = v43;
            v158_.v159 = v139;
            if (v139 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v139 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            result =
                X8CALL_X0(__int64, GameRoutine_a8ed00((void*)(&v158_.v158), v2,
                                                      (__int64)v41, v42));
            v43 = v158_.v158;
          }
          if (v43 != 0) {
            v44 = *(unsigned __int64**)(v1 + 1544);
            v45 = *(float*)(v14 + 88);
            v46 = *v44;
            if ((*(_BYTE*)(v43 + 36) & 1) != 0) {
              if (v46 != 0) {
                v47 = 0;
                for (n = 0; n < v46; v47 = ++n) {
                  v72 = *(_QWORD*)(v44[1] + 8 * v47);
                  if (v72 != 0) {
                    v73 = *(_QWORD*)(*(_QWORD*)(v43 + 8) + 8 * v47);
                    if (v73 != 0) {
                      v74 = v45 * *(float*)(v43 + 32);
                      if (v74 != 0x0.0p+0f &&
                          *(_QWORD*)(v72 + 40) != *(_QWORD*)(v72 + 32)) {
                        v75 = 1;
                        v76 = 0;
                        do {
                          v78 = *(_QWORD*)(*(_QWORD*)(v73 + 32) + 8 * v76);
                          if (((*(__int64 (**)(__int64))(*(_QWORD*)v78 + 48LL))(
                                   v78) &
                               1) != 0 ||
                              (v79 = *(_QWORD*)(*(_QWORD*)(v73 + 32) + 8 * v76),
                               ((result = (*(__int64 (**)(__int64))(
                                     *(_QWORD*)v79 + 56LL))(v79)) &
                                1) != 0)) {
                            v77 = *(_QWORD*)(*(_QWORD*)(v72 + 32) + 8 * v76);
                            result =
                                (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                                float))(*(_QWORD*)v77 + 24LL))(
                                    v77, v77,
                                    *(_QWORD*)(*(_QWORD*)(v73 + 32) + 8 * v76),
                                    v74, v12);
                          }
                          v76 = v75++;
                        } while (v76 < (__int64)(*(_QWORD*)(v72 + 40) -
                                                 *(_QWORD*)(v72 + 32)) >>
                                 3);
                        v46 = *v44;
                      }
                    }
                  }
                }
              }
            }
            else if (v46 != 0) {
              v112 = 0;
              for (ii = 0; ii < v46; v112 = ++ii) {
                v114 = *(_QWORD*)(v44[1] + 8 * v112);
                if (v114 != 0) {
                  v115 = *(_QWORD*)(*(_QWORD*)(v43 + 8) + 8 * v112);
                  if (v115 != 0) {
                    v116 = v45 * *(float*)(v43 + 32);
                    if (v116 != 0x0.0p+0f &&
                        *(_QWORD*)(v114 + 40) != *(_QWORD*)(v114 + 32)) {
                      v117 = 1;
                      v118 = 0;
                      do {
                        v119 = *(_QWORD*)(*(_QWORD*)(v115 + 32) + 8 * v118);
                        result = (*(__int64 (**)(__int64))(*(_QWORD*)v119 +
                                                           48LL))(v119);
                        if ((result & 1) != 0) {
                          v120 = *(_QWORD*)(*(_QWORD*)(v114 + 32) + 8 * v118);
                          result =
                              (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                              float))(*(_QWORD*)v120 + 24LL))(
                                  v120, v120,
                                  *(_QWORD*)(*(_QWORD*)(v115 + 32) + 8 * v118),
                                  v116, v12);
                        }
                        v118 = v117++;
                      } while (v118 < (__int64)(*(_QWORD*)(v114 + 40) -
                                                *(_QWORD*)(v114 + 32)) >>
                               3);
                      v46 = *v44;
                      v2 = v152;
                    }
                  }
                }
              }
            }
          }
        LABEL_226:
          v31 = v158_.v159;
          if (v158_.v159 != 0) {
          LABEL_227:
            if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
              result = std___1___shared_weak_count___release_weak(v31);
            }
          }
        LABEL_13:
          v13 += 96;
          if (v13 == 1536) {
            goto LABEL_2;
          }
        }
        if (v15 == 2) {
          v57 = *(unsigned __int8*)(v14 + 8);
          v58 = (v57 & 1) == 0;
          v59 = v57 >> 1;
          if (v58) {
            v60 = (_QWORD*)(v14 + 9);
          }
          else {
            v60 = *(_QWORD**)(v14 + 24);
          }
          if (v58) {
            v61 = v59;
          }
          else {
            v61 = *(_QWORD*)(v14 + 16);
          }
          if (v61 == 8 && *v60 == 0x656469727265764FLL) {
            v142 = *(_QWORD*)(v2 + 56);
            v158_.v158 = *(_QWORD*)(v2 + 48);
            v158_.v159 = v142;
            if (v142 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v142 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            result =
                X8CALL_X0(__int64, GameRoutine_a8ed00((void*)(&v158_.v158), v2,
                                                      (__int64)v60, v61));
          }
          v62 = *(unsigned __int8*)(v14 + 32);
          v63 = (v62 & 1) == 0;
          v64 = v62 >> 1;
          if (v63) {
            v65 = (_QWORD*)(v14 + 33);
          }
          else {
            v65 = *(_QWORD**)(v14 + 48);
          }
          if (v63) {
            v66 = v64;
          }
          else {
            v66 = *(_QWORD*)(v14 + 40);
          }
          if (v66 == 8 && *v65 == 0x656469727265764FLL) {
            v143 = *(_QWORD*)(v2 + 56);
            v156_.v156 = *(_QWORD*)(v2 + 48);
            v156_.v157 = v143;
            if (v143 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v143 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            result =
                X8CALL_X0(__int64, GameRoutine_a8ed00((void*)(&v156_.v156), v2,
                                                      (__int64)v65, v66));
          }
          if (v158_.v158 != 0 && v156_.v156 != 0) {
            result = GameRoutine_a8fde0(*(_QWORD*)(v1 + 1544), v158_.v158,
                                        v156_.v156, *(float*)(v14 + 88), v12);
            v67 = v156_.v157;
            if (v156_.v157 == 0) {
              goto LABEL_226;
            }
            goto LABEL_224;
          }
        }
        else {
          if (v15 != 3) {
            goto LABEL_13;
          }
          v16 = *(unsigned __int8*)(v14 + 8);
          v17 = (v16 & 1) == 0;
          v18 = v16 >> 1;
          if (v17) {
            v19 = (_QWORD*)(v14 + 9);
          }
          else {
            v19 = *(_QWORD**)(v14 + 24);
          }
          if (v17) {
            v20 = v18;
          }
          else {
            v20 = *(_QWORD*)(v14 + 16);
          }
          if (v20 == 8 && *v19 == 0x656469727265764FLL) {
            v140 = *(_QWORD*)(v2 + 56);
            v158_.v158 = *(_QWORD*)(v2 + 48);
            v158_.v159 = v140;
            if (v140 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v140 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            result =
                X8CALL_X0(__int64, GameRoutine_a8ed00((void*)(&v158_.v158), v2,
                                                      (__int64)v19, v20));
          }
          v21 = *(unsigned __int8*)(v14 + 32);
          v22 = (v21 & 1) == 0;
          v23 = v21 >> 1;
          if (v22) {
            v24 = (_QWORD*)(v14 + 33);
          }
          else {
            v24 = *(_QWORD**)(v14 + 48);
          }
          if (v22) {
            v25 = v23;
          }
          else {
            v25 = *(_QWORD*)(v14 + 40);
          }
          if (v25 == 8 && *v24 == 0x656469727265764FLL) {
            v141 = *(_QWORD*)(v2 + 56);
            v156_.v156 = *(_QWORD*)(v2 + 48);
            v156_.v157 = v141;
            if (v141 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v141 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            result =
                X8CALL_X0(__int64, GameRoutine_a8ed00((void*)(&v156_.v156), v2,
                                                      (__int64)v24, v25));
          }
          v26 = *(unsigned __int8*)(v14 + 56);
          if ((v26 & 1) != 0) {
            v27 = *(_QWORD*)(v14 + 64);
          }
          else {
            v27 = v26 >> 1;
          }
          if (v27 != 0) {
            if ((v26 & 1) != 0) {
              v28 = *(_QWORD**)(v14 + 72);
            }
            else {
              v28 = (_QWORD*)(v14 + 57);
            }
            if (v27 == 8 && *v28 == 0x656469727265764FLL) {
              v150 = *(_QWORD*)(v2 + 56);
              v154_.v154 = *(_QWORD*)(v2 + 48);
              v154_.v155 = v150;
              if (v150 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v150 + 8),
                                          1u, memory_order_relaxed);
              }
            }
            else {
              result =
                  X8CALL_X0(__int64, GameRoutine_a8ed00((void*)(&v154_.v154),
                                                        v2, (__int64)v28, v27));
            }
          }
          else {
            v154_.v154 = 0;
            v154_.v155 = 0;
          }
          v80 = v158_.v158;
          if (v158_.v158 != 0) {
            v81 = v156_.v156;
            if (v156_.v156 != 0) {
              v82 = *(float*)(v14 + 88);
              v83 = *(float*)(v158_.v158 + 32) + *(float*)(v156_.v156 + 32);
              v84 = v154_.v154;
              v85 = *(unsigned __int64**)(v1 + 1544);
              if (v154_.v154 != 0) {
                v86 = *v85;
                if ((float)(v83 + *(float*)(v154_.v154 + 32)) >=
                        0x1.0000000000000p-23f &&
                    v86 != 0) {
                  v88 = 1;
                  v89 = 0;
                  do {
                    result = *(_QWORD*)(v85[1] + 8 * v89);
                    if (result != 0) {
                      v90 = *(_QWORD*)(*(_QWORD*)(v80 + 8) + 8 * v89);
                      if (v90 != 0) {
                        v91 = *(_QWORD*)(*(_QWORD*)(v81 + 8) + 8 * v89);
                        if (v91 != 0) {
                          v92 = *(_QWORD*)(*(_QWORD*)(v84 + 8) + 8 * v89);
                          if (v92 != 0) {
                            result = GameRoutine_ad6820(result, v90, v91, v92,
                                                        v82, v12);
                            v86 = *v85;
                          }
                        }
                      }
                    }
                    v89 = v88++;
                  } while (v86 > v89);
                }
              }
              else if (v83 >= 0x1.0000000000000p-23f) {
                v144 = *v85;
                if (*v85 != 0) {
                  v145 = 1;
                  v146 = 0;
                  do {
                    result = *(_QWORD*)(v85[1] + 8 * v146);
                    if (result != 0) {
                      v147 = *(_QWORD*)(*(_QWORD*)(v80 + 8) + 8 * v146);
                      if (v147 != 0) {
                        v148 = *(_QWORD*)(*(_QWORD*)(v81 + 8) + 8 * v146);
                        if (v148 != 0) {
                          result =
                              GameRoutine_ad66e0(result, v147, v148, v82, v12);
                          v144 = *v85;
                        }
                      }
                    }
                    v146 = v145++;
                  } while (v144 > v146);
                }
              }
            }
          }
          v149 = v154_.v155;
          if (v154_.v155 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v154_.v155 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v149 + 16LL))(v149);
            result = std___1___shared_weak_count___release_weak(v149);
            v67 = v156_.v157;
            if (v156_.v157 == 0) {
              goto LABEL_226;
            }
            goto LABEL_224;
          }
        }
        v67 = v156_.v157;
        if (v156_.v157 == 0) {
          goto LABEL_226;
        }
      LABEL_224:
        if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
          result = std___1___shared_weak_count___release_weak(v67);
        }
        goto LABEL_226;
      }
    }
  LABEL_2:
    v3 = v151 + 1560;
    v1 = v2 + v151 + 1560;
  } while (v151 != 23608);
  return result;
}

__int64 game_bc8340(float32x4_t** a1)
{
  float32x4_t* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float32x4_t* v8;
  float32x4_t* v9;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float v14;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  float v21;
  float v22;
  bool v23;

  v1 = *a1;
  v2 = LANES128((*a1)[7]).n128_u64[1];
  if (v2 == 0 || LANES128(v1[1]).n128_u32[0] == 63 ||
      (*(_BYTE*)(*(_QWORD*)(v2 + 448) + 489LL) & 1) == 0) {
    v4 = 0x1.0000000000000p+0f;
    LANES128(v1[6]).n128_u32[3] = 1065353216;
    goto LABEL_13;
  }
  v3 = LANES128(v1[10]).n128_u64[0];
  v4 = 0x1.0000000000000p+0f;
  v5 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v3 + 1881) != 0) {
    v6 = *(float*)(v3 + 2000);
    v7 = *(float*)(v3 + 1996);
    if (v6 > v7) {
      v8 = *(float32x4_t**)(eft_g_effectSystem + 400);
      v9 = *(float32x4_t**)(eft_g_effectSystem + 408);
      if (v8 == v9) {
        v10 = 0x1.fffffe0000000p+127f;
      }
      else {
        v10 = 0x1.fffffe0000000p+127f;
        do {
          v11 = *v8++;
          v12 = vsubq_f32(v1[60], v11);
          v13 = vmulq_f32(v12, v12);
          LANES128(v13).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                  .n64_u64[0];
          v14 = LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]))))
                    .n64_f32[0];
          if (v10 >= v14) {
            v10 = v14;
          }
        } while (v8 != v9);
      }
      v16 = (float)*(int*)(v3 + 2004) / 0x1.9000000000000p+6f;
      if (*(_BYTE*)(v3 + 1882) == 0) {
        v23 = v10 <= v6;
        v5 = 0x1.0000000000000p+0f;
        if (v23) {
          goto LABEL_34;
        }
        goto LABEL_32;
      }
      v17 = (float)(v10 - v7) / (float)(v6 - v7);
      if (v17 <= 0x1.0000000000000p+0f) {
        v18 = v17;
      }
      else {
        v18 = 0x1.0000000000000p+0f;
      }
      v19 = v17 < 0x0.0p+0f;
      v20 = 0x0.0p+0f;
      if (!v19) {
        v20 = v18;
      }
      if (v16 > 0x0.0p+0f) {
        if (v20 != 0x1.0000000000000p+0f) {
          v21 = (float)(v20 * (float)(v16 + -0x1.0000000000000p+0f)) +
                0x1.0000000000000p+0f;
          if (v16 >= v21) {
            v22 = (float)*(int*)(v3 + 2004) / 0x1.9000000000000p+6f;
          }
          else {
            v22 = v21;
          }
          if (v21 >= v16) {
            v21 = (float)*(int*)(v3 + 2004) / 0x1.9000000000000p+6f;
          }
          if (v16 > 0x1.0000000000000p+0f) {
            v5 = v21;
          }
          else {
            v5 = v22;
          }
          goto LABEL_34;
        }
      LABEL_32:
        v5 = (float)*(int*)(v3 + 2004) / 0x1.9000000000000p+6f;
        goto LABEL_34;
      }
      v5 = (float)(0x1.0000000000000p+0f - v20) + (float)(v20 * v16);
    }
  }
LABEL_34:
  if (v5 <= 0x1.0000000000000p+0f) {
    v4 = v5;
  }
LABEL_13:
  LANES128(v1[6]).n128_f32[0] = v4;
  return 0;
}

void game_c8a480()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_220b540 = (__int64)"dbg";
  GameData_220b548 = (__int64)game_script_dbg_DrawSphere;
  v0 = GameData_212bf18[0];
  GameData_220b580 = (__int64)"dbg";
  GameData_220b588 = (__int64)game_script_dbg_DrawBox;
  GameData_220b550 = 0;
  GameData_220b558 = 0;
  GameData_220b560 = 0;
  GameData_220b590 = 0;
  GameData_220b598 = 0;
  GameData_220b5a0 = 0;
  v1 = *GameData_212bf18[0];
  GameData_220b568 = 2;
  GameData_220b5b0 =
      (__int64)"void DrawBox(math::Vec3 position, math::Vec3 size)";
  GameData_220b5b8 = (__int64)&GameData_220b540;
  GameData_220b5a8 = 2;
  GameData_220b570 =
      (__int64)"void DrawSphere(math::Vec3 position, as_f32 radius)";
  GameData_220b578 = v1;
  v2 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_220b530;
  GameData_220b5d0 = 0;
  GameData_220b5d8 = 0;
  GameData_220b5e0 = 0;
  GameData_220b5e8 = 2;
  GameData_220b530 = (__int64)"dbg";
  GameData_220b538 = v2;
  GameData_220b5c0 = (__int64)"dbg";
  GameData_220b5c8 = (__int64)game_script_dbg_DrawCylinder;
  GameData_220b5f0 = (__int64)"void DrawCylinder(math::Vec3 position, as_f32 "
                              "radius, as_f32 height)";
  GameData_220b5f8 = (__int64)&GameData_220b580;
  GameData_220b600 = (__int64)"dbg";
  GameData_220b608 = (__int64)game_script_dbg_DrawQuad;
  GameData_220b610 = 0;
  GameData_220b618 = 0;
  GameData_220b620 = 0;
  GameData_220b628 = 2;
  GameData_220b630 =
      (__int64)"void DrawQuad(math::Vec3 position1, math::Vec3 position2, "
               "math::Vec3 position3, math::Vec3 position4)";
  GameData_220b638 = (__int64)&GameData_220b5c0;
  *v0 = (__int64)&GameData_220b640;
  GameData_220b660 = 0;
  GameData_220b650 = 0;
  GameData_220b658 = 0;
  GameData_220b668 = 2;
  GameData_220b640 = (__int64)"dbg";
  GameData_220b648 = (__int64)game_script_dbg_WriteStringToScreen;
  GameData_220b670 = (__int64)"void WriteStringToScreen(as_f32 screenX, as_f32 "
                              "screenY, const string& format)";
  GameData_220b678 = (__int64)&GameData_220b600;
}

_QWORD* game_c9e1c0(float* a1, unsigned __int8* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  unsigned __int64 v45;

  v5 = *a2;
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = std___1___hash_memory(v10, v11);
  v13 = *((_QWORD*)a1 + 1);
  v14 = v12;
  if (v13 != 0) {
    v15 = v13 - 1;
    if ((v13 & (v13 - 1)) != 0) {
      v4 = v12;
      if (v12 >= v13) {
        v4 = v12 % v13;
      }
    }
    else {
      v4 = v15 & v12;
    }
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v16 != nullptr) {
      v17 = (_QWORD*)*v16;
      if (*v16 != 0) {
        if ((v13 & v15) == 0) {
          while (1) {
            v22 = v17[1];
            if (v22 == v14) {
              v23 = *((unsigned __int8*)v17 + 16);
              v24 = v17[3];
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v11) {
                v25 = (v23 & 1) != 0 ? (_QWORD*)v17[4]
                                     : (_QWORD*)((char*)v17 + 17);
                if ((unsigned int)memcmp(v25, v10, v11) == 0) {
                  return v17;
                }
              }
            }
            else if ((v22 & v15) != v4) {
              goto LABEL_41;
            }
            v17 = (_QWORD*)*v17;
            if (v17 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v18 = v17[1];
          if (v18 == v14) {
            v19 = *((unsigned __int8*)v17 + 16);
            v20 = v17[3];
            if ((v19 & 1) == 0) {
              v20 = v19 >> 1;
            }
            if (v20 == v11) {
              v21 =
                  (v19 & 1) != 0 ? (_QWORD*)v17[4] : (_QWORD*)((char*)v17 + 17);
              if ((unsigned int)memcmp(v21, v10, v11) == 0) {
                return v17;
              }
            }
          }
          else {
            if (v18 >= v13) {
              v18 %= v13;
            }
            if (v18 != v4) {
              break;
            }
          }
          v17 = (_QWORD*)*v17;
        } while (v17 != nullptr);
      }
    }
  }
LABEL_41:
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v27 = *a4;
  *v26 = 0;
  v26[1] = v14;
  v17 = v26;
  if ((*(_BYTE*)v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, v27[2], v27[1]);
  }
  else {
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v26[3] = v29;
    v26[4] = v30;
    v26[2] = v28;
  }
  v31 = *((_QWORD*)a1 + 3);
  v32 = a1[8];
  *((_DWORD*)v17 + 10) = 0;
  v33 = (float)(unsigned __int64)(v31 + 1);
  if (v13 == 0 || (float)(v32 * (float)v13) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v13 >= 3) {
      v35 = (v13 & (v13 - 1)) != 0;
    }
    v36 = v35 | (2 * v13);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *((_QWORD*)a1 + 1);
    if (primeEm > v39) {
      goto LABEL_56;
    }
    if (primeEm < v39) {
      v40 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v40 = std___1___next_prime(v40);
      }
      else {
        v41 = 1LL << -(char)__clz(v40 - 1);
        if (v40 >= 2) {
          v40 = v41;
        }
      }
      if (primeEm <= v40) {
        primeEm = v40;
      }
      if (primeEm < v39) {
      LABEL_56:
        GameRoutine_68cb20((__int64*)a1, primeEm);
      }
    }
    v13 = *((_QWORD*)a1 + 1);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v4 = v14 % v13;
      }
      else {
        v4 = v14;
      }
    }
    else {
      v4 = (v13 - 1) & v14;
    }
  }
  v42 = *(_QWORD*)a1;
  v43 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v43 != nullptr) {
    *v17 = *v43;
    *v43 = v17;
  }
  else {
    v44 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v17;
    *v17 = v44;
    *(_QWORD*)(v42 + 8 * v4) = a1 + 4;
    if (*v17 != 0) {
      v45 = *(_QWORD*)(*v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v45 >= v13) {
          v45 %= v13;
        }
      }
      else {
        v45 &= v13 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v45) = v17;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v17;
}

__int64 (*game_cccaf0())()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_220b718 = (__int64)&GameData_1a91828;
  GameData_220b720 = (__int64)game_script_hub_PlayerStop;
  GameData_220b728 = 0;
  GameData_220b730 = 0;
  v0 = GameData_212bf18[0];
  GameData_220b788 = (__int64)"void PlayerRestart()";
  GameData_220b790 = (__int64)&GameData_220b718;
  GameData_220b758 = (__int64)&GameData_1a91828;
  GameData_220b760 = (__int64)game_script_hub_PlayerRestart;
  GameData_220b738 = 0;
  GameData_220b768 = 0;
  GameData_220b770 = 0;
  GameData_220b778 = 0;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_220b708;
  GameData_220b740 = 2;
  GameData_220b780 = 2;
  GameData_220b798 = (__int64)&GameData_1a91828;
  GameData_220b7a0 = (__int64)game_script_hub_InputStop;
  GameData_220b7a8 = 0;
  GameData_220b7b0 = 0;
  GameData_220b7b8 = 0;
  GameData_220b7c0 = 2;
  GameData_220c9f8 = 0;
  GameData_220ca38 = 0;
  GameData_220ca78 = 0;
  GameData_220cab8 = 0;
  GameData_220caf8 = 0;
  GameData_220cb38 = 0;
  GameData_220cb78 = 0;
  GameData_220cbb8 = 0;
  GameData_220cbf8 = 0;
  GameData_220cc38 = 0;
  GameData_220cc78 = 0;
  GameData_220ccb8 = 0;
  GameData_220ccf8 = 0;
  v2 = *v0;
  GameData_220cce8 = 0;
  GameData_220ccf0 = 0;
  GameData_220cd78 = 0;
  GameData_220cd68 = 0;
  GameData_220cd70 = 0;
  GameData_220cd80 = 2;
  GameData_220cd00 = 2;
  GameData_220cca8 = 0;
  GameData_220ccb0 = 0;
  GameData_220ccc0 = 2;
  GameData_220cc68 = 0;
  GameData_220cc70 = 0;
  GameData_220cc80 = 2;
  GameData_220cc28 = 0;
  GameData_220cc30 = 0;
  GameData_220cc40 = 2;
  GameData_220cbe8 = 0;
  GameData_220cbf0 = 0;
  GameData_220cc00 = 2;
  GameData_220cba8 = 0;
  GameData_220cbb0 = 0;
  GameData_220cbc0 = 2;
  GameData_220cb68 = 0;
  GameData_220cb70 = 0;
  GameData_220cb80 = 2;
  GameData_220cb28 = 0;
  GameData_220cb30 = 0;
  GameData_220cb40 = 2;
  GameData_220cae8 = 0;
  GameData_220caf0 = 0;
  GameData_220cb00 = 2;
  GameData_220caa8 = 0;
  GameData_220cab0 = 0;
  GameData_220cac0 = 2;
  GameData_220ca68 = 0;
  GameData_220ca70 = 0;
  GameData_220ca80 = 2;
  GameData_220ca28 = 0;
  GameData_220ca30 = 0;
  GameData_220ca40 = 2;
  GameData_220c9e8 = 0;
  GameData_220c9f0 = 0;
  GameData_220ca00 = 2;
  GameData_220c978 = 0;
  GameData_220b708 = (__int64)&GameData_1a91828;
  GameData_220b710 = v1;
  GameData_220c968 = 0;
  GameData_220c970 = 0;
  GameData_220c980 = 2;
  GameData_220c9b8 = 0;
  GameData_220c9a8 = 0;
  GameData_220c9b0 = 0;
  GameData_220c9c0 = 2;
  GameData_220c928 = 0;
  GameData_220c930 = 0;
  GameData_220c940 = 2;
  GameData_220b748 = (__int64)"void PlayerStop()";
  GameData_220b750 = v2;
  GameData_220cdb8 = 0;
  GameData_220cda8 = 0;
  GameData_220cdb0 = 0;
  GameData_220cdc0 = 2;
  GameData_220c938 = 0;
  GameData_220b7c8 = (__int64)"void InputStop()";
  GameData_220b7d0 = (__int64)&GameData_220b758;
  GameData_220b7d8 = (__int64)&GameData_1a91828;
  GameData_220b7e0 = (__int64)game_script_hub_InputRestart;
  GameData_220b7e8 = 0;
  GameData_220b7f0 = 0;
  GameData_220b7f8 = 0;
  GameData_220b800 = 2;
  GameData_220b808 = (__int64)"void InputRestart()";
  GameData_220b810 = (__int64)&GameData_220b798;
  GameData_220b838 = 0;
  GameData_220b828 = 0;
  GameData_220b830 = 0;
  GameData_220b840 = 2;
  GameData_220b958 = (__int64)&GameData_1a91828;
  GameData_220b960 = (__int64)game_script_hub_BindEnemyNotice;
  GameData_220b978 = 0;
  GameData_220b968 = 0;
  GameData_220b970 = 0;
  GameData_220b980 = 2;
  GameData_220b818 = (__int64)&GameData_1a91828;
  GameData_220b820 = (__int64)game_script_hub_PausePersistent;
  GameData_220cd38 = 0;
  GameData_220cd28 = 0;
  GameData_220cd30 = 0;
  GameData_220cd40 = 2;
  GameData_220b848 = (__int64)"void PausePersistent()";
  GameData_220b850 = (__int64)&GameData_220b7d8;
  GameData_220b858 = (__int64)&GameData_1a91828;
  GameData_220b860 = (__int64)game_script_hub_ResumePersistent;
  GameData_220b878 = 0;
  GameData_220b868 = 0;
  GameData_220b870 = 0;
  GameData_220b880 = 2;
  GameData_220b888 = (__int64)"void ResumePersistent()";
  GameData_220b890 = (__int64)&GameData_220b818;
  GameData_220b898 = (__int64)&GameData_1a91828;
  GameData_220b8a0 = (__int64)game_script_hub_BindEnemyStop;
  GameData_220b8b8 = 0;
  GameData_220b8a8 = 0;
  GameData_220b8b0 = 0;
  GameData_220b8c0 = 2;
  GameData_220b8c8 = (__int64)"void BindEnemyStop()";
  GameData_220b8d0 = (__int64)&GameData_220b858;
  GameData_220b8d8 = (__int64)&GameData_1a91828;
  GameData_220b8e0 = (__int64)game_script_hub_UnbindEnemyStop;
  GameData_220b8f8 = 0;
  GameData_220b8e8 = 0;
  GameData_220b8f0 = 0;
  GameData_220b900 = 2;
  GameData_220b908 = (__int64)"void UnbindEnemyStop()";
  GameData_220b910 = (__int64)&GameData_220b898;
  GameData_220b918 = (__int64)&GameData_1a91828;
  GameData_220b920 = (__int64)game_script_hub_BindEnemyStopOnPlayable;
  GameData_220b938 = 0;
  GameData_220b928 = 0;
  GameData_220b930 = 0;
  GameData_220b940 = 2;
  GameData_220b948 = (__int64)"void BindEnemyStopOnPlayable()";
  GameData_220b950 = (__int64)&GameData_220b8d8;
  GameData_220b988 = (__int64)"void BindEnemyNotice()";
  GameData_220b990 = (__int64)&GameData_220b918;
  GameData_220b9b8 = 0;
  GameData_220b9a8 = 0;
  GameData_220b9b0 = 0;
  GameData_220b9c0 = 2;
  GameData_220b998 = (__int64)&GameData_1a91828;
  GameData_220b9a0 = (__int64)game_script_hub_UnbindEnemyNotice;
  GameData_220b9c8 = (__int64)"void UnbindEnemyNotice()";
  GameData_220b9d0 = (__int64)&GameData_220b958;
  GameData_220b9d8 = (__int64)&GameData_1a91828;
  GameData_220b9e0 = (__int64)game_script_hub_GetDt;
  GameData_220b9f8 = 0;
  GameData_220b9e8 = 0;
  GameData_220b9f0 = 0;
  GameData_220ba00 = 2;
  GameData_220bad8 = (__int64)&GameData_1a91828;
  GameData_220bae0 = (__int64)game_script_hub_SetHideNearest;
  GameData_220baf8 = 0;
  GameData_220bae8 = 0;
  GameData_220baf0 = 0;
  GameData_220bb00 = 2;
  GameData_220ba08 = (__int64)"float GetDt()";
  GameData_220ba10 = (__int64)&GameData_220b998;
  GameData_220ba18 = (__int64)&GameData_1a91828;
  GameData_220ba20 = (__int64)game_script_hub_HasObjLocator;
  GameData_220ba38 = 0;
  GameData_220ba28 = 0;
  GameData_220ba30 = 0;
  GameData_220ba40 = 2;
  GameData_220ba48 = (__int64)"bool HasObjLocator(const string& objName, const "
                              "string& lctName)";
  GameData_220ba50 = (__int64)&GameData_220b9d8;
  GameData_220ba58 = (__int64)&GameData_1a91828;
  GameData_220ba60 = (__int64)hub_GetObjLocatorPos;
  GameData_220ba78 = 0;
  GameData_220ba68 = 0;
  GameData_220ba70 = 0;
  GameData_220ba80 = 2;
  GameData_220ba88 = (__int64)"math::Vec3 GetObjLocatorPos(const string& "
                              "objName, const string& lctName)";
  GameData_220ba90 = (__int64)&GameData_220ba18;
  GameData_220ba98 = (__int64)&GameData_1a91828;
  GameData_220baa0 = (__int64)game_script_hub_GetObjLocatorAngle;
  GameData_220bab8 = 0;
  GameData_220baa8 = 0;
  GameData_220bab0 = 0;
  GameData_220bac0 = 2;
  GameData_220bac8 = (__int64)"float GetObjLocatorAngle(const string& objName, "
                              "const string& lctName)";
  GameData_220bad0 = (__int64)&GameData_220ba58;
  GameData_220bb08 = (__int64)"void SetHideNearest(bool IsHideNearest)";
  GameData_220bb10 = (__int64)&GameData_220ba98;
  GameData_220bb38 = 0;
  GameData_220bb28 = 0;
  GameData_220bb30 = 0;
  GameData_220bb40 = 2;
  GameData_220bb18 = (__int64)&GameData_1a91828;
  GameData_220bb20 = (__int64)HubNatives_cbf330;
  GameData_220bb48 = (__int64)"void ExitHub(bool isWalkExit)";
  GameData_220bb50 = (__int64)&GameData_220bad8;
  GameData_220bb58 = (__int64)&GameData_1a91828;
  GameData_220bb60 = (__int64)HubNatives_cbf460;
  GameData_220bb78 = 0;
  GameData_220bb68 = 0;
  GameData_220bb70 = 0;
  GameData_220bb80 = 2;
  GameData_220bc58 = (__int64)&GameData_1a91828;
  GameData_220bc60 = (__int64)HubNatives_cbfb20;
  GameData_220bc78 = 0;
  GameData_220bc68 = 0;
  GameData_220bc70 = 0;
  GameData_220bc80 = 2;
  GameData_220bb88 = (__int64)"void ReloadImmediate()";
  GameData_220bb90 = (__int64)&GameData_220bb18;
  GameData_220bb98 = (__int64)&GameData_1a91828;
  GameData_220bba0 = (__int64)hub_SetGameHierarchyOverride;
  GameData_220bbb8 = 0;
  GameData_220bba8 = 0;
  GameData_220bbb0 = 0;
  GameData_220bbc0 = 2;
  GameData_220bbc8 = (__int64)"void SetGameHierarchyOverride(string label)";
  GameData_220bbd0 = (__int64)&GameData_220bb58;
  GameData_220bbd8 = (__int64)&GameData_1a91828;
  GameData_220bbe0 = (__int64)hub_ClearGameHierarchyOverride;
  GameData_220bbf8 = 0;
  GameData_220bbe8 = 0;
  GameData_220bbf0 = 0;
  GameData_220bc00 = 2;
  GameData_220bc08 = (__int64)"void ClearGameHierarchyOverride()";
  GameData_220bc10 = (__int64)&GameData_220bb98;
  GameData_220bc18 = (__int64)&GameData_1a91828;
  GameData_220bc20 = (__int64)HubNatives_cbfa70;
  GameData_220bc38 = 0;
  GameData_220bc28 = 0;
  GameData_220bc30 = 0;
  GameData_220bc40 = 2;
  GameData_220bc48 = (__int64)"void PushEnterSeqReloadAll()";
  GameData_220bc50 = (__int64)&GameData_220bbd8;
  GameData_220bc88 = (__int64)"void WarpHub(const string& disposLocator, const "
                              "string& enterType)";
  GameData_220bc90 = (__int64)&GameData_220bc18;
  GameData_220bcb8 = 0;
  GameData_220bca8 = 0;
  GameData_220bcb0 = 0;
  GameData_220bcc0 = 2;
  GameData_220bc98 = (__int64)&GameData_1a91828;
  GameData_220bca0 = (__int64)hub_WarpWorld;
  GameData_220bcc8 =
      (__int64)"void WarpWorld(const string& areaFullName, const string& "
               "disposLocator, const string& enterType)";
  GameData_220bcd0 = (__int64)&GameData_220bc58;
  GameData_220bcd8 = (__int64)&GameData_1a91828;
  GameData_220bce0 = (__int64)game_script_hub_PlayBgm;
  GameData_220bcf8 = 0;
  GameData_220bce8 = 0;
  GameData_220bcf0 = 0;
  GameData_220bd00 = 2;
  GameData_220bd08 = (__int64)"void PlayBgm()";
  GameData_220bd10 = (__int64)&GameData_220bc98;
  GameData_220bd18 = (__int64)&GameData_1a91828;
  GameData_220bd20 = (__int64)HubNatives_cc0630;
  GameData_220bd38 = 0;
  GameData_220bd28 = 0;
  GameData_220bd30 = 0;
  GameData_220bd40 = 2;
  GameData_220bd48 = (__int64)"void PauseBgm()";
  GameData_220bd50 = (__int64)&GameData_220bcd8;
  GameData_220bd58 = (__int64)&GameData_1a91828;
  GameData_220bd60 = (__int64)HubNatives_cc0760;
  GameData_220bd78 = 0;
  GameData_220bd68 = 0;
  GameData_220bd70 = 0;
  GameData_220bd80 = 2;
  GameData_220bd88 = (__int64)"void StopBgm()";
  GameData_220bd90 = (__int64)&GameData_220bd18;
  GameData_220bd98 = (__int64)&GameData_1a91828;
  GameData_220bda0 = (__int64)hub_StopBgm;
  GameData_220bdc8 = (__int64)"void StopBgm(float sec)";
  GameData_220bdd0 = (__int64)&GameData_220bd58;
  GameData_220bdb8 = 0;
  GameData_220bda8 = 0;
  GameData_220bdb0 = 0;
  GameData_220bdc0 = 2;
  GameData_220bdd8 = (__int64)&GameData_1a91828;
  GameData_220bde0 = (__int64)HubNatives_cc0970;
  GameData_220be08 = (__int64)"void RunBgmUnpausedEvent(bool isRun)";
  GameData_220be10 = (__int64)&GameData_220bd98;
  GameData_220bdf8 = 0;
  GameData_220bde8 = 0;
  GameData_220bdf0 = 0;
  GameData_220be00 = 2;
  GameData_220c9c8 = (__int64)"void ClearOverrideDisposIdLabel()";
  GameData_220c9d0 = (__int64)&GameData_220c958;
  GameData_220be48 = (__int64)"void SetEnableExitHubBgm(bool isEnable)";
  GameData_220be50 = (__int64)&GameData_220bdd8;
  GameData_220be18 = (__int64)&GameData_1a91828;
  GameData_220be20 = (__int64)game_script_hub_SetEnableExitHubBgm;
  GameData_220be38 = 0;
  GameData_220be28 = 0;
  GameData_220be30 = 0;
  GameData_220be40 = 2;
  GameData_220ca48 = (__int64)"void SetDisableSaveMenu(bool isEnable)";
  GameData_220ca50 = (__int64)&GameData_220c9d8;
  GameData_220c988 =
      (__int64)"void SetOverrideDisposIdLabel(const string& label)";
  GameData_220c990 = (__int64)&GameData_220c918;
  GameData_220c900 = 2;
  GameData_220c8f8 = 0;
  GameData_220c8e8 = 0;
  GameData_220c8f0 = 0;
  GameData_220be78 = 0;
  GameData_220be68 = 0;
  GameData_220be70 = 0;
  GameData_220be80 = 2;
  GameData_220cac8 = (__int64)"void SaveReserveEnterEvent(const string& arg)";
  GameData_220cad0 = (__int64)&GameData_220ca58;
  GameData_220c958 = (__int64)&GameData_1a91828;
  GameData_220c960 = (__int64)hub_SetOverrideDisposIdLabel;
  GameData_220cb48 = (__int64)"void SetEnableFacility(bool isEnable)";
  GameData_220cb50 = (__int64)&GameData_220cad8;
  GameData_220c948 = (__int64)"void ClearOverrideBgmLabel()";
  GameData_220c950 = (__int64)&GameData_220c8d8;
  GameData_220cbc8 = (__int64)"string GetRunCondition_string(string funcName)";
  GameData_220cbd0 = (__int64)&GameData_220cb58;
  GameData_220cc48 =
      (__int64)"bool IsSubquestCompletedBySharedComp(string subquestId)";
  GameData_220cc50 = (__int64)&GameData_220cbd8;
  GameData_220ccc8 = (__int64)"bool IsSubquestOrder(string subquestId)";
  GameData_220ccd0 = (__int64)&GameData_220cc58;
  GameData_220cd48 = (__int64)"bool IsSubquestReportable(string subquestId)";
  GameData_220cd50 = (__int64)&GameData_220ccd8;
  GameData_220ce08 = (__int64)"bool IsSideStoryCanTalk(string ssid)";
  GameData_220ce10 = (__int64)&GameData_220cd98;
  GameData_220cdf8 = 0;
  GameData_220cde8 = 0;
  GameData_220cdf0 = 0;
  GameData_220ce00 = 2;
  GameData_220cdc8 = (__int64)"void RunSubquestClear(string subquestId)";
  GameData_220cdd0 = (__int64)&GameData_220cd58;
  GameData_220cdd8 = (__int64)&GameData_1a91828;
  GameData_220cde0 = (__int64)hub_IsSideStoryCanTalk;
  GameData_220cd88 = (__int64)"bool IsSubquestCleared(string subquestId)";
  GameData_220cd90 = (__int64)&GameData_220cd18;
  GameData_220cd98 = (__int64)&GameData_1a91828;
  GameData_220cda0 = (__int64)hub_RunSubquestClear;
  GameData_220cd58 = (__int64)&GameData_1a91828;
  GameData_220cd60 = (__int64)hub_IsSubquestCleared;
  GameData_220be58 = (__int64)&GameData_1a91828;
  GameData_220be60 = (__int64)GameRoutine_cc0b50;
  GameData_220cd08 = (__int64)"bool IsSubquestProgressing(string subquestId)";
  GameData_220cd10 = (__int64)&GameData_220cc98;
  GameData_220c7f8 = 0;
  GameData_220c7e8 = 0;
  GameData_220c7f0 = 0;
  GameData_220c800 = 2;
  GameData_220c338 = 0;
  GameData_220c328 = 0;
  GameData_220c330 = 0;
  GameData_220c340 = 2;
  GameData_220cd18 = (__int64)&GameData_1a91828;
  GameData_220cd20 = (__int64)hub_IsSubquestReportable;
  GameData_220ccd8 = (__int64)&GameData_1a91828;
  GameData_220cce0 = (__int64)hub_IsSubquestProgressing;
  GameData_220c318 = (__int64)&GameData_1a91828;
  GameData_220c320 = (__int64)HubNatives_cc2480;
  GameData_220cc88 = (__int64)"bool IsSubquestTerm(string subquestId)";
  GameData_220cc90 = (__int64)&GameData_220cc18;
  GameData_220c378 = 0;
  GameData_220c368 = 0;
  GameData_220c370 = 0;
  GameData_220c380 = 2;
  GameData_220cc98 = (__int64)&GameData_1a91828;
  GameData_220cca0 = (__int64)hub_IsSubquestOrder;
  GameData_220cc58 = (__int64)&GameData_1a91828;
  GameData_220cc60 = (__int64)hub_IsSubquestTerm;
  GameData_220c3b8 = 0;
  GameData_220c3a8 = 0;
  GameData_220c3b0 = 0;
  GameData_220c3c0 = 2;
  GameData_220cc08 = (__int64)"bool IsCanSubquest()";
  GameData_220cc10 = (__int64)&GameData_220cb98;
  GameData_220c3c8 = (__int64)"void SetLockLightReloadOutSide(bool isLock)";
  GameData_220c3d0 = (__int64)&GameData_220c358;
  GameData_220cc18 = (__int64)&GameData_1a91828;
  GameData_220cc20 = (__int64)hub_IsSubquestCompletedBySharedComp;
  GameData_220cbd8 = (__int64)&GameData_1a91828;
  GameData_220cbe0 = (__int64)game_script_hub_IsCanSubquest;
  GameData_220c3f8 = 0;
  GameData_220c3e8 = 0;
  GameData_220c3f0 = 0;
  GameData_220c400 = 2;
  GameData_220cb88 = (__int64)"as_s32 GetRunCondition_s32(string funcName)";
  GameData_220cb90 = (__int64)&GameData_220cb18;
  GameData_220c438 = 0;
  GameData_220c428 = 0;
  GameData_220c430 = 0;
  GameData_220c440 = 2;
  GameData_220cb98 = (__int64)&GameData_1a91828;
  GameData_220cba0 = (__int64)HubNatives_cc5f00;
  GameData_220cb58 = (__int64)&GameData_1a91828;
  GameData_220cb60 = (__int64)HubNatives_cc5df0;
  GameData_220c448 = (__int64)"void PopRunningScriptEvent()";
  GameData_220c450 = (__int64)&GameData_220c3d8;
  GameData_220cb08 =
      (__int64)"void SaveReserveEnterEvent( array<string>& arg )";
  GameData_220cb10 = (__int64)&GameData_220ca98;
  GameData_220c478 = 0;
  GameData_220c468 = 0;
  GameData_220c470 = 0;
  GameData_220c480 = 2;
  GameData_220cb18 = (__int64)&GameData_1a91828;
  GameData_220cb20 = (__int64)game_script_hub_SetEnableFacility;
  GameData_220cad8 = (__int64)&GameData_1a91828;
  GameData_220cae0 = (__int64)hub_SaveReserveEnterEvent_cc5980;
  GameData_220c4b8 = 0;
  GameData_220c4a8 = 0;
  GameData_220c4b0 = 0;
  GameData_220c4c0 = 2;
  GameData_220ca88 = (__int64)"void SetDngUnitCountOne(bool isEnable)";
  GameData_220ca90 = (__int64)&GameData_220ca18;
  GameData_220c4c8 = (__int64)"void StartEventExitView()";
  GameData_220c4d0 = (__int64)&GameData_220c458;
  GameData_220ca98 = (__int64)&GameData_1a91828;
  GameData_220caa0 = (__int64)hub_SaveReserveEnterEvent_cc5780;
  GameData_220ca58 = (__int64)&GameData_1a91828;
  GameData_220ca60 = (__int64)game_script_hub_SetDngUnitCountOne;
  GameData_220c4f8 = 0;
  GameData_220c4e8 = 0;
  GameData_220c4f0 = 0;
  GameData_220c500 = 2;
  GameData_220ca08 = (__int64)"void SetContinueEncountBgm(bool isEnable)";
  GameData_220ca10 = (__int64)&GameData_220c998;
  GameData_220c538 = 0;
  GameData_220c528 = 0;
  GameData_220c530 = 0;
  GameData_220c540 = 2;
  GameData_220ca18 = (__int64)&GameData_1a91828;
  GameData_220ca20 = (__int64)game_script_hub_SetDisableSaveMenu;
  GameData_220c9d8 = (__int64)&GameData_1a91828;
  GameData_220c9e0 = (__int64)game_script_hub_SetContinueEncountBgm;
  GameData_220c868 = 0;
  GameData_220c870 = 0;
  GameData_220c880 = 2;
  GameData_220c878 = 0;
  GameData_220c998 = (__int64)&GameData_1a91828;
  GameData_220c9a0 = (__int64)HubNatives_cc53f0;
  GameData_220c908 = (__int64)"void SetOverrideBgmLabel(const string& label)";
  GameData_220c910 = (__int64)&GameData_220c898;
  GameData_220c898 = (__int64)&GameData_1a91828;
  GameData_220c8a0 = (__int64)HubNatives_cc4ce0;
  GameData_220c8b8 = 0;
  GameData_220c8a8 = 0;
  GameData_220c8b0 = 0;
  GameData_220c8c0 = 2;
  GameData_220c8c8 = (__int64)"void RunBattleField(const string& label)";
  GameData_220c8d0 = (__int64)&GameData_220c858;
  GameData_220c548 = (__int64)"void StartFacility(const string& facilityType, "
                              "const string& facilityArg1)";
  GameData_220c550 = (__int64)&GameData_220c4d8;
  GameData_220c918 = (__int64)&GameData_1a91828;
  GameData_220c920 = (__int64)hub_ClearOverrideBgmLabel;
  GameData_220c888 = (__int64)"void RunCmdBtl(const string& label)";
  GameData_220c890 = (__int64)&GameData_220c818;
  GameData_220c818 = (__int64)&GameData_1a91828;
  GameData_220c820 = (__int64)game_script_hub_ExitPlayerWalk;
  GameData_220c838 = 0;
  GameData_220c828 = 0;
  GameData_220c830 = 0;
  GameData_220c840 = 2;
  GameData_220c6f8 = 0;
  GameData_220c6e8 = 0;
  GameData_220c6f0 = 0;
  GameData_220c700 = 2;
  GameData_220c8d8 = (__int64)&GameData_1a91828;
  GameData_220c8e0 = (__int64)hub_SetOverrideBgmLabel;
  GameData_220c848 = (__int64)"void ExitPlayerWalk()";
  GameData_220c850 = (__int64)&GameData_220c7d8;
  GameData_220c5b8 = 0;
  GameData_220c5a8 = 0;
  GameData_220c5b0 = 0;
  GameData_220c5c0 = 2;
  GameData_220c858 = (__int64)&GameData_1a91828;
  GameData_220c860 = (__int64)hub_RunCmdBtl;
  GameData_220c7a8 = 0;
  GameData_220c7b0 = 0;
  GameData_220c7c0 = 2;
  GameData_220c7b8 = 0;
  GameData_220c808 = (__int64)"bool IsSkipFadeInEventEndCamera()";
  GameData_220c810 = (__int64)&GameData_220c798;
  GameData_220c608 =
      (__int64)"bool IsInstructionNotPerson(const string& facilityType)";
  GameData_220c610 = (__int64)&GameData_220c598;
  GameData_220c5f8 = 0;
  GameData_220c5e8 = 0;
  GameData_220c5f0 = 0;
  GameData_220c600 = 2;
  GameData_220c7c8 =
      (__int64)"bool IsOpeningHourFacility(const string& tableName)";
  GameData_220c7d0 = (__int64)&GameData_220c758;
  GameData_220c778 = 0;
  GameData_220c768 = 0;
  GameData_220c770 = 0;
  GameData_220c780 = 2;
  GameData_220c7d8 = (__int64)&GameData_1a91828;
  GameData_220c7e0 = (__int64)game_script_hub_IsSkipFadeInEventEndCamera;
  GameData_220c798 = (__int64)&GameData_1a91828;
  GameData_220c7a0 = (__int64)game_script_hub_IsOpeningHourFacility;
  GameData_220c6b8 = 0;
  GameData_220c6a8 = 0;
  GameData_220c6b0 = 0;
  GameData_220c6c0 = 2;
  GameData_220c758 = (__int64)&GameData_1a91828;
  GameData_220c760 = (__int64)hub_IsOutHourFacilityArg;
  GameData_220c728 = 0;
  GameData_220c730 = 0;
  GameData_220c740 = 2;
  GameData_220c738 = 0;
  GameData_220c788 = (__int64)"bool IsOutHourFacilityArg(const string& "
                              "facilityType, const string& facilityArg1)";
  GameData_220c790 = (__int64)&GameData_220c718;
  GameData_220c748 =
      (__int64)"bool IsOutHourFacility(const string& facilityType)";
  GameData_220c750 = (__int64)&GameData_220c6d8;
  GameData_220c708 = (__int64)"bool IsAccessibleFacility(const string& "
                              "facilityType, const string& facilityArg1)";
  GameData_220c710 = (__int64)&GameData_220c698;
  GameData_220c718 = (__int64)&GameData_1a91828;
  GameData_220c720 = (__int64)hub_IsOutHourFacility;
  GameData_220c6d8 = (__int64)&GameData_1a91828;
  GameData_220c6e0 = (__int64)hub_IsAccessibleFacility;
  GameData_220c6c8 =
      (__int64)"bool IsAccessibleFacility(const string& facilityType)";
  GameData_220c6d0 = (__int64)&GameData_220c658;
  GameData_220c678 = 0;
  GameData_220c668 = 0;
  GameData_220c670 = 0;
  GameData_220c680 = 2;
  GameData_220c698 = (__int64)&GameData_1a91828;
  GameData_220c6a0 = (__int64)hub_IsAccessibleFacility_cc3de0;
  GameData_220c688 = (__int64)"bool IsFacilityArrival(const string& "
                              "facilityType, const string& facilityArg1)";
  GameData_220c690 = (__int64)&GameData_220c618;
  GameData_220c638 = 0;
  GameData_220c628 = 0;
  GameData_220c630 = 0;
  GameData_220c640 = 2;
  GameData_220c658 = (__int64)&GameData_1a91828;
  GameData_220c660 = (__int64)hub_IsFacilityArrival;
  GameData_220c648 = (__int64)"bool IsNeedFacilityTalk(const string& "
                              "facilityType, const string& facilityArg1)";
  GameData_220c650 = (__int64)&GameData_220c5d8;
  GameData_220c618 = (__int64)&GameData_1a91828;
  GameData_220c620 = (__int64)hub_IsNeedFacilityTalk;
  GameData_220c5d8 = (__int64)&GameData_1a91828;
  GameData_220c5e0 = (__int64)HubNatives_cc3660;
  GameData_220c5c8 = (__int64)"void StartFacilityInstruction(const string& "
                              "facilityType, const string& facilityArg1)";
  GameData_220c5d0 = (__int64)&GameData_220c558;
  GameData_220c578 = 0;
  GameData_220c568 = 0;
  GameData_220c570 = 0;
  GameData_220c580 = 2;
  GameData_220c3d8 = (__int64)&GameData_1a91828;
  GameData_220c3e0 = (__int64)game_script_hub_PushRunningScriptEvent;
  GameData_220c488 = (__int64)"bool IsRunningScriptEvent()";
  GameData_220c490 = (__int64)&GameData_220c418;
  GameData_220be88 = (__int64)"void WaitOutsideProc()";
  GameData_220be90 = (__int64)&GameData_220be18;
  GameData_220c588 =
      (__int64)"void StartFacilityInstruction(const string& facilityType)";
  GameData_220c590 = (__int64)&GameData_220c518;
  GameData_220c2b8 = 0;
  GameData_220c2a8 = 0;
  GameData_220c2b0 = 0;
  GameData_220c2c0 = 2;
  GameData_220c498 = (__int64)&GameData_1a91828;
  GameData_220c4a0 = (__int64)hub_StartEventExitView;
  GameData_220c598 = (__int64)&GameData_1a91828;
  GameData_220c5a0 = (__int64)hub_StartFacilityInstruction_cc3440;
  GameData_220bff8 = 0;
  GameData_220bfe8 = 0;
  GameData_220bff0 = 0;
  GameData_220c000 = 2;
  GameData_220c558 = (__int64)&GameData_1a91828;
  GameData_220c560 = (__int64)hub_StartFacilityInstruction_cc3310;
  GameData_220c508 = (__int64)"void StartFacility(const string& facilityType)";
  GameData_220c510 = (__int64)&GameData_220c498;
  GameData_220c458 = (__int64)&GameData_1a91828;
  GameData_220c460 = (__int64)game_script_hub_IsRunningScriptEvent;
  GameData_220c518 = (__int64)&GameData_1a91828;
  GameData_220c520 = (__int64)hub_StartFacility_cc3110;
  GameData_220be98 = (__int64)&GameData_1a91828;
  GameData_220bea0 = (__int64)game_script_hub_SetEnableEventSkipLayer;
  GameData_220beb8 = 0;
  GameData_220bea8 = 0;
  GameData_220beb0 = 0;
  GameData_220bec0 = 2;
  GameData_220c408 = (__int64)"void PushRunningScriptEvent()";
  GameData_220c410 = (__int64)&GameData_220c398;
  GameData_220c4d8 = (__int64)&GameData_1a91828;
  GameData_220c4e0 = (__int64)hub_StartFacility_cc2fe0;
  GameData_220c388 = (__int64)"void ReloadLightweight()";
  GameData_220c390 = (__int64)&GameData_220c318;
  GameData_220c418 = (__int64)&GameData_1a91828;
  GameData_220c420 = (__int64)game_script_hub_PopRunningScriptEvent;
  GameData_220c008 = (__int64)"bool IsPlacementPattern(int surplus, int idx)";
  GameData_220c010 = (__int64)&GameData_220bf98;
  GameData_220bfb8 = 0;
  GameData_220bfa8 = 0;
  GameData_220bfb0 = 0;
  GameData_220bfc0 = 2;
  GameData_220c398 = (__int64)&GameData_1a91828;
  GameData_220c3a0 = (__int64)game_script_hub_SetLockLightReloadOutSide;
  GameData_220c048 = (__int64)"as_u64 GetObserveDayIdx()";
  GameData_220c050 = (__int64)&GameData_220bfd8;
  GameData_220c038 = 0;
  GameData_220c028 = 0;
  GameData_220c030 = 0;
  GameData_220c040 = 2;
  GameData_220c358 = (__int64)&GameData_1a91828;
  GameData_220c360 = (__int64)game_script_hub_ReloadLightweight;
  GameData_220c0b8 = 0;
  GameData_220c0a8 = 0;
  GameData_220c0b0 = 0;
  GameData_220c0c0 = 2;
  GameData_220c348 = (__int64)"void ReserveJumpNextTimeline()";
  GameData_220c350 = (__int64)&GameData_220c2d8;
  GameData_220c308 = (__int64)"void ImmidiateJumpNextHubTimeline()";
  GameData_220c310 = (__int64)&GameData_220c298;
  GameData_220c2e8 = 0;
  GameData_220c2f0 = 0;
  GameData_220c300 = 2;
  GameData_220c2f8 = 0;
  GameData_220c2c8 =
      (__int64)"void PushPrePlaySeqEvent(const string& scriptName)";
  GameData_220c2d0 = (__int64)&GameData_220c258;
  GameData_220c278 = 0;
  GameData_220c268 = 0;
  GameData_220c270 = 0;
  GameData_220c280 = 2;
  GameData_220c178 = 0;
  GameData_220c168 = 0;
  GameData_220c170 = 0;
  GameData_220c180 = 2;
  GameData_220c2d8 = (__int64)&GameData_1a91828;
  GameData_220c2e0 = (__int64)game_script_hub_ImmidiateJumpNextHubTimeline;
  GameData_220c298 = (__int64)&GameData_1a91828;
  GameData_220c2a0 = (__int64)hub_PushPrePlaySeqEvent;
  GameData_220c1b8 = 0;
  GameData_220c1a8 = 0;
  GameData_220c1b0 = 0;
  GameData_220c1c0 = 2;
  GameData_220c288 = (__int64)"bool IsAlreadyRead(const string& label)";
  GameData_220c290 = (__int64)&GameData_220c218;
  GameData_220c1c8 = (__int64)"void JoinPersonCreate(const string& pid)";
  GameData_220c1d0 = (__int64)&GameData_220c158;
  GameData_220c228 = 0;
  GameData_220c230 = 0;
  GameData_220c240 = 2;
  GameData_220c238 = 0;
  GameData_220c258 = (__int64)&GameData_1a91828;
  GameData_220c260 = (__int64)hub_IsAlreadyRead;
  GameData_220c248 =
      (__int64)"void EntryFlag(const string& flagName, bool isActive)";
  GameData_220c250 = (__int64)&GameData_220c1d8;
  GameData_220c200 = 2;
  GameData_220c1f8 = 0;
  GameData_220c1e8 = 0;
  GameData_220c1f0 = 0;
  GameData_220c208 = (__int64)"bool IsActiveFlag(const string& flagName)";
  GameData_220c210 = (__int64)&GameData_220c198;
  GameData_220c218 = (__int64)&GameData_1a91828;
  GameData_220c220 = (__int64)game_script_hub_EntryFlag;
  GameData_220c1d8 = (__int64)&GameData_1a91828;
  GameData_220c1e0 = (__int64)game_script_hub_IsActiveFlag;
  GameData_220c188 = (__int64)"void JoinPersonScout(const string& pid)";
  GameData_220c190 = (__int64)&GameData_220c118;
  GameData_220c198 = (__int64)&GameData_1a91828;
  GameData_220c1a0 = (__int64)hub_JoinPersonCreate;
  GameData_220c138 = 0;
  GameData_220c128 = 0;
  GameData_220c130 = 0;
  GameData_220c140 = 2;
  GameData_220c158 = (__int64)&GameData_1a91828;
  GameData_220c160 = (__int64)GameRoutine_cc1700;
  GameData_220c0f8 = 0;
  GameData_220c0e8 = 0;
  GameData_220c0f0 = 0;
  GameData_220c100 = 2;
  GameData_220c118 = (__int64)&GameData_1a91828;
  GameData_220c120 = (__int64)game_script_hub_GetAreaFullName;
  GameData_220c148 = (__int64)"string GetAreaFullName()";
  GameData_220c150 = (__int64)&GameData_220c0d8;
  GameData_220c0d8 = (__int64)&GameData_1a91828;
  GameData_220c0e0 = (__int64)game_script_hub_GetAreaName;
  GameData_220c108 = (__int64)"string GetAreaName()";
  GameData_220c110 = (__int64)&GameData_220c098;
  GameData_220c098 = (__int64)&GameData_1a91828;
  GameData_220c0a0 = (__int64)game_script_hub_GetMapName;
  GameData_220c078 = 0;
  GameData_220c068 = 0;
  GameData_220c070 = 0;
  GameData_220c080 = 2;
  GameData_220c0c8 = (__int64)"string GetMapName()";
  GameData_220c0d0 = (__int64)&GameData_220c058;
  GameData_220c058 = (__int64)&GameData_1a91828;
  GameData_220c060 = (__int64)game_script_hub_GetObserveCycleIdx;
  GameData_220c088 = (__int64)"as_u64 GetObserveCycleIdx()";
  GameData_220c090 = (__int64)&GameData_220c018;
  GameData_220c018 = (__int64)&GameData_1a91828;
  GameData_220c020 = (__int64)game_script_hub_GetObserveDayIdx;
  GameData_220bf98 = (__int64)&GameData_1a91828;
  GameData_220bfa0 = (__int64)hub_IsJoinPid;
  GameData_220bfd8 = (__int64)&GameData_1a91828;
  GameData_220bfe0 = (__int64)hub_IsPlacementPattern;
  GameData_220bfc8 = (__int64)"bool IsJoinPid(const string& pid)";
  GameData_220bfd0 = (__int64)&GameData_220bf58;
  GameData_220bf78 = 0;
  GameData_220bf68 = 0;
  GameData_220bf70 = 0;
  GameData_220bf80 = 2;
  GameData_220bf58 = (__int64)&GameData_1a91828;
  GameData_220bf60 = (__int64)game_script_hub_IsEnableSituation;
  GameData_220bf38 = 0;
  GameData_220bf28 = 0;
  GameData_220bf30 = 0;
  GameData_220bf40 = 2;
  GameData_220bf88 = (__int64)"bool IsEnableSituation(const string& pid)";
  GameData_220bf90 = (__int64)&GameData_220bf18;
  GameData_220bf18 = (__int64)&GameData_1a91828;
  GameData_220bf20 = (__int64)GameRoutine_cc0d30;
  GameData_220bee8 = 0;
  GameData_220bef0 = 0;
  GameData_220bf00 = 2;
  GameData_220bef8 = 0;
  GameData_220bf48 = (__int64)"void SkipEscape()";
  GameData_220bf50 = (__int64)&GameData_220bed8;
  GameData_220bec8 = (__int64)"void SetEnableEventSkipLayer(bool isEnable)";
  GameData_220bed0 = (__int64)&GameData_220be58;
  GameData_220bf08 = (__int64)"bool IsGameSkip()";
  GameData_220bf10 = (__int64)&GameData_220be98;
  GameData_220bed8 = (__int64)&GameData_1a91828;
  GameData_220bee0 = (__int64)game_script_hub_IsGameSkip;
  GameData_220ce78 = 0;
  GameData_220ce68 = 0;
  GameData_220ce70 = 0;
  GameData_220ce80 = 2;
  GameData_220ce18 = (__int64)&GameData_1a91828;
  GameData_220ce20 = (__int64)hub_IsAcceptEndDay;
  GameData_220ce38 = 0;
  GameData_220ce28 = 0;
  GameData_220ce30 = 0;
  GameData_220ce40 = 2;
  GameData_220ce58 = (__int64)&GameData_1a91828;
  GameData_220ce60 = (__int64)GameRoutine_cc7620;
  GameData_220ce48 = (__int64)"bool IsAcceptEndDay(string ssid)";
  GameData_220ce50 = (__int64)&GameData_220cdd8;
  GameData_220ceb8 = 0;
  GameData_220cea8 = 0;
  GameData_220ceb0 = 0;
  GameData_220cec0 = 2;
  GameData_220ce88 = (__int64)"void SideStoryInfo(string ssid)";
  GameData_220ce90 = (__int64)&GameData_220ce18;
  GameData_220ce98 = (__int64)&GameData_1a91828;
  GameData_220cea0 = (__int64)hub_SideStoryAccept;
  GameData_220cec8 = (__int64)"void SideStoryAccept(string ssid)";
  GameData_220ced0 = (__int64)&GameData_220ce58;
  GameData_220ced8 = (__int64)&GameData_1a91828;
  GameData_220cee0 = (__int64)hub_SideStoryBeginBmap;
  GameData_220cef8 = 0;
  GameData_220cee8 = 0;
  GameData_220cef0 = 0;
  GameData_220cf00 = 2;
  GameData_220cf08 = (__int64)"void SideStoryBeginBmap(string ssid)";
  GameData_220cf10 = (__int64)&GameData_220ce98;
  GameData_220cf18 = (__int64)&GameData_1a91828;
  GameData_220cf20 = (__int64)hub_SideStoryClear;
  GameData_220cf48 = (__int64)"void SideStoryClear(string ssid)";
  GameData_220cf50 = (__int64)&GameData_220ced8;
  GameData_220cf38 = 0;
  GameData_220cf28 = 0;
  GameData_220cf30 = 0;
  GameData_220cf40 = 2;
  GameData_220cf58 = (__int64)&GameData_1a91828;
  GameData_220cf60 = (__int64)hub_PlaySE;
  GameData_220cf78 = 0;
  GameData_220cf68 = 0;
  GameData_220cf70 = 0;
  GameData_220cf80 = 2;
  GameData_220cf88 = (__int64)"void PlaySE(string label)";
  GameData_220cf90 = (__int64)&GameData_220cf18;
  GameData_220cf98 = (__int64)&GameData_1a91828;
  GameData_220cfa0 = (__int64)hub_PlaySE_cc8740;
  GameData_220cfc8 =
      (__int64)"void PlaySE(string label, const math::Vec3& pos)";
  GameData_220cfd0 = (__int64)&GameData_220cf58;
  GameData_220cfb8 = 0;
  GameData_220cfa8 = 0;
  GameData_220cfb0 = 0;
  GameData_220cfc0 = 2;
  GameData_220d008 = (__int64)"void PlaySE(string label, float volume)";
  GameData_220d010 = (__int64)&GameData_220cf98;
  GameData_220cfd8 = (__int64)&GameData_1a91828;
  GameData_220cfe0 = (__int64)hub_PlaySE_cc8950;
  GameData_220cff8 = 0;
  GameData_220cfe8 = 0;
  GameData_220cff0 = 0;
  GameData_220d000 = 2;
  GameData_220d038 = 0;
  GameData_220d028 = 0;
  GameData_220d030 = 0;
  GameData_220d040 = 2;
  GameData_220d018 = (__int64)&GameData_1a91828;
  GameData_220d020 = (__int64)game_script_hub_SetEnableGameFadeVolume;
  GameData_220d048 = (__int64)"void SetEnableGameFadeVolume(bool isEnable)";
  GameData_220d050 = (__int64)&GameData_220cfd8;
  GameData_220d058 = (__int64)&GameData_1a91828;
  GameData_220d060 = (__int64)hub_SetOverrideEncountFieldName;
  GameData_220d078 = 0;
  GameData_220d068 = 0;
  GameData_220d070 = 0;
  GameData_220d080 = 2;
  GameData_220d088 = (__int64)"void SetOverrideEncountFieldName(string label)";
  GameData_220d090 = (__int64)&GameData_220d018;
  GameData_220d098 = (__int64)&GameData_1a91828;
  GameData_220d0a0 = (__int64)hub_PlayEffect2D;
  GameData_220d0c8 = (__int64)"void PlayEffect2D(string label)";
  GameData_220d0d0 = (__int64)&GameData_220d058;
  GameData_220d0b8 = 0;
  GameData_220d0a8 = 0;
  GameData_220d0b0 = 0;
  GameData_220d0c0 = 2;
  GameData_220d0d8 = (__int64)&GameData_1a91828;
  GameData_220d0e0 = (__int64)hub_PlayEffect;
  GameData_220d0f8 = 0;
  GameData_220d0e8 = 0;
  GameData_220d0f0 = 0;
  GameData_220d100 = 2;
  GameData_220d108 = (__int64)"void PlayEffect(string label, const math::Vec3& "
                              "pos, float eftScale = 1.0f)";
  GameData_220d110 = (__int64)&GameData_220d098;
  GameData_220d118 = (__int64)&GameData_1a91828;
  GameData_220d120 = (__int64)hub_PlayEffectBindPlayer;
  GameData_220d148 =
      (__int64)"void PlayEffectBindPlayer(string label, float eftScale)";
  GameData_220d150 = (__int64)&GameData_220d0d8;
  GameData_220d138 = 0;
  GameData_220d128 = 0;
  GameData_220d130 = 0;
  GameData_220d140 = 2;
  GameData_220d188 =
      (__int64)"void PlayEffectLoop(string loopLabel, string label, const "
               "math::Vec3& pos, float eftScale = 1.0f)";
  GameData_220d190 = (__int64)&GameData_220d118;
  GameData_220d158 = (__int64)&GameData_1a91828;
  GameData_220d160 = (__int64)hub_PlayEffectLoop;
  GameData_220d178 = 0;
  GameData_220d168 = 0;
  GameData_220d170 = 0;
  GameData_220d180 = 2;
  GameData_220d1b8 = 0;
  GameData_220d1a8 = 0;
  GameData_220d1b0 = 0;
  GameData_220d1c0 = 2;
  GameData_220d198 = (__int64)&GameData_1a91828;
  GameData_220d1a0 = (__int64)hub_StopEffectLoop;
  GameData_220d1c8 = (__int64)"void StopEffectLoop(string loopLabel)";
  GameData_220d1d0 = (__int64)&GameData_220d158;
  GameData_220d1d8 = (__int64)&GameData_1a91828;
  GameData_220d1e0 = (__int64)game_script_hub_IsCompletedMap;
  GameData_220d1f8 = 0;
  GameData_220d1e8 = 0;
  GameData_220d1f0 = 0;
  GameData_220d200 = 2;
  GameData_220d208 = (__int64)"bool IsCompletedMap()";
  GameData_220d210 = (__int64)&GameData_220d198;
  GameData_220d218 = (__int64)&GameData_1a91828;
  GameData_220d220 = (__int64)GameRoutine_cc9d20;
  GameData_220d248 = (__int64)"void TryPushWorldPrepare()";
  GameData_220d250 = (__int64)&GameData_220d1d8;
  GameData_220d238 = 0;
  GameData_220d228 = 0;
  GameData_220d230 = 0;
  GameData_220d240 = 2;
  GameData_220d258 = (__int64)&GameData_1a91828;
  GameData_220d260 = (__int64)hub_TryPopWorldPost;
  GameData_220d278 = 0;
  GameData_220d268 = 0;
  GameData_220d270 = 0;
  GameData_220d280 = 2;
  GameData_220d288 = (__int64)"void TryPopWorldPost()";
  GameData_220d290 = (__int64)&GameData_220d218;
  GameData_220d298 = (__int64)&GameData_1a91828;
  GameData_220d2a0 = (__int64)GameRoutine_cca2e0;
  GameData_220d2c8 = (__int64)"void RunTalkSelectQuestMenu(string sqid)";
  GameData_220d2d0 = (__int64)&GameData_220d258;
  GameData_220d2b8 = 0;
  GameData_220d2a8 = 0;
  GameData_220d2b0 = 0;
  GameData_220d2c0 = 2;
  GameData_220d308 = (__int64)"void RunTalkSelectQuestMenuAccept(string sqid)";
  GameData_220d310 = (__int64)&GameData_220d298;
  GameData_220d2d8 = (__int64)&GameData_1a91828;
  GameData_220d2e0 = (__int64)GameRoutine_cca620;
  GameData_220d2f8 = 0;
  GameData_220d2e8 = 0;
  GameData_220d2f0 = 0;
  GameData_220d300 = 2;
  GameData_220d338 = 0;
  GameData_220d328 = 0;
  GameData_220d330 = 0;
  GameData_220d340 = 2;
  GameData_220d318 = (__int64)&GameData_1a91828;
  GameData_220d320 = (__int64)hub_RunQuestDone;
  GameData_220d348 = (__int64)"void RunQuestDone(string sqid)";
  GameData_220d350 = (__int64)&GameData_220d2d8;
  GameData_220d358 = (__int64)&GameData_1a91828;
  GameData_220d360 = (__int64)HubNatives_ccaad0;
  GameData_220d378 = 0;
  GameData_220d368 = 0;
  GameData_220d370 = 0;
  GameData_220d380 = 2;
  GameData_220d388 = (__int64)"int GetTransporterCount(string iid)";
  GameData_220d390 = (__int64)&GameData_220d318;
  GameData_220d398 = (__int64)&GameData_1a91828;
  GameData_220d3a0 = (__int64)hub_UseTransporterCount;
  GameData_220d3c8 = (__int64)"void UseTransporterCount(string iid, int count)";
  GameData_220d3d0 = (__int64)&GameData_220d358;
  GameData_220d3b8 = 0;
  GameData_220d3a8 = 0;
  GameData_220d3b0 = 0;
  GameData_220d3c0 = 2;
  GameData_220d3d8 = (__int64)&GameData_1a91828;
  GameData_220d3e0 = (__int64)hub_RunDngBunquet;
  GameData_220d3f8 = 0;
  GameData_220d3e8 = 0;
  GameData_220d3f0 = 0;
  GameData_220d400 = 2;
  GameData_220d408 = (__int64)"void RunDngBunquet()";
  GameData_220d410 = (__int64)&GameData_220d398;
  GameData_220d418 = (__int64)&GameData_1a91828;
  GameData_220d420 = (__int64)HubNatives_ccaff0;
  GameData_220d448 = (__int64)"void WaitMainWorld()";
  GameData_220d450 = (__int64)&GameData_220d3d8;
  GameData_220d438 = 0;
  GameData_220d428 = 0;
  GameData_220d430 = 0;
  GameData_220d440 = 2;
  GameData_220d488 = (__int64)"void WaitMainWorldOnReload()";
  GameData_220d490 = (__int64)&GameData_220d418;
  GameData_220d458 = (__int64)&GameData_1a91828;
  GameData_220d460 = (__int64)HubNatives_ccb180;
  GameData_220d478 = 0;
  GameData_220d468 = 0;
  GameData_220d470 = 0;
  GameData_220d480 = 2;
  GameData_220d4b8 = 0;
  GameData_220d4a8 = 0;
  GameData_220d4b0 = 0;
  GameData_220d4c0 = 2;
  GameData_220d498 = (__int64)&GameData_1a91828;
  GameData_220d4a0 = (__int64)HubNatives_ccb310;
  GameData_220d4c8 = (__int64)"void TryOpenFastTravelTag(string tag)";
  GameData_220d4d0 = (__int64)&GameData_220d458;
  GameData_220d4d8 = (__int64)&GameData_1a91828;
  GameData_220d4e0 = (__int64)HubNatives_ccb460;
  GameData_220d4f8 = 0;
  GameData_220d4e8 = 0;
  GameData_220d4f0 = 0;
  GameData_220d500 = 2;
  GameData_220d508 =
      (__int64)"void PushSituationIgnorePerson(const string& pid)";
  GameData_220d510 = (__int64)&GameData_220d498;
  GameData_220d518 = (__int64)&GameData_1a91828;
  GameData_220d520 = (__int64)hub_PushMapHideTag;
  GameData_220d548 = (__int64)"void PushMapHideTag(const string& tag)";
  GameData_220d550 = (__int64)&GameData_220d4d8;
  GameData_220d538 = 0;
  GameData_220d528 = 0;
  GameData_220d530 = 0;
  GameData_220d540 = 2;
  GameData_220d558 = (__int64)&GameData_1a91828;
  GameData_220d560 = (__int64)game_script_hub_SetTalkSeq_EnableBindFinal;
  GameData_220d578 = 0;
  GameData_220d568 = 0;
  GameData_220d570 = 0;
  GameData_220d580 = 2;
  GameData_220d588 =
      (__int64)"void SetTalkSeq_EnableBindFinal(const bool isEnable)";
  GameData_220d590 = (__int64)&GameData_220d518;
  GameData_220d5c8 = (__int64)"bool IsTalkSeq_EnableBindFinal()";
  GameData_220d5d0 = (__int64)&GameData_220d558;
  GameData_220d598 = (__int64)&GameData_1a91828;
  GameData_220d5a0 = (__int64)game_script_hub_IsTalkSeq_EnableBindFinal;
  GameData_220d5b8 = 0;
  GameData_220d5a8 = 0;
  GameData_220d5b0 = 0;
  GameData_220d5c0 = 2;
  *v0 = (__int64)&GameData_220d5d8;
  GameData_220d5f8 = 0;
  GameData_220d5e8 = 0;
  GameData_220d5f0 = 0;
  GameData_220d600 = 2;
  GameData_220d5d8 = (__int64)&GameData_1a91828;
  GameData_220d5e0 = (__int64)game_script_hub_GetMapLoadVariationId;
  GameData_220d608 = (__int64)"string GetMapLoadVariationId()";
  GameData_220d610 = (__int64)&GameData_220d598;
  return game_script_hub_GetAreaFullName;
}

void game_cfc7c0(__int64 a1, float* a2, char a3, float a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  int v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  int v16;
  __int64 v17;
  _BOOL4 v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  bool v24;
  float v25;
  float32x4_t v26;
  float32x4_t v27;
  float v28;
  int v29;
  __int64 v30;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  int v44;
  unsigned int v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  bool v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float32x4_t v65;
  float v66;
  int v67;
  int v68;
  __int64 v69;
  unsigned __int32 v70;
  __int64 v71;
  float32x4_t v72;
  __int64 v73;
  __int64 v74;
  float32x4_t v75;
  char v76;
  float32x4_t v77;
  float* v78;
  float32x4_t v79;
  float v80;
  float v81;
  float v82;
  float v83;
  int v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  int v90;
  float v91;
  float v92;
  float v93;
  int v94;
  float v95;
  int v96;
  __int64 v97;
  float v98;
  float v99;
  __int64 v100;
  float* v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  int v107;
  float v108;
  int v109;
  float v110;
  float v111;
  float v112;
  int v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  __int16 v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  int v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int16 v137;
  unsigned __int8 v138;
  float v139;
  int v140;
  float v141;
  unsigned int v142;
  int v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  __int64 v163;
  int v164;
  __int64 v165;
  int v166;
  float32x4_t v167;
  struct {
    float v168[20];
    char v169;
  } v168_;

  if ((*(_BYTE*)(a1 + 59) & 1) != 0) {
    return;
  }
  *(float*)(a1 + 8) = a4;
  v6 = GameData_212d310;
  if ((a3 & 1) == 0 && (*(_BYTE*)(a1 + 60) & 1) == 0) {
    if (*(_BYTE*)(a1 + 133) != 1) {
      goto LABEL_11;
    }
    if (*(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1 &&
        (v7 = *(_QWORD*)(a1 + 16), (v8 = *(_QWORD*)(v7 + 24)) != 0) &&
        (v9 = *(_QWORD*)(v8 + 168)) != 0 && *(_QWORD*)(v9 + 264) != 0 &&
        *(_DWORD*)(v7 + 12) == 0) {
      if (*(_BYTE*)(a1 + 132) == 1) {
      LABEL_11:
        if ((*(_BYTE*)(a1 + 135) != 1 ||
             *(_BYTE*)(a1 + 134) ==
                 ((*(_BYTE*)(a1 + 56) | *(_BYTE*)(a1 + 57)) & 1)) &&
            (*(_BYTE*)(a1 + 96) & 1) != 0) {
          goto LABEL_27;
        }
      }
    }
    else if (*(_BYTE*)(a1 + 132) == 0) {
      goto LABEL_11;
    }
  }
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 61) = 1;
  *(_QWORD*)(a1 + 84) = 1065353216;
  if (*(_BYTE*)(a1 + 96) == 1) {
    *(_BYTE*)(a1 + 96) = 0;
  }
  *(_BYTE*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 108) = 0;
  *(_DWORD*)(a1 + 100) = -1027080192;
  if (*(_BYTE*)(a1 + 120) == 1) {
    *(_BYTE*)(a1 + 120) = 0;
  }
  if (*(_BYTE*)(a1 + 128) == 1) {
    *(_BYTE*)(a1 + 128) = 0;
  }
  if (*(_BYTE*)(a1 + 133) == 1) {
    *(_BYTE*)(a1 + 133) = 0;
  }
  if (*(_BYTE*)(a1 + 135) == 1) {
    *(_BYTE*)(a1 + 135) = 0;
  }
  if (*(_BYTE*)(a1 + 137) == 1) {
    *(_BYTE*)(a1 + 137) = 0;
  }
  *(_DWORD*)(a1 + 140) = 0;
  *(_WORD*)(a1 + 144) = 256;
LABEL_27:
  v10 = *a2;
  v11 = *(unsigned __int8*)(a1 + 120);
  v12 = 0x1.0000000000000p+0f;
  *(float*)(a1 + 32) = *a2;
  v13 = a2[1];
  *(float*)(a1 + 36) = v13;
  if (v11 == 1) {
    v12 = sqrtf((float)(PSEUDO_UNFUSED((float)(*(float*)(a1 + 116) - v13) *
                                       (float)(*(float*)(a1 + 116) - v13))) +
                (float)((float)(*(float*)(a1 + 112) - v10) *
                        (float)(*(float*)(a1 + 112) - v10))) +
          0x1.0000000000000p+0f;
  }
  v14 = *(_QWORD*)(a1 + 16);
  *(float*)(a1 + 48) = v12;
  v15 = fmaxf((float)(v12 + -0x1.0000000000000p+0f) * 0x1.0000000000000p-1f,
              0x1.99999a0000000p-3f);
  v16 = *(unsigned __int8*)(a1 + 61);
  if (*(_DWORD*)(v14 + 12) != 1) {
    v15 = v12;
  }
  *(float*)(a1 + 52) = v15;
  if (v16 == 1) {
    v12 = fmaxf(v12, 0x1.8000000000000p+1f);
    *(float*)(a1 + 48) = v12;
    *(float*)(a1 + 52) = fmaxf(v15, 0x1.8000000000000p+1f);
  }
  if (v11 != 0 &&
      (float)((float)(PSEUDO_UNFUSED((float)(v13 - *(float*)(a1 + 116)) *
                                     (float)(v13 - *(float*)(a1 + 116)))) +
              (float)((float)(v10 - *(float*)(a1 + 112)) *
                      (float)(v10 - *(float*)(a1 + 112)))) <=
          0x1.5798ec0000000p-27f) {
    goto LABEL_143;
  }
  v17 = *(_QWORD*)(v14 + 24);
  v18 = v17 != 0 &&
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v17 + 16) + 8LL) + 387LL) & 0x40) != 0;
  v19 = *(_DWORD*)(v14 + 12);
  if (v19 != 1) {
    v20 = 0x0.0p+0f;
    v21 = 0x0.0p+0f;
    v22 = 0x0.0p+0f;
    if (v19 == 0) {
      v23 = *(float*)(a1 + 40) + v12;
      v24 = v23 > 0x1.9000000000000p+7f || *(_DWORD*)(*(_QWORD*)v6 + 8LL) == 1;
      v25 = v24 ? 0x1.9000000000000p+7f : v23;
      LANES128(v26).n128_u64[0] = *(_QWORD*)(a1 + 32);
      v139 = v25;
      LANES128(v27).n128_u64[0] =
          __PAIR64__(LODWORD(v25), LANES128(v26).n128_u32[0]);
      LANES128(v27).n128_u64[1] = LANES128(v26).n128_u32[1];
      v162 = v27;
      LANES128(v26).n128_u32[1] = -1027080192;
      LANES128(v26).n128_u64[1] = LANES128(v27).n128_u32[2];
      v167 = v26;
      game_cfdb00((void*)((__int64)v168_.v168), a1, &v162, &v167, v18);
      v22 = v168_.v168[1];
      v21 = v139;
      v20 = (LOBYTE(v168_.v168[3]) & 1) != 0 ? v168_.v168[2] : v168_.v168[1];
      if ((LOBYTE(v168_.v168[0]) & 1) != 0) {
        goto LABEL_129;
      }
    }
    goto LABEL_128;
  }
  v28 = *(float*)(a1 + 40) + v12;
  v29 = 1128792064;
  v30 = *(_QWORD*)v6;
  if (v28 <= 0x1.9000000000000p+7f && *(_DWORD*)(*(_QWORD*)v6 + 8LL) != 1) {
    *(float*)&v29 = v28;
  }
  LANES128(v32).n128_u64[0] = *(_QWORD*)(a1 + 32);
  v140 = v29;
  LANES128(v33).n128_u64[0] = __PAIR64__(v29, LANES128(v32).n128_u32[0]);
  LANES128(v34).n128_u64[0] = LANES128(v32).n128_u32[0] | 0xC2C8000000000000LL;
  v35 = LANES128(v32).n128_u32[1];
  LANES128(v33).n128_u64[1] = LANES128(v32).n128_u32[1];
  v160 = v33;
  LANES128(v34).n128_u64[1] = LANES128(v32).n128_u32[1];
  v159 = v34;
  if (v17 == 0 || *(_DWORD*)(v30 + 8) != 1 ||
      (v36 = *(_QWORD*)(v17 + 168)) == 0 ||
      (v37 = *(_QWORD*)(v36 + 264)) == 0 || *(_DWORD*)(v14 + 12) != 0) {
    v38 = *(_DWORD*)(v14 + 12);
    v39 = 2;
    if (((*(_BYTE*)(a1 + 56) | *(_BYTE*)(a1 + 57)) & 1) != 0) {
      v39 = 0;
    }
    if (v38 == 1) {
      v40 = 769;
    }
    else {
      v40 = 1;
    }
    collision_670c60((void*)((__int64)v168_.v168), &v160, &v159, v40 | v39);
    if ((v168_.v169 & 1) != 0) {
      v144 = v168_.v168[1];
      goto LABEL_68;
    }
  LABEL_127:
    v22 = LANES128(v159).n128_f32[1];
    LODWORD(v21) = v140;
    v20 = LANES128(v159).n128_f32[1] + -0x1.0000000000000p-1f;
  LABEL_128:
    if (*(_DWORD*)(*(_QWORD*)v6 + 8LL) == 1) {
      goto LABEL_129;
    }
    v76 = 0;
    *(_BYTE*)(a1 + 104) = 0;
    goto LABEL_142;
  }
  LANES128(v75).n128_u64[0] = LANES128(v32).n128_u32[0] | 0x4348000000000000LL;
  LANES128(v32).n128_u32[1] = -1027080192;
  LANES128(v75).n128_u64[1] = v35;
  LANES128(v32).n128_u64[1] = v35;
  v162 = v75;
  v167 = v32;
  GameRoutine_1085a10((void*)(v168_.v168), v37 + 160, &v162, &v167, 0);
  v144 = v168_.v168[1];
  if (v168_.v168[1] == -0x1.9000000000000p+6f) {
    goto LABEL_127;
  }
LABEL_68:
  v41 = 15;
  v42 = 8;
  v43 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL);
  if (v43 != 0) {
    if ((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v43 + 16) + 8LL) + 384LL) &
         0x40000000LL) != 0) {
      v42 = 8;
    }
    else {
      v42 = 4;
    }
    if ((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v43 + 16) + 8LL) + 384LL) &
         0x40000000LL) != 0) {
      v41 = 15;
    }
    else {
      v41 = 4;
    }
  }
  v44 = 0;
  v22 = v144;
  v142 = v41;
  v156 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v157 = *((float*)GameData_212c188 + 1);
  v151 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v152 = *((float*)GameData_212c190 + 1);
  v141 = (float)v41;
  v154 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v155 = -*(float*)GameData_212c188;
  v153 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v149 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v150 = -*(float*)GameData_212c190;
  v148 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 8);
  while (2) {
    v45 = 0;
    v143 = v44 + 1;
    v46 = (float)(unsigned int)(v44 + 1) / v141;
    v47 = fmaxf(v46, 0x0.0p+0f);
    v48 = 0x1.0000000000000p+0f - v46;
    v49 = (float)(fminf(v47, 0x1.0000000000000p+0f) * 0x1.2000000000000p+1f) +
          0x0.0p+0f;
    v50 = (float)(PSEUDO_UNFUSED(v48 * 0x1.921fb60000000p+1f)) +
          (float)(roundf((float)(v48 * 0x1.921fb60000000p+1f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    v51 = 0x1.921fb60000000p+1f - v50;
    v52 = -0x1.921fb60000000p+1f - v50;
    if (v50 < -0x1.921fb60000000p+0f) {
      v53 = -0x1.0000000000000p+0f;
    }
    else {
      v53 = 0x1.0000000000000p+0f;
    }
    if (v50 >= -0x1.921fb60000000p+0f) {
      v52 = v50;
    }
    v54 = v50 <= 0x1.921fb60000000p+0f;
    if (v50 <= 0x1.921fb60000000p+0f) {
      v55 = v53;
    }
    else {
      v55 = -0x1.0000000000000p+0f;
    }
    if (!v54) {
      v52 = v51;
    }
    v56 =
        v55 *
        (float)((float)((float)(v153 +
                                (float)((float)(v156 +
                                                (float)((float)(v154 +
                                                                (float)((float)(v157 +
                                                                                (float)(v155 *
                                                                                        (float)(v52 *
                                                                                                v52))) *
                                                                        (float)(v52 *
                                                                                v52))) *
                                                        (float)(v52 * v52))) *
                                        (float)(v52 * v52))) *
                        (float)(v52 * v52)) +
                0x1.0000000000000p+0f);
    v57 = fabsf(v56) * 0x1.0000000000000p-1f;
    if (v56 >= 0x0.0p+0f) {
      v58 = -0x1.0000000000000p+0f;
    }
    else {
      v58 = 0x1.0000000000000p+0f;
    }
    v145 = fminf(fmaxf((float)(PSEUDO_UNFUSED(
                           (float)((float)(v57 * v58) + 0x1.0000000000000p-1f) *
                           0x1.99999a0000000p-3f)) +
                           (float)(v48 * 0x1.99999a0000000p-1f),
                       0x0.0p+0f),
                 0x1.0000000000000p+0f);
    do {
      v59 = (float)(PSEUDO_UNFUSED((float)((float)v45 / (float)v42) *
                                   0x1.921fb60000000p+2f)) +
            (float)(roundf((float)((float)((float)v45 / (float)v42) *
                                   0x1.921fb60000000p+2f) *
                           0x1.45f3060000000p-3f) *
                    -0x1.921fb60000000p+2f);
      if (v59 < -0x1.921fb60000000p+0f) {
        v60 = -0x1.0000000000000p+0f;
      }
      else {
        v60 = 0x1.0000000000000p+0f;
      }
      if (v59 < -0x1.921fb60000000p+0f) {
        v61 = -0x1.921fb60000000p+1f - v59;
      }
      else {
        v61 = v59;
      }
      if (v59 > 0x1.921fb60000000p+0f) {
        v62 = -0x1.0000000000000p+0f;
      }
      else {
        v62 = v60;
      }
      if (v59 > 0x1.921fb60000000p+0f) {
        v63 = 0x1.921fb60000000p+1f - v59;
      }
      else {
        v63 = v61;
      }
      if (v59 <= 0x1.921fb60000000p+0f) {
        if (v59 >= -0x1.921fb60000000p+0f) {
          goto LABEL_109;
        }
        v64 = -0x1.921fb60000000p+1f;
      }
      else {
        v64 = 0x1.921fb60000000p+1f;
      }
      v59 = v64 - v59;
    LABEL_109:
      v166 = 0;
      v162 = COERCE_AS(float32x4_t, 0x4020000040200000uLL);
      v163 = 0x40A0000040A00000LL;
      LANES128(v65).n128_f32[0] =
          (float)(PSEUDO_UNFUSED(
              v49 *
              (float)(v62 *
                      (float)((float)((float)(v153 +
                                              (float)((float)(v156 +
                                                              (float)((float)(v154 +
                                                                              (float)((float)(v157 +
                                                                                              (float)(v155 *
                                                                                                      (float)(v63 *
                                                                                                              v63))) *
                                                                                      (float)(v63 *
                                                                                              v63))) *
                                                                      (float)(v63 *
                                                                              v63))) *
                                                      (float)(v63 * v63))) *
                                      (float)(v63 * v63)) +
                              0x1.0000000000000p+0f)))) +
          LANES128(v160).n128_f32[0];
      v66 =
          LANES128(v160).n128_f32[2] +
          (float)(PSEUDO_UNFUSED(
              v49 *
              (float)(v59 *
                      (float)((float)((float)(v148 +
                                              (float)((float)(v151 +
                                                              (float)((float)(v149 +
                                                                              (float)((float)(v152 +
                                                                                              (float)(v150 *
                                                                                                      (float)(v59 *
                                                                                                              v59))) *
                                                                                      (float)(v59 *
                                                                                              v59))) *
                                                                      (float)(v59 *
                                                                              v59))) *
                                                      (float)(v59 * v59))) *
                                      (float)(v59 * v59)) +
                              0x1.0000000000000p+0f))));
      v67 = (int)(float)((float)(LANES128(v65).n128_f32[0] +
                                 0x1.4000000000000p+10f) *
                         0x1.99999a0000000p-3f);
      v68 = (int)(float)((float)(v66 + 0x1.4000000000000p+10f) *
                         0x1.99999a0000000p-3f);
      v164 = v67 - 256;
      v165 = (unsigned int)(v68 - 256);
      if (((v67 - 256) | (v68 - 256)) != 0) {
        HIDWORD(v165) = v67 - 256;
        v166 = v68 - 256;
        LANES128(v162).n128_f32[0] =
            (float)((float)((float)v67 * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
        LANES128(v162).n128_f32[1] =
            (float)((float)((float)v68 * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
        LANES128(v162).n128_f32[2] =
            LANES128(v162).n128_f32[0] + -0x1.4000000000000p+1f;
        LANES128(v162).n128_f32[3] =
            LANES128(v162).n128_f32[1] + -0x1.4000000000000p+1f;
        *(float*)&v163 = LANES128(v162).n128_f32[0] + 0x1.4000000000000p+1f;
        *((float*)&v163 + 1) =
            LANES128(v162).n128_f32[1] + 0x1.4000000000000p+1f;
      }
      v69 = *(_QWORD*)(a1 + 16);
      v70 = LANES128(v160).n128_u32[1];
      v71 = *(_QWORD*)(v69 + 16);
      if (v71 != 0 && *(_BYTE*)(v71 + 12) == 1) {
        v146 = v66;
        v147 =
            (float)(PSEUDO_UNFUSED(
                v49 *
                (float)(v62 *
                        (float)((float)((float)(v153 +
                                                (float)((float)(v156 +
                                                                (float)((float)(v154 +
                                                                                (float)((float)(v157 +
                                                                                                (float)(v155 *
                                                                                                        (float)(v63 *
                                                                                                                v63))) *
                                                                                        (float)(v63 *
                                                                                                v63))) *
                                                                        (float)(v63 *
                                                                                v63))) *
                                                        (float)(v63 * v63))) *
                                        (float)(v63 * v63)) +
                                0x1.0000000000000p+0f)))) +
            LANES128(v160).n128_f32[0];
        if ((GameRoutine_d740c0((__int64)&v162, (int*)v71) & 1) == 0) {
          goto LABEL_91;
        }
        v70 = LANES128(v160).n128_u32[1];
        v66 = v146;
        LANES128(v65).n128_f32[0] = v147;
        v69 = *(_QWORD*)(a1 + 16);
      }
      LANES128(v72).n128_u32[0] = LANES128(v65).n128_u32[0];
      LANES128(v65).n128_u32[1] = LANES128(v159).n128_u32[1];
      if (((*(_BYTE*)(a1 + 56) | *(_BYTE*)(a1 + 57)) & 1) != 0) {
        v73 = 0;
      }
      else {
        v73 = 2;
      }
      LANES128(v72).n128_u32[1] = v70;
      LANES128(v72).n128_u64[1] = LODWORD(v66);
      LANES128(v65).n128_u64[1] = LODWORD(v66);
      v167 = v72;
      v161 = v65;
      if (*(_DWORD*)(v69 + 12) == 1) {
        v74 = 769;
      }
      else {
        v74 = 1;
      }
      collision_670c60((void*)((__int64)v168_.v168), &v167, &v161, v74 | v73);
      if ((v168_.v169 & 1) != 0 &&
          v22 < (float)(v144 + (float)(v145 * (float)(v168_.v168[1] - v144)))) {
        v22 = v144 + (float)(v145 * (float)(v168_.v168[1] - v144));
      }
    LABEL_91:
      ++v45;
    } while (v42 != v45);
    v44 = v143;
    if (v143 != v142) {
      continue;
    }
    break;
  }
  v6 = GameData_212d310;
  LODWORD(v21) = v140;
  v20 = v144 + -0x1.0000000000000p-1f;
LABEL_129:
  v76 = 1;
  *(_BYTE*)(a1 + 104) = 0;
  *(float*)(a1 + 92) = v22;
  *(float*)(a1 + 100) = v20;
  *(_BYTE*)(a1 + 96) = 1;
  if (v18) {
    LANES128(v77).n128_u64[0] = *(_QWORD*)(a1 + 32);
    v78 = *(float**)(a1 + 16);
    LANES128(v79).n128_u64[0] =
        __PAIR64__(LODWORD(v21), LANES128(v77).n128_u32[0]);
    LANES128(v79).n128_u64[1] = LANES128(v77).n128_u32[1];
    v162 = v79;
    LANES128(v77).n128_f32[1] = v20 + -0x1.0000000000000p-1f;
    LANES128(v77).n128_u64[1] = LANES128(v79).n128_u64[1];
    v167 = v77;
    if (*v78 <= 0x1.99999a0000000p-4f) {
      v80 = *v78;
    }
    else {
      v80 = 0x1.99999a0000000p-4f;
    }
    if (v80 <= 0x0.0p+0f) {
      collision_670c60((void*)((__int64)v168_.v168), &v162, &v167, 2);
      if ((v168_.v169 & 1) != 0) {
        v158 = v168_.v168[1];
        collision_670c60((void*)((__int64)v168_.v168), &v162, &v167, 3);
        if (v168_.v169 == 1) {
          goto LABEL_140;
        }
      }
    LABEL_141:
      v76 = 1;
    }
    else {
      collision_6725f0((void*)((__int64)v168_.v168), &v162, &v167, 2, v80);
      if ((v168_.v169 & 1) == 0) {
        goto LABEL_141;
      }
      v158 = v168_.v168[1];
      collision_6725f0((void*)((__int64)v168_.v168), &v162, &v167, 3, v80);
      if ((v168_.v169 & 1) == 0) {
        goto LABEL_141;
      }
    LABEL_140:
      if ((float)(v158 + 0x1.99999a0000000p-4f) < v168_.v168[1]) {
        goto LABEL_141;
      }
      v76 = 1;
      *(_BYTE*)(a1 + 104) = 1;
    }
  }
LABEL_142:
  *(_BYTE*)(a1 + 145) = v76;
LABEL_143:
  v81 = 0x0.0p+0f;
  if (*(_BYTE*)(a1 + 104) == 1) {
    v81 = *(float*)(a1 + 108);
    v82 = fabsf(*(float*)(a1 + 8) / 0x1.99999a0000000p-3f);
    if (v81 <= 0x1.0000000000000p+0f) {
      if (v81 >= 0x1.0000000000000p+0f) {
        goto LABEL_150;
      }
      v81 = v81 + v82;
      if (v81 <= 0x1.0000000000000p+0f) {
        goto LABEL_150;
      }
    }
    else {
      v81 = v81 - v82;
      if (v81 >= 0x1.0000000000000p+0f) {
        goto LABEL_150;
      }
    }
    v81 = 0x1.0000000000000p+0f;
  }
LABEL_150:
  v83 = *(float*)(a1 + 68);
  v84 = *(unsigned __int8*)(a1 + 61);
  *(float*)(a1 + 108) = v81;
  if (v83 <= 0x0.0p+0f) {
    v85 = 0x1.0000000000000p+0f;
  }
  else {
    v85 = 0x0.0p+0f;
  }
  if (v84 == 1) {
    v86 = *(float*)(a1 + 8);
    *(float*)(a1 + 72) = v85;
    goto LABEL_162;
  }
  v86 = *(float*)(a1 + 8);
  v87 = *(float*)(a1 + 72);
  v88 = fabsf(v86 + v86);
  if (v87 <= v85) {
    if (v87 >= v85) {
      goto LABEL_161;
    }
    v87 = v87 + v88;
    if (v87 <= v85) {
      goto LABEL_161;
    }
  }
  else {
    v87 = v87 - v88;
    if (v87 >= v85) {
      goto LABEL_161;
    }
  }
  v87 = v85;
LABEL_161:
  v85 = v87;
  *(float*)(a1 + 72) = v87;
LABEL_162:
  v89 = fabsf(v86);
  if (v83 > 0x0.0p+0f) {
    v83 = v83 - v89;
    if (v83 >= 0x0.0p+0f) {
      goto LABEL_168;
    }
  LABEL_167:
    v83 = 0x0.0p+0f;
    goto LABEL_168;
  }
  if (v83 < 0x0.0p+0f) {
    v83 = v83 + v89;
    if (v83 > 0x0.0p+0f) {
      goto LABEL_167;
    }
  }
LABEL_168:
  v90 = *(unsigned __int8*)(a1 + 96);
  *(float*)(a1 + 68) = v83;
  if ((v90 & 1) != 0) {
    v91 = *(float*)(a1 + 92);
    if ((v84 & 1) != 0) {
      v92 = *(float*)(a1 + 92);
      *(float*)(a1 + 40) = v91;
    }
    else {
      v92 = *(float*)(a1 + 40);
    }
    v94 = *(unsigned __int8*)(a1 + 58);
    v95 = v92 - *(float*)(a1 + 52);
    if (*(_BYTE*)(a1 + 58) == 0) {
      v95 = v92 + (float)(*(float*)(a1 + 64) * v86);
    }
    v96 = v95 <= v91;
    if (v94 != v96) {
      *(_BYTE*)(a1 + 58) = v96;
      v94 = v95 <= v91;
    }
    v97 = *(_QWORD*)(a1 + 16);
    v98 = 0x0.0p+0f;
    v99 = 0x0.0p+0f;
    v100 = *(_QWORD*)(v97 + 24);
    if (v100 != 0) {
      v101 = *(float**)(v100 + 16);
      v102 = 0x0.0p+0f;
      v103 = v101[92];
      v104 = v101[91] - v103;
      if (v104 > 0x0.0p+0f) {
        v102 = (float)(sqrtf((float)(PSEUDO_UNFUSED(v101[168] * v101[168])) +
                             (float)(v101[167] * v101[167])) -
                       v103) /
               v104;
      }
      v105 = fminf(fmaxf(v102, 0x0.0p+0f), 0x1.0000000000000p+0f);
      v99 = (float)(fminf(fmaxf(v105, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                    0x1.99999a0000000p-1f) +
            0x1.99999a0000000p-3f;
      if (v105 <= 0x0.0p+0f) {
        v99 = v105;
      }
    }
    v106 = *(float*)(v97 + 8);
    v107 = *(_DWORD*)(v97 + 12);
    if (v107 == 1) {
      v106 = v85 * v106;
      v108 = 0x0.0p+0f;
      v98 = 0x1.99999a0000000p-4f;
    }
    else {
      v108 = v106 * 0x1.0000000000000p-2f;
      if (v107 == 0) {
        v108 = v85 * v108;
        v106 = v85 * v106;
      }
    }
    v109 = *(unsigned __int8*)(a1 + 144);
    v110 = fminf(fmaxf(*(float*)(a1 + 64) +
                           (float)((float)(v85 * *(float*)(v97 + 4)) * v86),
                       v106),
                 v108);
    v111 = vabds_f32(v92, v91);
    *(float*)(a1 + 64) = v110;
    if (v109 == 0 && v111 > v98) {
      *(_BYTE*)(a1 + 144) = 1;
      goto LABEL_190;
    }
    if (v109 == 0) {
      v93 = v92;
      goto LABEL_219;
    }
  LABEL_190:
    v112 = *(float*)(a1 + 100);
    v113 = *(_DWORD*)(v97 + 12);
    if (v113 == 1) {
      if (v94 != 0) {
        v110 = 0x0.0p+0f;
        *(_DWORD*)(a1 + 64) = 0;
      }
      if (v92 >= v91) {
        goto LABEL_205;
      }
      if (v111 <= 0x1.0000000000000p+0f) {
        v117 = v111;
      }
      else {
        v117 = 0x1.0000000000000p+0f;
      }
      v118 = fminf(fmaxf(v117, 0x0.0p+0f), 0x1.0000000000000p+0f);
      v119 = v86 * 0x1.e000000000000p+3f;
      v120 = fabsf((float)((float)(v118 * 0x1.cccccc0000000p-1f) +
                           0x1.99999a0000000p-4f) *
                   v86);
      v121 = v92 + (float)(fminf(fmaxf(v118 * v119, 0x0.0p+0f),
                                 0x1.0000000000000p+0f) *
                           (float)(v91 - v92));
      if (v121 <= v91) {
        if (v121 >= v91) {
          v91 = v121;
          goto LABEL_216;
        }
        v122 = v120 + v121;
        if (v122 > v91) {
        LABEL_216:
          *(_DWORD*)(a1 + 64) = 0;
          goto LABEL_217;
        }
      }
      else {
        v122 = v121 - v120;
        if (v122 < v91) {
          goto LABEL_216;
        }
      }
      v91 = v122;
      goto LABEL_216;
    }
    if (v113 == 0 && v94 != 0) {
      v114 =
          (float)((float)(fminf(fmaxf(v81, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                          -0x1.99999a0000000p-4f) +
                  0x1.99999a0000000p-4f) *
          (float)((float)(fminf(fmaxf(v99, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                          0x1.99999a0000000p-1f) +
                  0x1.99999a0000000p-3f);
      v115 =
          fabsf((float)(v86 * 0x1.99999a0000000p-4f) / 0x1.99999a0000000p-3f);
      if (v92 > v91) {
        v116 = v92 - v115;
        if ((float)(v92 - v115) >= v91) {
          goto LABEL_210;
        }
      LABEL_209:
        v116 = v91;
        goto LABEL_210;
      }
      v116 = v92;
      if (v92 < v91) {
        v116 = v92 + v115;
        if ((float)(v92 + v115) > v91) {
          goto LABEL_209;
        }
      }
    LABEL_210:
      v91 = fminf(fmaxf(v116, v91 - v114), v91 + v114);
      v112 = v91;
      goto LABEL_216;
    }
  LABEL_205:
    v91 = fmaxf(v92 + (float)(v110 * v86), v91);
  LABEL_217:
    v93 = fmaxf(v91, v112);
    *(float*)(a1 + 40) = v93;
    if (vabds_f32(v92, v93) < 0x1.0000000000000p-23f) {
      *(_BYTE*)(a1 + 144) = 0;
    LABEL_219:
      *(_DWORD*)(a1 + 64) = 0;
    }
  }
  else {
    v93 = *(float*)(a1 + 40);
  }
  *(float*)(a1 + 44) = v93;
  if (a4 == 0x0.0p+0f) {
    goto LABEL_265;
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 12LL) == 1) {
    v123 = 0x0.0p+0f;
    v124 = 0;
    if (v90 != 0 && (*(_BYTE*)(a1 + 128) & 1) != 0) {
      if ((float)(*(float*)(a1 + 92) - *(float*)(a1 + 124)) <=
          (float)(a4 + a4)) {
        v124 = 0;
      }
      else {
        if (*(_BYTE*)(a1 + 137) == 1) {
          v123 = 0x1.0000000000000p+0f;
          if (*(_BYTE*)(a1 + 136) == 0) {
            v123 = 0x0.0p+0f;
          }
        }
        else {
          v123 = 0x1.0000000000000p+0f;
        }
        v124 = 1;
      }
    }
    v125 = *(float*)(a1 + 140);
    v126 = fabsf(a4 / 0x1.99999a0000000p-4f);
    if (v125 > v123) {
      v125 = v125 - v126;
      if (v125 >= v123) {
        goto LABEL_239;
      }
    LABEL_238:
      v125 = v123;
      goto LABEL_239;
    }
    if (v125 < v123) {
      v125 = v126 + v125;
      if (v125 > v123) {
        goto LABEL_238;
      }
    }
  LABEL_239:
    *(float*)(a1 + 140) = v125;
    *(_WORD*)(a1 + 136) = v124 | (v124 << 8);
  }
  else {
    v125 = *(float*)(a1 + 140);
  }
  if (v125 >= 0x1.0000000000000p-1f) {
    if (v90 == 0 || (*(_BYTE*)(a1 + 137) & 1) == 0) {
      goto LABEL_265;
    }
    if ((*(_BYTE*)(a1 + 128) & 1) == 0) {
      GameRoutine_8123d0();
    }
    v129 = 0x0.0p+0f;
    if ((float)(a4 * 0x1.4000000000000p+4f) != 0x0.0p+0f) {
      v130 = vabds_f32(*(float*)(a1 + 92), *(float*)(a1 + 124)) /
             (float)(a4 * 0x1.4000000000000p+4f);
      v129 = 0x1.0000000000000p+0f;
      if (v130 <= 0x1.0000000000000p+0f) {
        v129 = v130;
      }
      if (v130 < 0x0.0p+0f) {
        v129 = 0x0.0p+0f;
      }
    }
    v131 = (float)(fminf(fmaxf(powf(0x1.0000000000000p+0f - v129,
                                    0x1.0000000000000p-1f),
                               0x0.0p+0f),
                         0x1.0000000000000p+0f) *
                   0x1.8000000000000p-1f) +
           0x1.0000000000000p-2f;
    v132 = *(float*)(a1 + 84);
    if (v132 <= v131) {
      if (v132 >= v131) {
        goto LABEL_262;
      }
      v132 = fabsf(a4 / 0x1.99999a0000000p-4f) + v132;
      if (v132 <= v131) {
        goto LABEL_262;
      }
    }
    else {
      v132 = v132 - fabsf(a4 / 0x1.99999a0000000p-5f);
      if (v132 >= v131) {
        goto LABEL_262;
      }
    }
    v132 = v131;
  LABEL_262:
    if (v132 < v131) {
      v131 = v132;
    }
    *(float*)(a1 + 80) = a4 + *(float*)(a1 + 80);
    *(float*)(a1 + 84) = v131;
    goto LABEL_265;
  }
  v127 = *(float*)(a1 + 84);
  *(_DWORD*)(a1 + 80) = 0;
  v128 = fabsf(a4 / 0x1.99999a0000000p-4f);
  if (v127 > 0x1.0000000000000p+0f) {
    v127 = v127 - v128;
    if (v127 >= 0x1.0000000000000p+0f) {
      goto LABEL_258;
    }
  LABEL_257:
    v127 = 0x1.0000000000000p+0f;
    goto LABEL_258;
  }
  if (v127 < 0x1.0000000000000p+0f) {
    v127 = v128 + v127;
    if (v127 > 0x1.0000000000000p+0f) {
      goto LABEL_257;
    }
  }
LABEL_258:
  *(float*)(a1 + 84) = v127;
LABEL_265:
  if (*(_BYTE*)(a1 + 58) == 1) {
    *(_DWORD*)(a1 + 76) = 0;
  }
  else {
    *(float*)(a1 + 76) = *(float*)(a1 + 8) + *(float*)(a1 + 76);
  }
  *(_DWORD*)(a1 + 124) = *(_DWORD*)(a1 + 92);
  *(_BYTE*)(a1 + 128) = *(_BYTE*)(a1 + 96);
  if (*(_BYTE*)(a1 + 120) == 1) {
    v133 = *(_DWORD*)(a1 + 36);
    *(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 32);
    *(_DWORD*)(a1 + 116) = v133;
  }
  else {
    *(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 32);
    *(_BYTE*)(a1 + 120) = 1;
  }
  v137 = false;
  if (*(_DWORD*)(*(_QWORD*)v6 + 8LL) == 1) {
    v134 = *(_QWORD*)(a1 + 16);
    v135 = *(_QWORD*)(v134 + 24);
    if (v135 != 0) {
      v136 = *(_QWORD*)(v135 + 168);
      if (v136 != 0 && *(_QWORD*)(v136 + 264) != 0 &&
          *(_DWORD*)(v134 + 12) == 0) {
        v137 = true;
      }
    }
  }
  v138 = *(_BYTE*)(a1 + 57);
  *(_BYTE*)(a1 + 61) = 0;
  *(_WORD*)(a1 + 132) = v137 | 0x100;
  *(_WORD*)(a1 + 134) = (*(_BYTE*)(a1 + 56) | v138) & 1 | 0x100;
}

void game_d25cc0(__int64 a1)
{
  float v2;
  float v3;
  float v4;
  unsigned __int64 v5;
  __int128 v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  int v17;
  float v18;
  int v19;
  float v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         48LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  v3 = *(float*)(a1 + 244);
  v4 = fabsf(v2);
  if (v3 > 0x0.0p+0f) {
    v3 = v3 - v4;
    if (v3 >= 0x0.0p+0f) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  if (v3 < 0x0.0p+0f) {
    v3 = v3 + v4;
    if (v3 > 0x0.0p+0f) {
    LABEL_6:
      v3 = 0x0.0p+0f;
    }
  }
LABEL_7:
  *(float*)(a1 + 244) = v3;
  if (GameData_21d96b8 != 0 && *(_BYTE*)(GameData_21d96b8 + 14) != 1) {
    goto LABEL_76;
  }
  if (game_ProcFadeView_instance_ != 0) {
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
    }
    else {
      v6 = *(_OWORD*)(v5 + 208);
    }
    if (*((float*)&v6 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                        v5 + 160, *((float*)&v6 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      goto LABEL_76;
    }
    if (game_ProcFadeView_instance_ != 0) {
      v7 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v7 + 172) != *(float*)(v7 + 168)) {
        goto LABEL_76;
      }
    }
  }
  if (GameData_21f3cb0 != 0 && *(_BYTE*)(GameData_21f3cb0 + 816) == 1 &&
      (*(_BYTE*)(GameData_21f3cb0 + 936) & 1) != 0) {
    goto LABEL_76;
  }
  if (GameData_21d96b8 != 0) {
    if (*(_BYTE*)(GameData_21d96b8 + 12) != 1 || *(_DWORD*)(a1 + 232) >= 1) {
      goto LABEL_76;
    }
  }
  else if (*(int*)(a1 + 232) > 0) {
    goto LABEL_76;
  }
  if (GameData_21f3cb0 != 0 && (*(_BYTE*)(GameData_21f3cb0 + 1144) & 1) != 0) {
    goto LABEL_76;
  }
  if (GameData_2258178 != 0) {
    v9 = *(_QWORD*)(GameData_2258178 + 192);
    if (v9 != 0 &&
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                              8 * ((unsigned __int64)(v9 +
                                                      *(_QWORD*)(GameData_2258178 +
                                                                 184) -
                                                      1) >>
                                   10)) +
                   4 * ((v9 + *(_QWORD*)(GameData_2258178 + 184) - 1) &
                        0x3FF)) == 5) {
      goto LABEL_76;
    }
  }
  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_39;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    goto LABEL_76;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_39:
    if (GameData_2258178 == 0) {
      goto LABEL_76;
    }
  }
  else if (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
           (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
           GameData_2258178 == 0 ||
           (*(_BYTE*)(game_g_game_setting + 902) & 1) == 0) {
    goto LABEL_76;
  }
  v10 = *(_QWORD*)(GameData_2258178 + 192);
  if (v10 == 0) {
    goto LABEL_76;
  }
  v11 = *(
      _DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                          8 * ((unsigned __int64)(v10 +
                                                  *(_QWORD*)(GameData_2258178 +
                                                             184) -
                                                  1) >>
                               10)) +
               4 * ((v10 + *(_QWORD*)(GameData_2258178 + 184) - 1) & 0x3FF));
  if ((unsigned int)(v11 - 12) >= 4 && v11 != 19) {
    goto LABEL_76;
  }
  if (GameData_220b6f0 != 0) {
    v13 = *(_QWORD*)(GameData_220b6f0 + 56);
    if (v13 != 0) {
      v14 = *(_QWORD*)(v13 + 32);
      if (v14 != 0 &&
          (float)((float)(PSEUDO_UNFUSED(*(float*)(v14 + 36) *
                                         *(float*)(v14 + 36))) +
                  (float)(*(float*)(v14 + 32) * *(float*)(v14 + 32))) >
              0x1.f5c28e0000000p-2f) {
        goto LABEL_76;
      }
    }
  }
  if ((GameRoutine_1551d30() & 1) == 0) {
    goto LABEL_76;
  }
  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           *(_BYTE*)(game_g_game_setting + 805) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    v15 = 760;
  }
  else {
    if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
        (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
            (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
             *(_BYTE*)(game_g_game_setting + 901) != 1 ||
             *(_BYTE*)(game_g_game_setting + 902) != 1)) {
      goto LABEL_76;
    }
    v15 = 856;
  }
  if ((*(_BYTE*)(game_g_game_setting + v15) & 1) == 0 ||
      (GameRoutine_1551ac0(0) & 1) == 0) {
  LABEL_76:
    *(_BYTE*)(a1 + 240) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    *(_DWORD*)(a1 + 256) = 0;
    return;
  }
  v16 = *(float*)(a1 + 244);
  *(_BYTE*)(a1 + 240) = 1;
  v17 = *(_DWORD*)(a1 + 248);
  v18 = fmaxf(v16, 0x1.99999a0000000p-3f);
  *(float*)(a1 + 244) = v18;
  if (v17 == 1) {
    v17 = 2;
    *(_DWORD*)(a1 + 248) = 2;
  }
  v19 = *(_DWORD*)(a1 + 252);
  if (v19 == 1) {
    v19 = 2;
    *(_DWORD*)(a1 + 252) = 2;
  }
  else if (v17 != 2 && v19 != 2) {
    goto LABEL_80;
  }
  v20 = v2 + *(float*)(a1 + 256);
  *(float*)(a1 + 256) = v20;
  if (v20 > 0x1.99999a0000000p-1f) {
    v19 = 0;
    v17 = 0;
    *(_QWORD*)(a1 + 248) = 0;
    *(_DWORD*)(a1 + 256) = 0;
  }
LABEL_80:
  v21 = 0;
  if (*(_BYTE*)(a1 + 260) != 1) {
    goto LABEL_104;
  }
  v22 = 0;
  if (GameData_2258178 == 0) {
    LODWORD(v21) = 0;
    goto LABEL_103;
  }
  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           *(_BYTE*)(game_g_game_setting + 805) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    v23 = 520;
  }
  else {
    LODWORD(v21) = 0;
    if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
        (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
            (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
             *(_BYTE*)(game_g_game_setting + 901) != 1 ||
             *(_BYTE*)(game_g_game_setting + 902) != 1)) {
      goto LABEL_93;
    }
    v23 = 528;
  }
  v21 = *(_QWORD*)(GameData_2258178 + v23);
LABEL_93:
  if (*(_BYTE*)(game_g_game_setting + 807) != 0 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           *(_BYTE*)(game_g_game_setting + 805) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    v24 = 524;
  }
  else {
    if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
        (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
            (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
             *(_BYTE*)(game_g_game_setting + 901) != 1 ||
             *(_BYTE*)(game_g_game_setting + 902) != 1)) {
      goto LABEL_103;
    }
    v24 = 532;
  }
  v22 = *(_DWORD*)(GameData_2258178 + v24);
LABEL_103:
  HIDWORD(v21) = v22;
LABEL_104:
  if (fabsf(*(float*)&v21) <= 0x1.e000000000000p+4f) {
    if (*((float*)&v21 + 1) < -0x1.e000000000000p+4f && v17 == 0) {
      v25 = 0x200000001LL;
    LABEL_111:
      *(_QWORD*)(a1 + 248) = v25;
      *(float*)(a1 + 244) = fmaxf(v18, 0x1.0000000000000p+0f);
      return;
    }
    if (*((float*)&v21 + 1) > 0x1.e000000000000p+4f && v19 == 0) {
      v25 = 0x100000002LL;
      goto LABEL_111;
    }
  }
}

float game_d26b60(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int128 v4;
  unsigned __int64 v5;
  bool v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;

  if ((atomic_load_explicit(
         (atomic_uchar* volatile)&GameData_22110b8, memory_order_acquire) &
        1) == 0 &&
    __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release_alt1((__int64)&GameData_22110b8);
  }
  v2 = GameData_22110ac;
  if (GameData_21d96b8 == 0 || *(_BYTE*)(GameData_21d96b8 + 14) == 1) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v3 = game_ProcFadeView_instance_ +
      ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
    if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160);
    }
    else {
      v4 = *(_OWORD*)(v3 + 208);
    }
    if ((*((float*)&v4 + 3) != 0x1.0000000000000p+0f ||
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                        (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(
                        v3 + 160, *((float*)&v4 + 3)))
              .n128_f32[3] != 0x1.0000000000000p+0f) &&
      (game_ProcFadeView_instance_ == 0 ||
        *(float*)((v5 = game_ProcFadeView_instance_ +
                      ((unsigned __int64)*(
                         unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                        << 6)) +
          172) == *(float*)(v5 + 168))) {
    LABEL_14:
      if (GameData_21f3cb0 == 0 || *(_BYTE*)(GameData_21f3cb0 + 816) != 1 ||
        (*(_BYTE*)(GameData_21f3cb0 + 936) & 1) == 0) {
        if (GameData_21d96b8 != 0) {
          if (*(_BYTE*)(GameData_21d96b8 + 12) != 1 ||
            (signed __int32)*(_DWORD*)(a1 + 232) >= 1) {
            goto LABEL_49;
          }
        }
        else if (*(int*)(a1 + 232) > 0) {
          goto LABEL_49;
        }
        if ((*(_BYTE*)(GameData_21f3cb0 + 1144) & 1) == 0) {
          v7 = (float)(vmuls_lane_f32(COERCE_FLOAT(HIDWORD(
                                        *(_QWORD*)(game_g_game_setting + 960))),
                         *(float32x2_t*)(game_g_game_setting + 960), 1) +
                 (float)(COERCE_FLOAT(*(_OWORD*)(game_g_game_setting + 960)) *
                   COERCE_FLOAT(*(_OWORD*)(game_g_game_setting + 960)))) <=
            0x0.0p+0f;
          if (v7) {
            v8 = 0x0.0p+0f;
          }
          else {
            LODWORD(v8) = HIDWORD(*(_QWORD*)(game_g_game_setting + 960));
          }
          if (v7) {
            v9 = 0x0.0p+0f;
          }
          else {
            LODWORD(v9) = *(_OWORD*)(game_g_game_setting + 960);
          }
          if (GameData_2258178 != 0 &&
              (v10 = *(_QWORD*)(GameData_2258178 + 192)) != 0 &&
              *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                           8 *
                             ((unsigned __int64)(v10 +
                                *(_QWORD*)(GameData_2258178 + 184) - 1) >>
                               10)) +
                4 * ((v10 + *(_QWORD*)(GameData_2258178 + 184) - 1) & 0x3FF)) ==
                5 ||
            (GameRoutine_1551d30() & 1) == 0 ||
            (v11 = (float)(PSEUDO_UNFUSED(v8 * v8)) + (float)(v9 * v9)) >=
              0x1.0000000000000p-2f ||
            v11 >= (float)((float)(PSEUDO_UNFUSED(
                             *(float*)(game_g_game_setting + 972) *
                             *(float*)(game_g_game_setting + 972))) +
                     (float)(*(float*)(game_g_game_setting + 968) *
                       *(float*)(game_g_game_setting + 968)))) {
            v12 = 0x1.99999a0000000p-5f;
          }
          else {
            v9 = *(float*)(game_g_game_setting + 968);
            v8 = *(float*)(game_g_game_setting + 972);
            v12 = 0x1.99999a0000000p-3f;
          }
          v13 = sqrtf((float)(PSEUDO_UNFUSED(v8 * v8)) + (float)(v9 * v9));
          v14 = 0x0.0p+0f;
          if ((float)(0x1.0000000000000p+0f - v12) != 0x0.0p+0f) {
            v15 = (float)(v13 - v12) / (float)(0x1.0000000000000p+0f - v12);
            v16 = v15 <= 0x1.0000000000000p+0f
              ? (float)(v13 - v12) / (float)(0x1.0000000000000p+0f - v12)
              : 0x1.0000000000000p+0f;
            if (v15 >= 0x0.0p+0f) {
              if (v16 <= 0x0.0p+0f) {
                v14 = v16;
              }
              else {
                v14 = fmaxf(
                  powf(v16, 0x1.8000000000000p+0f), 0x1.99999a0000000p-3f);
              }
            }
          }
          v17 = -v8;
          if (v9 != 0x0.0p+0f || v8 != 0x0.0p+0f) {
            v9 = v9 / v13;
            v17 = v17 / v13;
          }
          v2 = __PAIR64__(v14 * v17, v14 * v9);
        }
      }
    }
  }
LABEL_49:
  v18 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
  v20 = *(_QWORD*)(v18 + 24);
  v19 = *(_QWORD*)(v18 + 32);
  if (v19 != 0) {
    atomic_fetch_add_explicit(
      (atomic_ullong* volatile)(v19 + 8), 1u, memory_order_relaxed);
    if (atomic_fetch_add(
          (atomic_ullong* volatile)(v19 + 8), 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt2(v19);
    }
  }
  v21 = (float)(PSEUDO_UNFUSED(*(float*)(v20 + 84) * 0x1.1df46a0000000p-6f)) +
    (float)(roundf((float)(*(float*)(v20 + 84) * 0x1.1df46a0000000p-6f) *
              0x1.45f3060000000p-3f) *
      -0x1.921fb60000000p+2f);
  if (v21 > 0x1.921fb60000000p+0f) {
    v22 = 0x1.921fb60000000p+1f;
  LABEL_56:
    v21 = v22 - v21;
    v23 = -0x1.0000000000000p+0f;
    return (float)(PSEUDO_UNFUSED(*((float*)&v2 + 1) *
             (float)(v21 *
               (float)((float)((float)-(
                                 float)(*(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                             _UNKNOWN**)0x8LL) +
                                                   (_QWORD)GameData_212c190 +
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
                                                                 (float)(v21 *
                                                                   v21))) *
                                                       (float)(v21 * v21))) *
                                             (float)(v21 * v21))) *
                                   (float)(v21 * v21))) *
                         (float)(v21 * v21)) +
                 0x1.0000000000000p+0f)))) +
      (float)(*(float*)&v2 *
        (float)(v23 *
          (float)((float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c188) -
                            (float)((float)(*(float*)((char*)((
                                                        _UNKNOWN**)0x8LL) +
                                              (_QWORD)GameData_212c188 + 4) +
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
                                                            (float)(v21 *
                                                              v21))) *
                                                  (float)(v21 * v21))) *
                                        (float)(v21 * v21))) *
                              (float)(v21 * v21))) *
                    (float)(v21 * v21)) +
            0x1.0000000000000p+0f)));
  }
  v23 = 0x1.0000000000000p+0f;
  if (v21 < -0x1.921fb60000000p+0f) {
    v22 = -0x1.921fb60000000p+1f;
    goto LABEL_56;
  }
  return (float)(PSEUDO_UNFUSED(*((float*)&v2 + 1) *
           (float)(v21 *
             (float)((float)((float)-(
                               float)(*(float*)((char*)((__int128*)0x10LL) +
                                        (_QWORD)GameData_212c190) -
                               (float)((float)(*(float*)((char*)((
                                                           _UNKNOWN**)0x8LL) +
                                                 (_QWORD)GameData_212c190 + 4) +
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
                                                               (float)(v21 *
                                                                 v21))) *
                                                     (float)(v21 * v21))) *
                                           (float)(v21 * v21))) *
                                 (float)(v21 * v21))) *
                       (float)(v21 * v21)) +
               0x1.0000000000000p+0f)))) +
    (float)(*(float*)&v2 *
      (float)(v23 *
        (float)((float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c188) -
                          (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                            (_QWORD)GameData_212c188 + 4) +
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
                                                          (float)(v21 * v21))) *
                                                (float)(v21 * v21))) *
                                      (float)(v21 * v21))) *
                            (float)(v21 * v21))) *
                  (float)(v21 * v21)) +
          0x1.0000000000000p+0f)));
}

bool game_d26f50(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned __int64 v5;
  __int128 v6;
  unsigned __int64 v7;

  v4 = GameData_212d310;
  if (*(_QWORD*)GameData_212d310 != 0 &&
      *(_BYTE*)(*(_QWORD*)GameData_212d310 + 14LL) != 1) {
    return false;
  }
  if (game_ProcFadeView_instance_ != 0) {
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
    }
    else {
      v6 = *(_OWORD*)(v5 + 208);
    }
    if (*((float*)&v6 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                        v5 + 160, *((float*)&v6 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return false;
    }
    if (game_ProcFadeView_instance_ != 0) {
      v7 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v7 + 172) != *(float*)(v7 + 168)) {
        return false;
      }
    }
  }
  if (GameData_21f3cb0 != 0 && *(_BYTE*)(GameData_21f3cb0 + 816) == 1 &&
      (*(_BYTE*)(GameData_21f3cb0 + 936) & 1) != 0) {
    return false;
  }
  if (a2 == 3) {
    if (*(_QWORD*)v4 != 0) {
      if (*(_BYTE*)(*(_QWORD*)v4 + 12LL) != 1 || *(_DWORD*)(a1 + 232) >= 1) {
        return false;
      }
    }
    else if (*(int*)(a1 + 232) > 0) {
      return false;
    }
  }
  else if (a2 == 2) {
    if (*(_QWORD*)v4 != 0) {
      if (*(_BYTE*)(*(_QWORD*)v4 + 12LL) != 1 || *(_DWORD*)(a1 + 232) >= 1) {
        return false;
      }
    }
    else if (*(int*)(a1 + 232) > 0) {
      return false;
    }
    return GameData_21f3cb0 == 0 ||
           (*(_BYTE*)(GameData_21f3cb0 + 1144) & 1) == 0;
  }
  return true;
}

float game_d27af0(float a1, float a2, float a3, float a4, __int64 a5)
{

#pragma clang fp contract(off)
  unsigned __int64 v9;
  char v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64* v19;
  __int64 v20;
  float v21;
  __int64* v22;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = GameRoutine_d271a0(a5),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v10 & 1) != 0) {
    v11 = *((float*)&v9 + 1);
    v12 = *(float*)&v9;
  }
  else {
    v12 = *(float*)(game_g_game_setting + 968);
    v11 = *(float*)(game_g_game_setting + 972);
  }
  if (GameData_2258178 != 0 &&
          (v13 = *(_QWORD*)(GameData_2258178 + 192)) != 0 &&
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                                8 * ((unsigned __int64)(v13 +
                                                        *(_QWORD*)(GameData_2258178 +
                                                                   184) -
                                                        1) >>
                                     10)) +
                     4 * ((v13 + *(_QWORD*)(GameData_2258178 + 184) - 1) &
                          0x3FF)) == 5 ||
      (*(_BYTE*)(game_g_game_setting + 807) != 1 ||
       (*(_BYTE*)(game_g_game_setting + 804) & 1) == 0 &&
           (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
            (*(_BYTE*)(game_g_game_setting + 805) & 1) == 0 ||
            (*(_BYTE*)(game_g_game_setting + 806) & 1) == 0)) &&
          (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
           (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
               (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
                (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
                (*(_BYTE*)(game_g_game_setting + 902) & 1) == 0))) {
    v14 = 0x0.0p+0f;
    if ((float)(a3 - a1) != 0x0.0p+0f) {
      v15 = (float)(fabsf(v12) - a1) / (float)(a3 - a1);
      v16 = 0x1.0000000000000p+0f;
      if (v15 <= 0x1.0000000000000p+0f) {
        v16 = v15;
      }
      if (v15 >= 0x0.0p+0f) {
        if (v16 <= 0x0.0p+0f) {
          v14 = v16;
        }
        else {
          v14 = fmaxf(powf(v16, a4), 0x0.0p+0f),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    if ((float)(a3 - a2) != 0x0.0p+0f) {
      v17 = (float)(fabsf(v11) - a2) / (float)(a3 - a2);
      v18 = 0x1.0000000000000p+0f;
      if (v17 <= 0x1.0000000000000p+0f) {
        v18 = v17;
      }
      if (v17 >= 0x0.0p+0f && v18 > 0x0.0p+0f) {
        fmaxf(powf(v18, a4), 0x0.0p+0f),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v12 = v12 * v14;
  }
  v19 = game_8224a0(7u),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0 &&
      (v20 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v19)) != 0) {
    if ((unsigned __int8)*(_DWORD*)(v20 + 32) == 1) {
      v21 = v12;
    }
    else {
      v21 = -v12;
    }
  }
  else {
    v21 = -v12;
  }
  v22 = game_8224a0(8u),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                (unsigned __int64*)v22),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v21;
}

bool game_d27d30(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v3;
  __int128 v4;
  unsigned __int64 v5;
  _BOOL8 result;

  v2 = GameData_212d310;
  if (*(_QWORD*)GameData_212d310 != 0 &&
      *(_BYTE*)(*(_QWORD*)GameData_212d310 + 14LL) != 1) {
    return false;
  }
  if (game_ProcFadeView_instance_ != 0) {
    v3 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160);
    }
    else {
      v4 = *(_OWORD*)(v3 + 208);
    }
    if (*((float*)&v4 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(
                        v3 + 160, *((float*)&v4 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return false;
    }
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) != *(float*)(v5 + 168)) {
        return false;
      }
    }
  }
  if (GameData_21f3cb0 == 0) {
    if (*(int*)(a1 + 216) <= 0) {
      return *(_QWORD*)v2 == 0 || *(_BYTE*)(*(_QWORD*)v2 + 13LL) == 1;
    }
    return false;
  }
  result = false;
  if ((*(_BYTE*)(GameData_21f3cb0 + 816) & *(_BYTE*)(GameData_21f3cb0 + 936) &
       1) == 0 &&
      *(int*)(a1 + 216) <= 0) {
    return *(_QWORD*)v2 == 0 || *(_BYTE*)(*(_QWORD*)v2 + 13LL) == 1;
  }
  return result;
}

__int64 game_dad600(__int64 a1)
{
  __int64 v1;
  float v2;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  __int64 result;
  float v9;
  float v10;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  int v16;
  float v17;
  int v18;
  bool v19;
  int v20;
  float v21;
  __int64 v22;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(float*)(a1 + 80);
  v4 = *(float*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 8LL) + 228LL);
  v5 = fabsf(v4);
  if (v2 <= 0.0f) {
    if (v2 >= 0.0f) {
      goto LABEL_7;
    }
    v2 = v2 + v5;
    if (v2 <= 0.0f) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v2 = v2 - v5;
  if (v2 < 0.0f) {
  LABEL_6:
    v2 = 0.0f;
  }
LABEL_7:
  *(float*)(a1 + 80) = v2;
  v6 = *(_QWORD*)(v1 + 488);
  v7 = CharacterRotate_d52080(v6);
  result = fmodf(*(float*)(v6 + 36) - v7, 0x1.921fb60000000p+2f);
  if (v9 >= 0.0f) {
    v10 = v9 + 0.0f;
  }
  else {
    v10 = (float)(v9 + 0.0f) + 0x1.921fb60000000p+2f;
  }
  if (v10 > 0x1.921fb60000000p+1f) {
    v10 = v10 + -0x1.921fb60000000p+2f;
  }
  if (fabsf(v10) > 0x1.0000000000000p-23f || *(_DWORD*)(v6 + 172) > 2) {
    v12 = 0x1.99999a0000000p-3f;
    goto LABEL_23;
  }
  v12 = *(float*)(a1 + 20);
  if (v12 > 0.0f) {
    v12 = v12 - v5;
    if (v12 >= 0.0f) {
      goto LABEL_23;
    }
  LABEL_22:
    v12 = 0.0f;
    goto LABEL_23;
  }
  if (v12 < 0.0f) {
    v12 = v5 + v12;
    if (v12 > 0.0f) {
      goto LABEL_22;
    }
  }
LABEL_23:
  *(float*)(a1 + 20) = v12;
  if (v4 <= 0.0f) {
    goto LABEL_54;
  }
  v13 = *(float*)(a1 + 16);
  *(_BYTE*)(a1 + 109) = 0;
  if (v13 > 0.0f) {
    v14 = v13 - v5;
    if ((float)(v13 - v5) >= 0.0f) {
      goto LABEL_30;
    }
  LABEL_29:
    v14 = 0.0f;
    goto LABEL_30;
  }
  v14 = v13;
  if (v13 < 0.0f) {
    v14 = v5 + v13;
    if ((float)(v5 + v13) > 0.0f) {
      goto LABEL_29;
    }
  }
LABEL_30:
  v15 = *(_QWORD*)(a1 + 8);
  *(float*)(a1 + 16) = v14;
  if ((*(_BYTE*)(*(_QWORD*)(v15 + 8) + 387LL) & 0x40) != 0) {
    if ((float)((float)(*(float*)(v15 + 588) * *(float*)(v15 + 588)) +
                (float)(*(float*)(v15 + 584) * *(float*)(v15 + 584))) <= 0.0f) {
      goto LABEL_47;
    }
    if ((float)((float)(*(float*)(v15 + 672) * *(float*)(v15 + 672)) +
                (float)(*(float*)(v15 + 668) * *(float*)(v15 + 668))) <= 0.0f) {
      if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
        goto LABEL_47;
      }
      v16 = 1;
    LABEL_38:
      *(_DWORD*)(a1 + 24) = v16;
      *(_BYTE*)(a1 + 28) = 1;
      goto LABEL_39;
    }
  LABEL_37:
    v16 = 2;
    goto LABEL_38;
  }
  if ((float)((float)(*(float*)(v15 + 672) * *(float*)(v15 + 672)) +
              (float)(*(float*)(v15 + 668) * *(float*)(v15 + 668))) > 0.0f ||
      (*(_BYTE*)(v15 + 195) & 1) == 0 && (*(_BYTE*)(v15 + 194) & 1) == 0) {
    goto LABEL_37;
  }
LABEL_47:
  v18 = *(_DWORD*)(a1 + 24);
  *(_BYTE*)(a1 + 28) = 0;
  v19 = __OFSUB__(v18, 1);
  v20 = v18 - 1;
  if (v20 < 0 != v19 || (*(_DWORD*)(a1 + 24) = v20, v20 == 0)) {
    if (v13 != 0.0f && *(float*)(a1 + 32) > 0x1.3333340000000p-2f &&
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 8) + 8LL) + 216LL) & 0x10) !=
            0) {
      *(_BYTE*)(a1 + 109) = 1;
    }
    *(_DWORD*)(a1 + 32) = 0;
    goto LABEL_54;
  }
LABEL_39:
  if (v13 == 0.0f) {
    result = X8CALL_X0(
        __int64,
        game_zview_d56a60(
            (void*)((__int64)&v22), *(_QWORD*)(*(_QWORD*)(v15 + 8) + 40LL),
            (__int64)"SE_FS_<LD/MB>_<FootID>_<Ground>_Short", 1.0f));
    v14 = *(float*)(a1 + 16);
    v17 = 0x1.47ae140000000p-7f;
    if (*(float*)(a1 + 20) == 0.0f) {
      v17 = 0x1.3333340000000p-2f;
    }
  }
  else {
    v17 = 0x1.47ae140000000p-7f;
  }
  if (v14 < v17) {
    v14 = v17;
  }
  *(float*)(a1 + 16) = v14;
  *(float*)(a1 + 32) = v4 + *(float*)(a1 + 32);
LABEL_54:
  if (*(float*)(*(_QWORD*)(a1 + 8) + 216LL) > 0x1.99999a0000000p-4f) {
    *(_DWORD*)(a1 + 112) = 1061997773;
    *(_BYTE*)(a1 + 116) = 1;
    return result;
  }
  if (*(_BYTE*)(a1 + 116) == 1) {
    v21 = *(float*)(a1 + 112);
    if (v21 <= 0.0f) {
      if (v21 >= 0.0f || (v21 = v5 + v21) <= 0.0f) {
      LABEL_63:
        *(float*)(a1 + 112) = v21;
        *(_BYTE*)(a1 + 116) = 1;
        if (v21 != 0.0f) {
          return result;
        }
        goto LABEL_64;
      }
    }
    else {
      v21 = v21 - v5;
      if (v21 >= 0.0f) {
        goto LABEL_63;
      }
    }
    *(_DWORD*)(a1 + 112) = 0;
  LABEL_64:
    *(_BYTE*)(a1 + 116) = 0;
  }
  return result;
}

void game_dad970(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  __int64 v7;
  bool v8;
  bool v9;
  bool v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  double v17;
  float v18;
  __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if ((*(_BYTE*)(*(_QWORD*)(v1 + 8) + 216LL) & 2) != 0) {
    if ((*(_BYTE*)(v1 + 432) & 1) != 0) {
      goto LABEL_25;
    }
    v2 = a1;
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 16) + 488LL);
    v4 = CharacterRotate_d52080(v3);
    v5 = fmodf_alt1(*(float*)(v3 + 36) - v4, 0x1.921fb60000000p+2f);
    a1 = v2;
    if (v5 >= 0x0.0p+0f) {
      v6 = v5 + 0x0.0p+0f;
    }
    else {
      v6 = (float)(v5 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v6 > 0x1.921fb60000000p+1f) {
      v6 = v6 + -0x1.921fb60000000p+2f;
    }
    if (fabsf(v6) > 0x1.0000000000000p-23f ||
        (float)((float)(PSEUDO_UNFUSED(
                    *(float*)((v7 = *(_QWORD*)(v1 + 16)) + 672) *
                    *(float*)(v7 + 672))) +
                (float)(*(float*)(v7 + 668) * *(float*)(v7 + 668))) >
            0x0.0p+0f ||
        (*(_BYTE*)(v7 + 195) & 1) == 0 && (*(_BYTE*)(v7 + 194) & 1) == 0 ||
        (v8 = HubCharacterNatives_cf7e00_alt1(*(_QWORD*)(v1 + 8)), a1 = v2,
         !v8) ||
        (*(_BYTE*)(v1 + 385) & 0x40) == 0 &&
            (*(_QWORD*)(v1 + 468) & 0x100000000LL) != 0 ||
        (v9 = GameRoutine_d2d4e0(
             *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 344LL) + 360LL)),
         a1 = v2, v9) ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8LL) +
                                         8LL) +
                              336LL) +
                   16LL) &
         1) != 0 ||
        (*(_BYTE*)(v1 + 385) & 0x10) != 0 ||
        (v10 = game_d26f50(*GameData_212ed08[0], 2), a1 = v2, !v10)) {
    LABEL_25:
      if (*(_BYTE*)(a1 + 100) == 1) {
        *(_BYTE*)(a1 + 100) = 0;
      }
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8LL) + 8LL);
      v12 = *(_DWORD*)(*(_QWORD*)(v11 + 344) + 360LL);
      v13 = *(_QWORD*)(v11 + 16);
      if ((*(_BYTE*)(v13 + 385) & 0x40) != 0) {
        v14 = 0;
      }
      else {
        v14 = *(_QWORD*)(v13 + 468);
      }
      if ((v14 & 0x100000000LL) == 0) {
        if (GameRoutine_d2d4e0(v12)) {
          LODWORD(v14) = 1257611790;
        }
        else if ((*(_BYTE*)(*(_QWORD*)(v11 + 16) + 384LL) & 0x10) != 0) {
          LODWORD(v14) = -1101902990;
        }
        else if ((*(_BYTE*)(v11 + 216) & 2) != 0) {
          LODWORD(v14) = 1669996436;
        }
        else {
          LODWORD(v14) = -574916402;
        }
      }
      if (v12 == (unsigned int)GameRoutine_d2d5e0_alt1(v14)) {
        v16 = v2;
        if ((*(_BYTE*)(v2 + 100) & 1) != 0) {
          goto LABEL_41;
        }
        v17 = GameHr_d1cbc0(*(_QWORD*)(v11 + 344), 1669996436);
        v18 = (float)(*(float*)&v17 / 0x1.e000000000000p+5f) + 0x0.0p+0f;
        v19 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 16) + 16LL) + 8LL) +
                     384LL);
        nn_os_LockMutex_alt2((__int64)&game_g_random_mutex);
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
        nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
        v25 = (float)(unsigned __int16)v24 / 0x1.fffe000000000p+15f;
        if ((v19 & 0x40000000) != 0) {
          v26 = (float)(PSEUDO_UNFUSED(v25 * 0x1.0000000000000p+2f)) +
                0x1.0000000000000p+1f;
        }
        else {
          v18 = v18 +
                (float)((float)(PSEUDO_UNFUSED(v25 * 0x1.0000000000000p+4f)) +
                        0x1.0000000000000p+2f);
          if ((*(_BYTE*)(v2 + 92) & 1) != 0) {
          LABEL_40:
            v16 = v2;
            *(float*)(v2 + 96) = v18;
            *(_BYTE*)(v2 + 100) = 1;
          LABEL_41:
            v27 = *(float*)(v16 + 96);
            v28 = fabsf(
                *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 8) + 8LL) +
                                     8LL) +
                          228LL));
            if (v27 <= 0x0.0p+0f) {
              if (v27 >= 0x0.0p+0f) {
                goto LABEL_47;
              }
              v27 = v28 + v27;
              if (v27 <= 0x0.0p+0f) {
                goto LABEL_47;
              }
            }
            else {
              v27 = v27 - v28;
              if (v27 >= 0x0.0p+0f) {
                goto LABEL_47;
              }
            }
            v27 = 0x0.0p+0f;
          LABEL_47:
            *(float*)(v16 + 96) = v27;
            *(_BYTE*)(v16 + 100) = 1;
            return;
          }
          v26 = game_RandomSeed_GetFloat_alt1(
              (_DWORD*)game_map_MapRandom_instance__ptr[0],
              0x1.0000000000000p+4f);
        }
        v18 = v18 + v26;
        goto LABEL_40;
      }
    }
  }
}

__int64 game_daddf0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  unsigned int v13;
  bool v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  _BYTE v24[16];

  if (*(float*)(a1 + 16) > 0x0.0p+0f &&
      (v2 = *(_QWORD*)(a1 + 8),
       (*(_BYTE*)(*(_QWORD*)((v3 = *(_QWORD*)(v2 + 8)) + 8) + 216LL) & 2) ==
           0) &&
      (*(_BYTE*)(v3 + 387) & 0x80) != 0) {
    v6 = *(float*)(v2 + 376);
    v7 = 0x0.0p+0f;
    v8 = *(float*)(v2 + 372) - v6;
    v9 = 0x0.0p+0f;
    if (v8 != 0x0.0p+0f) {
      v10 = (float)(sqrtf((float)(PSEUDO_UNFUSED(*(float*)(v2 + 672) *
                                                 *(float*)(v2 + 672))) +
                          (float)(*(float*)(v2 + 668) * *(float*)(v2 + 668))) -
                    v6) /
            v8;
      v11 = 0x1.0000000000000p+0f;
      if (v10 <= 0x1.0000000000000p+0f) {
        v11 = v10;
      }
      if (v10 >= 0x0.0p+0f) {
        v7 = v11;
      }
      else {
        v7 = 0x0.0p+0f;
      }
    }
    if (*(_BYTE*)(a1 + 116) != 0) {
      v12 = v7;
    }
    else {
      v12 = 0x0.0p+0f;
    }
    if (*(_BYTE*)(a1 + 116) == 0) {
      v9 = v7;
    }
    v21 = __PAIR64__(LODWORD(v9), LODWORD(v12));
    game_daf080(a1, 0xA5E7D9CA, &v21);
    if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 120)) & 1) == 0) {
      CharacterModel_cf7a40(
          (void*)(&v22_.v22),
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL));
      if (v22_.v22 != 0) {
        v13 = *(_DWORD*)(v22_.v22 + 11784);
        v14 = v13 > 0x21;
        v15 = (1LL << v13) & 0x280100030LL;
        if (!v14 && v15 != 0) {
          game_zview_d56a60_alt1(
              (void*)((__int64)v24),
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 40LL),
              "SE_ACT_LD_Move_Monster_RunLoop_lp", 0x1.0000000000000p+0f);
          GameRoutine_112180(a1 + 120, (__int64)v24);
        }
      }
      else {
        v17 = v22_.v23;
        if (v22_.v23 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt2(v17);
        }
        v22_.v22 = 0;
        v22_.v23 = 0;
      }
      v18 = v22_.v23;
      if (v22_.v23 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt2(v18);
      }
    }
    if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 120)) & 1) != 0) {
      v19 = snd_fnd_WeakHandle_get(a1 + 120);
      if (v19 != 0) {
        v20 = v19 - 5592;
      }
      else {
        v20 = 0;
      }
      snd_Fade_Fade_10c830((__int64)&v22_.v22, 0x0.0p+0f);
      (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v20 + 40) + 72LL))(
          v20 + 40, &v22_.v22, v7);
      snd_Fade_Destroy_Fade(&v22_.v22);
    }
    return 1;
  }
  else {
    if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 120)) & 1) != 0) {
      v4 = snd_fnd_WeakHandle_get(a1 + 120);
      snd_Fade_Fade_10c910((__int64)&v22_.v22, 300);
      (*(void (**)(__int64, __int64*, _QWORD, double))(
          *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, &v22_.v22, 0, 0x0.0p+0);
      snd_Fade_Destroy_Fade(&v22_.v22);
    }
    return 0;
  }
}

__int64 game_dae060(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned int v5;
  unsigned __int32 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  int v10;
  int v12;
  unsigned __int32 v13;
  struct {
    float32x2_t v14[2];
    int v15;
    char v16;
    char gap37_[3];
    char v17;
    char gap41_[3];
    char v18;
    char gap45_[3];
    char v19;
    char gap49_[3];
    char v20;
    char gap53_[3];
    int v21;
  } v14_;
  struct {
    char gap56_[4];
    _BYTE v22[11];
    char gap71_[1];
    __int64 v23;
  } v22_;

  if (*(float*)(a1 + 20) <= 0x0.0p+0f) {
    return 0;
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 216LL) &
       4) == 0) {
    return 0;
  }
  game_daf210(a1);
  v5 = *(_DWORD*)(a1 + 84);
  if (v5 == 0) {
    return 1;
  }
  if (v5 > 4) {
    v6 = 0;
  }
  else {
    v6 = GameData_1a83020[v5 - 1];
  }
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v13 = v6;
    v12 = __cxa_guard_acquire(&GameData_21a60e8);
    v6 = v13;
    if (v12 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      v6 = v13;
    }
  }
  LANES64(v14_.v14[0]).n64_u32[0] = v6;
  v8 = *(_BYTE*)(a1 + 108);
  memset(v22_.v22, 0, sizeof(v22_.v22));
  LOBYTE(v14_.v15) = 0;
  v14_.v16 = 0;
  v14_.v17 = 0;
  v14_.v18 = 0;
  v14_.v19 = 0;
  v14_.v20 = 0;
  v22_.v23 = 0;
  v22_.v22[7] = v8;
  v9 = *(_QWORD*)(a1 + 8);
  LANES64(v14_.v14[1]).n64_u64[0] = GameData_21a60e0;
  v14_.v21 = 1065353216;
  v10 = GameRoutine_d2c6a0(*(
      unsigned int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8LL) + 344LL) +
                     360LL));
  if ((unsigned int)(v10 - 1804569206) < 2 ||
      (unsigned int)(v10 - 1804569020) <= 1) {
    v14_.v15 = 1058642330;
    v14_.v16 = 1;
  }
  *(_QWORD*)(a1 + 48) =
      CharacterModel_d198c0(*(float32x2_t**)(v7 + 344), v14_.v14, 0, 0);
  result = 1;
  *(_BYTE*)(a1 + 108) = 0;
  *(_BYTE*)(a1 + 56) = 1;
  return result;
}

__int64 game_dae200(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v3;
  float32x2_t* v4;
  int v6;
  __int64 v7;
  struct {
    float32x2_t v8[2];
    int v9;
    char v10;
    char gap37_[3];
    char v11;
    char gap41_[3];
    char v12;
    char gap45_[3];
    char v13;
    char gap49_[3];
    char v14;
    char gap53_[3];
    __int64 v15;
    _DWORD v16[2];
    __int64 v17;
  } v8_;

  if (*(float*)(a1 + 20) <= 0x0.0p+0f) {
    return 0;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if ((*(_BYTE*)(v3 + 216) & 2) != 0) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v7 = v3;
    v6 = __cxa_guard_acquire(&GameData_21a60e8);
    v3 = v7;
    if (v6 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      v3 = v7;
    }
  }
  v4 = *(float32x2_t**)(v3 + 344);
  v8_.v11 = 0;
  v8_.v12 = 0;
  v8_.v13 = 0;
  v8_.v14 = 0;
  v8_.v17 = 0;
  v8_.v16[0] = 0;
  *(_DWORD*)((char*)v8_.v16 + 3) = 0;
  LANES64(v8_.v8[1]).n64_u64[0] = GameData_21a60e0;
  LANES64(v8_.v8[0]).n64_u32[0] = -1841313413;
  v8_.v9 = 1045220557;
  v8_.v10 = 1;
  v8_.v15 = 0x3F8000003F000000LL;
  CharacterModel_d198c0(v4, v8_.v8, 0, 0);
  return 1;
}

__int64 game_dae300(float32x2_t* a1)
{
  __int64 v5;
  __int64 v7;
  int v8;
  unsigned __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  bool v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  int v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int32 v30;
  int v31;
  float* v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float32x2_t* v38;
  float32x2_t v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  struct {
    float32x2_t v49;
    float32x2_t v50;
    int v51;
    char v52;
    char gap21_[3];
    char v53;
    char gap25_[3];
    char v54;
    char gap29_[3];
    char v55;
    char gap33_[3];
    char v56;
    char gap37_[3];
    float v57;
    _BYTE v58[11];
    char gap55_[1];
    __int64 v59;
  } v49_;

  if (LANES64(a1[2]).n64_f32[0] <= 0x0.0p+0f) {
    return 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(LANES64(a1[1]).n64_u64[0] + 8) + 8LL);
  if ((*(_BYTE*)(v5 + 216) & 2) == 0) {
    return 0;
  }
  if (LANES64(a1[9]).n64_u8[0] == 1) {
    v7 = *(_QWORD*)(v5 + 344);
    if (*(_QWORD*)(v7 + 352) == LANES64(a1[8]).n64_u64[0]) {
      v8 = GameRoutine_d2cec0(-2);
      if (*(_BYTE*)(v7 + 332) != 1 || *(_DWORD*)(v7 + 328) != v8) {
        *(_DWORD*)(v7 + 328) = v8;
        *(_BYTE*)(v7 + 332) = 1;
      }
    }
    if (LANES64(a1[9]).n64_u8[0] == 1) {
      LANES64(a1[9]).n64_u8[0] = 0;
    }
  }
  v10 = LANES64(a1[1]).n64_u64[0];
  v11 = 0x0.0p+0f;
  v12 = *(float*)(v10 + 376);
  v13 = *(float*)(v10 + 372);
  v14 = *(_QWORD*)(v10 + 8);
  v15 = v13 - v12;
  v16 = sqrtf(
      (float)(PSEUDO_UNFUSED(*(float*)(v10 + 672) * *(float*)(v10 + 672))) +
      (float)(*(float*)(v10 + 668) * *(float*)(v10 + 668)));
  v17 = 0x0.0p+0f;
  if ((float)(v13 - v12) != 0x0.0p+0f) {
    v18 = v16 - v12;
    v19 = 0x1.0000000000000p+0f;
    v20 = v18 / v15;
    if (v20 <= 0x1.0000000000000p+0f) {
      v19 = v20;
    }
    v21 = v20 < 0x0.0p+0f;
    v11 = 0x0.0p+0f;
    if (!v21) {
      v11 = v19;
    }
  }
  v22 = *(float*)(v10 + 380) - v13;
  if (v22 != 0x0.0p+0f) {
    v17 = 0x1.0000000000000p+0f;
    v23 = (float)(v16 - v13) / v22;
    if (v23 <= 0x1.0000000000000p+0f) {
      v17 = v23;
    }
    if (v23 < 0x0.0p+0f) {
      v17 = 0x0.0p+0f;
    }
  }
  v24 = v11 + v17;
  if ((*(_BYTE*)(v14 + 568) & 8) != 0 &&
      (*(_BYTE*)(*(_QWORD*)(v14 + 16) + 128LL) & 0x80) != 0) {
    v24 = 0x1.0000000000000p+1f;
  }
  v25 = *(_QWORD*)(v14 + 8);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  LOBYTE(v49_.v51) = 0;
  v49_.v52 = 0;
  v26 = 0;
  *(_QWORD*)v49_.v58 = 1065353216;
  v27 = LANES64(a1[1]).n64_u64[0];
  v49_.v53 = 0;
  v49_.v54 = 0;
  v49_.v55 = 0;
  v49_.v56 = 0;
  v49_.v59 = 0;
  *(_DWORD*)&v49_.v58[7] = 0;
  v28 = *(_QWORD*)(v27 + 8);
  if ((*(_BYTE*)(v28 + 449) & 1) != 0) {
    goto LABEL_31;
  }
  if ((unsigned int)GameRoutine_d2c6a0(
          *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v28 + 8) + 344LL) + 360LL)) ==
      -54892591) {
    v26 = 1045220557;
  LABEL_31:
    LANES64(v49_.v49).n64_u32[0] = 2051587693;
  LABEL_40:
    v49_.v51 = v26;
    v49_.v52 = 1;
    goto LABEL_41;
  }
  v29 = *(_QWORD*)(*(_QWORD*)(LANES64(a1[1]).n64_u64[0] + 8) + 8LL);
  if (*(_DWORD*)(*(_QWORD*)(v25 + 344) + 360LL) != 2051587693 &&
      (*(_QWORD*)(v29 + 216) & 8LL) != 0) {
    v30 = -818690631;
  }
  else {
    v30 = 2051587693;
  }
  LANES64(v49_.v49).n64_u32[0] = v30;
  v31 = GameRoutine_d2c6a0(*(unsigned int*)(*(_QWORD*)(v29 + 344) + 360LL));
  if ((unsigned int)(v31 - 1804569020) < 2 ||
      (unsigned int)(v31 - 1804569206) < 2) {
    v26 = 1058642330;
    goto LABEL_40;
  }
LABEL_41:
  LANES64(v49_.v50).n64_u32[0] = 0;
  LANES64(v49_.v50).n64_f32[1] = v24;
  v49_.v58[8] = 1;
  v33 = (float*)LANES64(a1[1]).n64_u64[0];
  v34 = v33[94];
  if (v34 == 0x0.0p+0f) {
    v37 = 0x0.0p+0f;
  }
  else {
    v35 = sqrtf((float)(PSEUDO_UNFUSED(v33[168] * v33[168])) +
                (float)(v33[167] * v33[167])) /
          v34;
    v36 = 0x1.0000000000000p+0f;
    if (v35 <= 0x1.0000000000000p+0f) {
      v36 = v35;
    }
    v21 = v35 < 0x0.0p+0f;
    v37 = 0x0.0p+0f;
    if (!v21) {
      v37 = v36;
    }
  }
  v38 = *(float32x2_t**)(v25 + 344);
  v49_.v57 = v33[96] * fmaxf(v37, 0x1.3333340000000p-1f);
  CharacterModel_d198c0(v38, &v49_.v49, 0, 0);
  if (LANES64(a1[3]).n64_u8[4] != 1) {
    return 1;
  }
  LANES64(v39).n64_u64[0] = LANES64(a1[5]).n64_u64[0];
  v40 = LANES64(v39).n64_f32[1];
  v41 = 0x1.0000000000000p+1f;
  if ((float)(vmuls_lane_f32(LANES64(v39).n64_f32[1], v39, 1) +
              (float)(LANES64(v39).n64_f32[0] * LANES64(v39).n64_f32[0])) <
      (float)(vmuls_lane_f32(LANES64(v49_.v50).n64_f32[1], v49_.v50, 1) +
              (float)(LANES64(v49_.v50).n64_f32[0] *
                      LANES64(v49_.v50).n64_f32[0]))) {
    v41 = 0x1.0000000000000p+2f;
  }
  v42 = LANES64(v49_.v50).n64_f32[1] - LANES64(v39).n64_f32[1];
  v43 = *(float*)(*(_QWORD*)(*(_QWORD*)(LANES64(a1[1]).n64_u64[0] + 8) + 8LL) +
                  228LL) *
        v41;
  v44 = LANES64_OF(vsub_f32(v49_.v50, v39)).n64_f32[0];
  if (v44 != 0x0.0p+0f || v42 != 0x0.0p+0f) {
    v45 = sqrtf((float)(PSEUDO_UNFUSED(v42 * v42)) + (float)(v44 * v44));
    v44 = v44 / v45;
    v42 = v42 / v45;
  }
  v46 = v42;
  v47 = fabsf(v43 * fabsf(v44));
  if ((LANES64_OF(vcgt_f32(v39, v49_.v50)).n64_u8[0] & 1) != 0) {
    LANES64(v39).n64_f32[0] = LANES64(v39).n64_f32[0] - v47;
    if (LANES64(v39).n64_f32[0] >= LANES64(v49_.v50).n64_f32[0]) {
      goto LABEL_60;
    }
  LABEL_59:
    LANES64(v39).n64_u32[0] = LANES64(v49_.v50).n64_u32[0];
    goto LABEL_60;
  }
  if ((LANES64_OF(vcgt_f32(v49_.v50, v39)).n64_u8[0] & 1) != 0) {
    LANES64(v39).n64_f32[0] = LANES64(v39).n64_f32[0] + v47;
    if (LANES64(v39).n64_f32[0] > LANES64(v49_.v50).n64_f32[0]) {
      goto LABEL_59;
    }
  }
LABEL_60:
  v48 = fabsf(v43 * fabsf(v46));
  if (LANES64(v39).n64_f32[1] <= LANES64(v49_.v50).n64_f32[1]) {
    if (LANES64(v39).n64_f32[1] >= LANES64(v49_.v50).n64_f32[1]) {
      goto LABEL_66;
    }
    v40 = LANES64(v39).n64_f32[1] + v48;
    if ((float)(LANES64(v39).n64_f32[1] + v48) <=
        LANES64(v49_.v50).n64_f32[1]) {
      goto LABEL_66;
    }
  }
  else {
    v40 = LANES64(v39).n64_f32[1] - v48;
    if ((float)(LANES64(v39).n64_f32[1] - v48) >=
        LANES64(v49_.v50).n64_f32[1]) {
      goto LABEL_66;
    }
  }
  v40 = LANES64(v49_.v50).n64_f32[1];
LABEL_66:
  LANES64(a1[5]).n64_u32[0] = LANES64(v39).n64_u32[0];
  LANES64(a1[5]).n64_f32[1] = v40;
  return 1;
}

__int64 game_dae730(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  float32x2_t* v7;
  __int64 v8;
  float v9;
  int v10;
  int v11;
  __int64 v12;
  struct {
    float32x2_t v13[2];
    char v14;
    char gap33_[3];
    char v15;
    char gap37_[3];
    char v16;
    char gap41_[3];
    char v17;
    char gap45_[3];
    char v18;
    char gap49_[3];
    char v19;
    char gap53_[3];
    __int64 v20;
    _DWORD v21[2];
    __int64 v22;
  } v13_;
  __int64 v25;

  if (*(_BYTE*)(a1 + 109) != 1) {
    return 0;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if ((*(_BYTE*)(v3 + 216) & 2) == 0) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v25 = a1;
    v12 = v3;
    v10 = __cxa_guard_acquire(&GameData_21a60e8);
    v3 = v12;
    v11 = v10;
    a1 = v25;
    if (v11 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      v3 = v12;
      a1 = v25;
    }
  }
  v5 = *(_QWORD*)(a1 + 40);
  v13_.v14 = 0;
  v13_.v15 = 0;
  v6 = a1;
  v13_.v16 = 0;
  v13_.v17 = 0;
  v13_.v18 = 0;
  v13_.v19 = 0;
  v13_.v20 = 0x3F8000003F800000LL;
  v13_.v22 = 0;
  v13_.v21[0] = 0;
  *(_DWORD*)((char*)v13_.v21 + 3) = 0;
  LANES64(v13_.v13[0]).n64_u32[0] = -1596394510;
  v7 = *(float32x2_t**)(v3 + 344);
  LANES64(v13_.v13[1]).n64_u64[0] = v5;
  v8 = CharacterModel_d198c0(v7, v13_.v13, 0, 0);
  v9 = *(float*)(v6 + 44);
  *(_QWORD*)(v6 + 64) = v8;
  *(_BYTE*)(v6 + 72) = 1;
  if (v9 > 0x1.0000000000000p+0f) {
    *(float*)(v6 + 80) = fmaxf(*(float*)(v6 + 80), 0x1.3333340000000p-2f);
  }
  return 1;
}

__int64 game_dae870(__int64 a1)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  unsigned int v6;
  __int64 v8;
  __int64 v9;
  int v10;
  int v12;
  struct {
    float32x2_t v14[2];
    int v15;
    char v16;
    char gap21_[3];
    char v17;
    char gap25_[3];
    char v18;
    char gap29_[3];
    char v19;
    char gap33_[3];
    char v20;
    char gap37_[3];
    int v21;
  } v14_;
  struct {
    char gap40_[4];
    _BYTE v22[11];
    char gap55_[1];
    __int64 v23;
  } v22_;

  if (*(float*)(a1 + 20) <= 0x0.0p+0f) {
    return 0;
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 216LL) &
       2) == 0) {
    return 0;
  }
  game_daf210(a1);
  v4 = *(_DWORD*)(a1 + 84);
  if (v4 <= 1) {
    if (v4 == 0) {
      return 0;
    }
    if (v4 == 1) {
      v6 = 1804569020;
    }
    else {
      v6 = 0;
    }
  }
  else {
    if (v4 == 4) {
      v5 = 1804569207;
    }
    else {
      v5 = 0;
    }
    if (v4 == 3) {
      v5 = 1804569206;
    }
    if (v4 == 2) {
      v6 = 1804569021;
    }
    else {
      v6 = v5;
    }
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if (!GameRoutine_d1cdc0(*(_QWORD*)(v8 + 344), v6)) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 72) == 1) {
    v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                    344LL);
    if (*(_QWORD*)(v9 + 352) == *(_QWORD*)(a1 + 64)) {
      v10 = GameRoutine_d2cec0(-2);
      if (*(_BYTE*)(v9 + 332) != 1 || *(_DWORD*)(v9 + 328) != v10) {
        *(_DWORD*)(v9 + 328) = v10;
        *(_BYTE*)(v9 + 332) = 1;
      }
    }
    if (*(_BYTE*)(a1 + 72) == 1) {
      *(_BYTE*)(a1 + 72) = 0;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  memset(v22_.v22, 0, sizeof(v22_.v22));
  LOBYTE(v14_.v15) = 0;
  v14_.v16 = 0;
  v14_.v17 = 0;
  v14_.v18 = 0;
  v14_.v19 = 0;
  v14_.v20 = 0;
  v22_.v23 = 0;
  LANES64(v14_.v14[0]).n64_u32[0] = v6;
  LANES64(v14_.v14[1]).n64_u64[0] = GameData_21a60e0;
  v14_.v21 = 1065353216;
  v22_.v22[7] = *(_BYTE*)(a1 + 108);
  v12 = GameRoutine_d2c6a0(
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                                        8LL) +
                                             8LL) +
                                  344LL) +
                       360LL));
  if ((unsigned int)(v12 - 1804569206) < 2 ||
      (unsigned int)(v12 - 1804569020) <= 1) {
    v14_.v15 = 1058642330;
    v14_.v16 = 1;
  }
  *(_QWORD*)(a1 + 48) =
      CharacterModel_d198c0(*(float32x2_t**)(v8 + 344), v14_.v14, 0, 0);
  *(_BYTE*)(a1 + 108) = 0;
  *(_BYTE*)(a1 + 56) = 1;
  return 1;
}

__int64 game_daeec0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float32x2_t* v8;
  struct {
    float32x2_t v10[2];
    int v11;
    char v12;
    char gap21_[3];
    char v13;
    char gap25_[3];
    char v14;
    char gap29_[3];
    char v15;
    char gap33_[3];
    char v16;
    char gap37_[3];
    __int64 v17;
  } v10_;
  struct {
    _DWORD v18[2];
    __int64 v19;
  } v18_;

  if (*(_BYTE*)(a1 + 56) == 1) {
    v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                    344LL);
    if (*(_QWORD*)(v1 + 352) == *(_QWORD*)(a1 + 48)) {
      v2 = a1;
      v3 = GameRoutine_d2cec0(-2);
      a1 = v2;
      if (*(_BYTE*)(v1 + 332) != 1 || *(_DWORD*)(v1 + 328) != v3) {
        *(_DWORD*)(v1 + 328) = v3;
        *(_BYTE*)(v1 + 332) = 1;
      }
    }
    if (*(_BYTE*)(a1 + 56) == 1) {
      *(_BYTE*)(a1 + 56) = 0;
    }
  }
  *(_DWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 84) = 0;
  *(_BYTE*)(a1 + 108) = 1;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  v10_.v13 = 0;
  v10_.v14 = 0;
  v10_.v15 = 0;
  v10_.v16 = 0;
  v18_.v19 = 0;
  memset(v18_.v18, 0, 7);
  LANES64(v10_.v10[1]).n64_u64[0] = GameData_21a60e0;
  v10_.v17 = 0x3F8000003F800000LL;
  v6 = *(_QWORD*)(v5 + 16);
  if ((*(_BYTE*)(v6 + 385) & 0x40) != 0) {
    v7 = 0;
  }
  else {
    v7 = *(_QWORD*)(v6 + 468);
  }
  if ((v7 & 0x100000000LL) == 0) {
    if (GameRoutine_d2d4e0(*(unsigned int*)(*(_QWORD*)(v5 + 344) + 360LL))) {
      LODWORD(v7) = 1257611790;
    }
    else if ((*(_BYTE*)(*(_QWORD*)(v5 + 16) + 384LL) & 0x10) != 0) {
      LODWORD(v7) = -1101902990;
    }
    else if ((*(_BYTE*)(v5 + 216) & 2) != 0) {
      LODWORD(v7) = 1669996436;
    }
    else {
      LODWORD(v7) = -574916402;
    }
  }
  v8 = *(float32x2_t**)(v5 + 344);
  LANES64(v10_.v10[0]).n64_u32[0] = v7;
  v10_.v12 = 1;
  BYTE2(v18_.v18[1]) = 1;
  v10_.v11 = 1051361018;
  CharacterModel_d198c0(v8, v10_.v10, 0, 0);
  return 1;
}

__int64 game_daf080(__int64 a1, unsigned __int32 a2, unsigned __int64* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  bool v17;
  float32x2_t* v18;
  int v20;
  int v21;
  unsigned __int32 v22;
  unsigned __int64* v23;
  __int64 v24;
  __int64 v25;
  struct {
    float32x2_t v26[2];
    float v27;
    char v28;
    char gap53_[3];
    char v29;
    char gap57_[3];
    char v30;
    char gap61_[3];
    char v31;
    char gap65_[3];
    char v32;
    char gap69_[3];
    float v33;
    _BYTE v34[11];
    char gap87_[1];
    __int64 v35;
  } v26_;

  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v24 = v3;
    v25 = a1;
    v23 = a3;
    v22 = a2;
    v20 = __cxa_guard_acquire(&GameData_21a60e8);
    a3 = v23;
    v3 = v24;
    a2 = v22;
    v21 = v20;
    a1 = v25;
    if (v21 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      a3 = v23;
      v3 = v24;
      a2 = v22;
      a1 = v25;
    }
  }
  v4 = *a3;
  v26_.v29 = 0;
  v26_.v30 = 0;
  v26_.v31 = 0;
  v26_.v32 = 0;
  v26_.v35 = 0;
  LANES64(v26_.v26[0]).n64_u32[0] = a2;
  *(_QWORD*)v26_.v34 = 1065353216;
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(float*)(v5 + 672);
  *(_DWORD*)&v26_.v34[7] = 256;
  LANES64(v26_.v26[1]).n64_u64[0] = v4;
  v7 = *(float*)(v5 + 668);
  v8 = 0x0.0p+0f;
  v9 = *(float*)(v5 + 376);
  v10 = *(_QWORD*)(v5 + 8);
  v26_.v28 = 1;
  v11 = 0x1.3333340000000p-2f;
  v12 = sqrtf((float)(PSEUDO_UNFUSED(v6 * v6)) + (float)(v7 * v7));
  v13 = 0x0.0p+0f;
  if (*(_BYTE*)(v10 + 449) != 0) {
    v11 = 0x0.0p+0f;
  }
  v26_.v27 = v11;
  v14 = *(float*)(v5 + 380);
  if (v9 != 0x0.0p+0f) {
    v15 = v12 / v9;
    v16 = 0x1.0000000000000p+0f;
    if (v15 <= 0x1.0000000000000p+0f) {
      v16 = v15;
    }
    v17 = v15 < 0x0.0p+0f;
    v13 = 0x0.0p+0f;
    if (!v17) {
      v13 = v16;
    }
  }
  if (v14 > 0x0.0p+0f && v12 > v14) {
    v8 = fminf(fmaxf((float)(v12 - v14) / v14, 0x0.0p+0f),
               0x1.0000000000000p+0f);
  }
  v18 = *(float32x2_t**)(v3 + 344);
  v26_.v33 =
      (float)(fmaxf(v13, 0x1.3333340000000p-1f) + v8) * *(float*)(v5 + 384);
  return CharacterModel_d198c0(v18, v26_.v26, 0, 0);
}

void game_daf210(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  float v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;
  int v13;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL);
  v3 = fmodf_alt1(*(float*)(v2 + 32) - *(float*)(v2 + 36),
                  0x1.921fb60000000p+2f);
  if (v3 >= 0x0.0p+0f) {
    v4 = v3 + 0x0.0p+0f;
  }
  else {
    v4 = (float)(v3 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v4 > 0x1.921fb60000000p+1f) {
    v4 = v4 + -0x1.921fb60000000p+2f;
  }
  if (fabsf(v4) >= 0x1.41b2f80000000p-3f) {
    if (v4 >= -0x1.921fb60000000p+0f) {
      if (v4 >= 0x0.0p+0f) {
        v5 = 1;
        if (v4 >= 0x1.921fb60000000p+0f) {
          v6 = 180;
        }
        else {
          v6 = 90;
        }
      }
      else {
        v5 = -1;
        v6 = -90;
      }
    }
    else {
      v5 = -1;
      v6 = -180;
    }
    v7 = *(_DWORD*)(a1 + 104);
    v8 = (v7 >> 31) | 1;
    if (v7 >= 0) {
      v9 = *(_DWORD*)(a1 + 104);
    }
    else {
      v9 = -v7;
    }
    v10 = v8 != v5 && v7 != 0;
    if (v6 >= 0) {
      v11 = v6;
    }
    else {
      v11 = -v6;
    }
    if (v9 < v11 || v8 != v5) {
      *(_DWORD*)(a1 + 104) = v6;
      *(_DWORD*)(a1 + 84) = 0;
      if (v6 > 89) {
        if (v6 == 90) {
          v13 = 1;
        }
        else {
          v13 = 2;
        }
      }
      else if (v6 == -180) {
        v13 = 4;
      }
      else {
        v13 = 3;
      }
      *(_DWORD*)(a1 + 84) = v13;
      *(_BYTE*)(a1 + 108) = 1;
      if (v10) {
        *(_DWORD*)(v2 + 168) = 0;
      }
    }
  }
  else {
    *(_DWORD*)(a1 + 104) = 0;
    *(_DWORD*)(a1 + 84) = 0;
    *(_BYTE*)(a1 + 108) = 1;
  }
}

void game_db09e0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  GameData_2213850 = (__int64)"hub::schedule";
  GameData_2213858 = (__int64)hub_schedule_GameRouteToRouteMsg;
  GameData_2213860 = 0;
  GameData_2213868 = 0;
  v0 = GameData_212bf18[0];
  GameData_22138c0 = (__int64)"int GetPart()";
  GameData_22138c8 = (__int64)&GameData_2213850;
  GameData_2213870 = 0;
  GameData_2213878 = 2;
  GameData_2213890 = (__int64)"hub::schedule";
  GameData_2213898 = (__int64)game_script_hub_schedule_GetPart;
  GameData_22138a0 = 0;
  GameData_22138a8 = 0;
  GameData_22138b0 = 0;
  GameData_22138b8 = 2;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_2213840;
  GameData_22138e0 = 0;
  GameData_22138e8 = 0;
  GameData_22138f0 = 0;
  GameData_22138f8 = 2;
  GameData_22138d0 = (__int64)"hub::schedule";
  GameData_22138d8 = (__int64)game_script_hub_schedule_GetChapter;
  GameData_2213840 = (__int64)"hub::schedule";
  GameData_2213848 = v1;
  v2 = *v0;
  GameData_2213880 = (__int64)"string GameRouteToRouteMsg(int gameRoute)";
  GameData_2213888 = v2;
  GameData_2213900 = (__int64)"int GetChapter()";
  GameData_2213908 = (__int64)&GameData_2213890;
  v3 = *GameData_212bf20[0];
  *GameData_212bf20[0] = (__int64)&GameData_2213910;
  GameData_2213910 = (__int64)"hub::schedule";
  GameData_2213918 = (__int64)"Date";
  GameData_2213920 = 0x1F0200000018LL;
  GameData_2213928 = v3;
  GameData_2213930 = (__int64)"hub::schedule";
  GameData_2213938 = (__int64)"Date";
  GameData_2213958 = 0;
  GameData_2213950 = 0;
  GameData_2213960 = 2;
  GameData_2213978 = *GameData_212bf30[0];
  GameData_2213940 = (__int64)game_script_hub_schedule_ConstructDate;
  GameData_2213948 = 0;
  GameData_2213968 = (__int64)"void f()";
  GameData_2213970 = 0x400000000LL;
  *GameData_212bf30[0] = (__int64)&GameData_2213980;
  GameData_2213980 = (__int64)"hub::schedule";
  GameData_2213988 = (__int64)"Date";
  GameData_22139a8 = 0;
  GameData_22139a0 = 0;
  GameData_22139b0 = 2;
  GameData_22139b8 = (__int64)"void f()";
  GameData_2213990 = (__int64)game_script_hub_schedule_DestructDate;
  GameData_2213998 = 0;
  GameData_22139c0 = 0x400000002LL;
  GameData_22139c8 = (__int64)&GameData_2213930;
  GameData_22139d0 = (__int64)"hub::schedule";
  GameData_22139d8 = (__int64)"Date";
  GameData_22139f8 = 0;
  GameData_22139e8 = 0;
  GameData_22139f0 = 0;
  v4 = *GameData_212bf38[0];
  *GameData_212bf38[0] = (__int64)&GameData_22139d0;
  GameData_22139e0 = (__int64)game_script_hub_schedule_AssignDate;
  GameData_2213a00 = 3;
  GameData_2213a10 = 3;
  GameData_2213a18 = v4;
  GameData_2213a08 = (__int64)"Date &opAssign(const Date &)";
  GameData_2213a20 = (__int64)"hub::schedule";
  GameData_2213a28 = (__int64)"Date";
  GameData_2213a38 = 0;
  GameData_2213a40 = *(_QWORD*)GameData_212bf28[0];
  GameData_2213a30 = (__int64)"int year";
  GameData_2213a68 = (__int64)&GameData_2213a20;
  GameData_2213a48 = (__int64)"hub::schedule";
  GameData_2213a50 = (__int64)"Date";
  GameData_2213a58 = (__int64)"int month";
  GameData_2213a60 = 4;
  GameData_2213a90 = (__int64)&GameData_2213a48;
  GameData_2213a70 = (__int64)"hub::schedule";
  GameData_2213a78 = (__int64)"Date";
  GameData_2213a80 = (__int64)"int day";
  GameData_2213a88 = 8;
  GameData_2213ab8 = (__int64)&GameData_2213a70;
  GameData_2213a98 = (__int64)"hub::schedule";
  GameData_2213aa0 = (__int64)"Date";
  GameData_2213aa8 = (__int64)"int hour";
  GameData_2213ab0 = 12;
  GameData_2213ae0 = (__int64)&GameData_2213a98;
  GameData_2213ac0 = (__int64)"hub::schedule";
  GameData_2213ac8 = (__int64)"Date";
  GameData_2213ad0 = (__int64)"int minute";
  GameData_2213ad8 = 16;
  GameData_2213ae8 = (__int64)"hub::schedule";
  GameData_2213af0 = (__int64)"Date";
  *(_QWORD*)GameData_212bf28[0] = &GameData_2213ae8;
  GameData_2213b08 = (__int64)&GameData_2213ac0;
  GameData_2213af8 = (__int64)"int second";
  GameData_2213b00 = 20;
  GameData_2213b10 = (__int64)"hub::schedule";
  GameData_2213b18 = (__int64)hub_schedule_AddDateEventTiny;
  GameData_2213b30 = 0;
  GameData_2213b20 = 0;
  GameData_2213b28 = 0;
  GameData_2213b38 = 2;
  GameData_2213c10 = (__int64)"hub::schedule";
  GameData_2213c18 = (__int64)game_script_hub_schedule_FastSetDate;
  GameData_2213c30 = 0;
  GameData_2213c20 = 0;
  GameData_2213c28 = 0;
  GameData_2213c38 = 2;
  GameData_2213b40 =
      (__int64)"void AddDateEventTiny(Date& date, const string& funcName)";
  GameData_2213b48 = (__int64)&GameData_22138d0;
  GameData_2213b50 = (__int64)"hub::schedule";
  GameData_2213b58 = (__int64)game_script_hub_schedule_ProgressHour;
  GameData_2213b70 = 0;
  GameData_2213b60 = 0;
  GameData_2213b68 = 0;
  GameData_2213b78 = 2;
  GameData_2213b80 = (__int64)"void ProgressHour(int hour)";
  GameData_2213b88 = (__int64)&GameData_2213b10;
  GameData_2213b90 = (__int64)"hub::schedule";
  GameData_2213b98 = (__int64)game_script_hub_schedule_ProgressMinute;
  GameData_2213bb0 = 0;
  GameData_2213ba0 = 0;
  GameData_2213ba8 = 0;
  GameData_2213bb8 = 2;
  GameData_2213bc0 = (__int64)"void ProgressMinute(int minute)";
  GameData_2213bc8 = (__int64)&GameData_2213b50;
  GameData_2213bd0 = (__int64)"hub::schedule";
  GameData_2213bd8 = (__int64)HubScheduleNatives_dafab0;
  GameData_2213bf0 = 0;
  GameData_2213be0 = 0;
  GameData_2213be8 = 0;
  GameData_2213bf8 = 2;
  GameData_2213c00 = (__int64)"void ProgressSetDate(Date& date)";
  GameData_2213c08 = (__int64)&GameData_2213b90;
  GameData_2213c40 = (__int64)"void FastSetDate(Date& date)";
  GameData_2213c48 = (__int64)&GameData_2213bd0;
  GameData_2213c70 = 0;
  GameData_2213c60 = 0;
  GameData_2213c68 = 0;
  GameData_2213c78 = 2;
  GameData_2213c50 = (__int64)"hub::schedule";
  GameData_2213c58 = (__int64)game_script_hub_schedule_DisplayProgress;
  GameData_2213c80 = (__int64)"void DisplayProgress(Date& date)";
  GameData_2213c88 = (__int64)&GameData_2213c10;
  GameData_2213c90 = (__int64)"hub::schedule";
  GameData_2213c98 = (__int64)game_script_hub_schedule_CancelProgress;
  GameData_2213cb0 = 0;
  GameData_2213ca0 = 0;
  GameData_2213ca8 = 0;
  GameData_2213cb8 = 2;
  GameData_2213d90 = (__int64)"hub::schedule";
  GameData_2213d98 = (__int64)hub_schedule_StringToDate;
  GameData_2213db0 = 0;
  GameData_2213da0 = 0;
  GameData_2213da8 = 0;
  GameData_2213db8 = 2;
  GameData_2213cc0 = (__int64)"void CancelProgress()";
  GameData_2213cc8 = (__int64)&GameData_2213c50;
  GameData_2213cd0 = (__int64)"hub::schedule";
  GameData_2213cd8 = (__int64)game_script_hub_schedule_GetDate;
  GameData_2213cf0 = 0;
  GameData_2213ce0 = 0;
  GameData_2213ce8 = 0;
  GameData_2213cf8 = 2;
  GameData_2213d00 = (__int64)"Date GetDate()";
  GameData_2213d08 = (__int64)&GameData_2213c90;
  GameData_2213d10 = (__int64)"hub::schedule";
  GameData_2213d18 = (__int64)game_script_hub_schedule_CompareDate;
  GameData_2213d30 = 0;
  GameData_2213d20 = 0;
  GameData_2213d28 = 0;
  GameData_2213d38 = 2;
  GameData_2213d40 = (__int64)"int CompareDate(Date& date1, Date& date2)";
  GameData_2213d48 = (__int64)&GameData_2213cd0;
  GameData_2213d50 = (__int64)"hub::schedule";
  GameData_2213d58 = (__int64)game_script_hub_schedule_IsSectionFree;
  GameData_2213d70 = 0;
  GameData_2213d60 = 0;
  GameData_2213d68 = 0;
  GameData_2213d78 = 2;
  GameData_2213d80 = (__int64)"bool IsSectionFree()";
  GameData_2213d88 = (__int64)&GameData_2213d10;
  GameData_2213dc0 = (__int64)"Date StringToDate(string str)";
  GameData_2213dc8 = (__int64)&GameData_2213d50;
  GameData_2213df0 = 0;
  GameData_2213de0 = 0;
  GameData_2213de8 = 0;
  GameData_2213df8 = 2;
  GameData_2213dd0 = (__int64)"hub::schedule";
  GameData_2213dd8 = (__int64)game_script_hub_schedule_IsZoneNoon;
  GameData_2213e00 = (__int64)"bool IsZoneNoon()";
  GameData_2213e08 = (__int64)&GameData_2213d90;
  GameData_2213e10 = (__int64)"hub::schedule";
  GameData_2213e18 = (__int64)game_script_hub_schedule_IsZoneNight;
  GameData_2213e30 = 0;
  GameData_2213e20 = 0;
  GameData_2213e28 = 0;
  GameData_2213e38 = 2;
  GameData_2213e40 = (__int64)"bool IsZoneNight()";
  GameData_2213e48 = (__int64)&GameData_2213dd0;
  GameData_2213e50 = (__int64)"hub::schedule";
  GameData_2213e58 = (__int64)game_script_hub_schedule_GetCycleIndex;
  GameData_2213e70 = 0;
  GameData_2213e60 = 0;
  GameData_2213e68 = 0;
  GameData_2213e78 = 2;
  GameData_2213e80 = (__int64)"int GetCycleIndex()";
  GameData_2213e88 = (__int64)&GameData_2213e10;
  GameData_2213e90 = (__int64)"hub::schedule";
  GameData_2213e98 = (__int64)game_script_hub_schedule_GetMonth;
  GameData_2213eb0 = 0;
  GameData_2213ea0 = 0;
  GameData_2213ea8 = 0;
  GameData_2213eb8 = 2;
  GameData_2213ec0 = (__int64)"int GetMonth()";
  GameData_2213ec8 = (__int64)&GameData_2213e50;
  GameData_2213ed0 = (__int64)"hub::schedule";
  GameData_2213ed8 = (__int64)HubScheduleNatives_db06b0;
  GameData_2213ef0 = 0;
  GameData_2213ee0 = 0;
  GameData_2213ee8 = 0;
  GameData_2213ef8 = 2;
  GameData_2213f00 = (__int64)"bool IsWeekString(string weekString)";
  GameData_2213f08 = (__int64)&GameData_2213e90;
  *v0 = (__int64)&GameData_2213f10;
  GameData_2213f30 = 0;
  GameData_2213f20 = 0;
  GameData_2213f28 = 0;
  GameData_2213f38 = 2;
  GameData_2213f10 = (__int64)"hub::schedule";
  GameData_2213f18 = (__int64)game_script_hub_schedule_ProgressCycle;
  GameData_2213f40 = (__int64)"void ProgressCycle()";
  GameData_2213f48 = (__int64)&GameData_2213ed0;
}

void game_e146a0()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_2215728 = (__int64)"hub::talk";
  GameData_2215730 = (__int64)game_script_hub_talk_StorePosure;
  GameData_2215738 = 0;
  GameData_2215740 = 0;
  v0 = GameData_212bf18[0];
  GameData_2215768 = (__int64)"hub::talk";
  GameData_2215770 = (__int64)game_script_hub_talk_StorePosureCharaHash;
  GameData_2215748 = 0;
  GameData_2215750 = 2;
  GameData_2215778 = 0;
  GameData_2215780 = 0;
  GameData_2215788 = 0;
  GameData_2215790 = 2;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_2215718;
  GameData_2215798 =
      (__int64)"void StorePosureCharaHash(as_u64 charaGlobalHash)";
  GameData_22157a0 = (__int64)&GameData_2215728;
  GameData_22157b8 = 0;
  GameData_22157c0 = 0;
  GameData_22157c8 = 0;
  GameData_22157d0 = 2;
  GameData_22157a8 = (__int64)"hub::talk";
  GameData_22157b0 = (__int64)game_script_hub_talk_RestorePosure;
  GameData_22157f8 = 0;
  GameData_2215800 = 0;
  GameData_2215808 = 0;
  GameData_2215810 = 2;
  GameData_2215718 = (__int64)"hub::talk";
  GameData_2215720 = v1;
  v2 = *v0;
  GameData_2215758 = (__int64)"void StorePosure()";
  GameData_2215760 = v2;
  GameData_22157d8 = (__int64)"void RestorePosure()";
  GameData_22157e0 = (__int64)&GameData_2215768;
  GameData_22157e8 = (__int64)"hub::talk";
  GameData_22157f0 = (__int64)game_script_hub_talk_CommitRestore;
  GameData_2215818 = (__int64)"void CommitRestore(float endCameraSec)";
  GameData_2215820 = (__int64)&GameData_22157a8;
  GameData_2215848 = 0;
  GameData_2215838 = 0;
  GameData_2215840 = 0;
  GameData_2215850 = 2;
  GameData_2215968 = (__int64)"hub::talk";
  GameData_2215970 = (__int64)game_script_hub_talk_ShowYesNoDialogArg;
  GameData_2215988 = 0;
  GameData_2215978 = 0;
  GameData_2215980 = 0;
  GameData_2215990 = 2;
  GameData_2215828 = (__int64)"hub::talk";
  GameData_2215830 = (__int64)game_script_hub_talk_OnTalkCameraStateGroup;
  GameData_2215858 = (__int64)"void OnTalkCameraStateGroup()";
  GameData_2215860 = (__int64)&GameData_22157e8;
  GameData_2215868 = (__int64)"hub::talk";
  GameData_2215870 = (__int64)game_script_hub_talk_CreateTalkWindow;
  GameData_2215888 = 0;
  GameData_2215878 = 0;
  GameData_2215880 = 0;
  GameData_2215890 = 2;
  GameData_2215898 = (__int64)"void CreateTalkWindow(const string& text)";
  GameData_22158a0 = (__int64)&GameData_2215828;
  GameData_22158a8 = (__int64)"hub::talk";
  GameData_22158b0 = (__int64)game_script_hub_talk_IsActiveSelectMenu;
  GameData_22158c8 = 0;
  GameData_22158b8 = 0;
  GameData_22158c0 = 0;
  GameData_22158d0 = 2;
  GameData_22158d8 = (__int64)"bool IsActiveSelectMenu()";
  GameData_22158e0 = (__int64)&GameData_2215868;
  GameData_22158e8 = (__int64)"hub::talk";
  GameData_22158f0 = (__int64)game_script_hub_talk_IsYesNoDialogResult;
  GameData_2215908 = 0;
  GameData_22158f8 = 0;
  GameData_2215900 = 0;
  GameData_2215910 = 2;
  GameData_2215918 = (__int64)"bool IsYesNoDialogResult()";
  GameData_2215920 = (__int64)&GameData_22158a8;
  GameData_2215928 = (__int64)"hub::talk";
  GameData_2215930 = (__int64)game_script_hub_talk_ShowYesNoDialog;
  GameData_2215948 = 0;
  GameData_2215938 = 0;
  GameData_2215940 = 0;
  GameData_2215950 = 2;
  GameData_2215958 = (__int64)"void ShowYesNoDialog(const string& title, const "
                              "string& decide_se=\"\")";
  GameData_2215960 = (__int64)&GameData_22158e8;
  GameData_2215998 = (__int64)"void ShowYesNoDialogArg(const string& title, "
                              "const string& arg1)";
  GameData_22159a0 = (__int64)&GameData_2215928;
  GameData_22159c8 = 0;
  GameData_22159b8 = 0;
  GameData_22159c0 = 0;
  GameData_22159d0 = 2;
  GameData_22159a8 = (__int64)"hub::talk";
  GameData_22159b0 = (__int64)game_script_hub_talk_ShowYesNoDialogArg2;
  GameData_22159d8 = (__int64)"void ShowYesNoDialogArg2(const string& title, "
                              "const string& arg1, const string& arg2)";
  GameData_22159e0 = (__int64)&GameData_2215968;
  GameData_22159e8 = (__int64)"hub::talk";
  GameData_22159f0 =
      (__int64)game_script_hub_talk_ShowYesNoDialogWithYesNoLabel;
  GameData_2215a08 = 0;
  GameData_22159f8 = 0;
  GameData_2215a00 = 0;
  GameData_2215a10 = 2;
  GameData_2215a18 =
      (__int64)"void ShowYesNoDialogWithYesNoLabel(const string& title, const "
               "string& yesLabel, const string& noLabel)";
  GameData_2215a20 = (__int64)&GameData_22159a8;
  GameData_2215a28 = (__int64)"hub::talk";
  GameData_2215a30 = (__int64)game_script_hub_talk_ShowChoiceMenu;
  GameData_2215a48 = 0;
  GameData_2215a38 = 0;
  GameData_2215a40 = 0;
  GameData_2215a50 = 2;
  GameData_2215a58 = (__int64)"void ShowChoiceMenu( array<string>& mids  )";
  GameData_2215a60 = (__int64)&GameData_22159e8;
  GameData_2215a68 = (__int64)"hub::talk";
  GameData_2215a70 = (__int64)game_script_hub_talk_GetChoiceMenuResult;
  GameData_2215a88 = 0;
  GameData_2215a78 = 0;
  GameData_2215a80 = 0;
  GameData_2215a90 = 2;
  GameData_2215a98 = (__int64)"int GetChoiceMenuResult()";
  GameData_2215aa0 = (__int64)&GameData_2215a28;
  GameData_2215aa8 = (__int64)"hub::talk";
  GameData_2215ab0 = (__int64)game_script_hub_talk_ExitSelectMenu;
  GameData_2215ac8 = 0;
  GameData_2215ab8 = 0;
  GameData_2215ac0 = 0;
  GameData_2215ad0 = 2;
  GameData_2215ad8 = (__int64)"void ExitSelectMenu()";
  GameData_2215ae0 = (__int64)&GameData_2215a68;
  *v0 = (__int64)&GameData_2215ae8;
  GameData_2215b08 = 0;
  GameData_2215af8 = 0;
  GameData_2215b00 = 0;
  GameData_2215b10 = 2;
  GameData_2215ae8 = (__int64)"hub::talk";
  GameData_2215af0 = (__int64)game_script_hub_talk_IsExistEventTalkedLabels;
  GameData_2215b18 =
      (__int64)"bool IsExistEventTalkedLabels(const string& mid)";
  GameData_2215b20 = (__int64)&GameData_2215aa8;
}

void game_e196a0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_2215b38 = (__int64)"hub::init";
  GameData_2215b40 = (__int64)game_script_hub_init_ClearGroupIdDisposCharacter;
  GameData_2215b48 = 0;
  GameData_2215b50 = 0;
  v0 = GameData_212bf18[0];
  GameData_2215b78 = (__int64)"hub::init";
  GameData_2215b80 = (__int64)game_script_hub_init_PushGroupIdDisposCharacter;
  GameData_2215b58 = 0;
  GameData_2215b60 = 2;
  GameData_2215b88 = 0;
  GameData_2215b90 = 0;
  GameData_2215b98 = 0;
  GameData_2215ba0 = 2;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_2215b28;
  GameData_2215ba8 = (__int64)"void PushGroupIdDisposCharacter(const string& "
                              "areaName, const string& groupId)";
  GameData_2215bb0 = (__int64)&GameData_2215b38;
  GameData_2215bc8 = 0;
  GameData_2215bd0 = 0;
  GameData_2215bd8 = 0;
  GameData_2215be0 = 2;
  GameData_2215bb8 = (__int64)"hub::init";
  GameData_2215bc0 =
      (__int64)game_script_hub_init_PushGroupIdDisposCharacterAll;
  GameData_2215c08 = 0;
  GameData_2215c10 = 0;
  GameData_2215c18 = 0;
  GameData_2215c20 = 2;
  GameData_2215b28 = (__int64)"hub::init";
  GameData_2215b30 = v1;
  v2 = *v0;
  GameData_2215b68 =
      (__int64)"void ClearGroupIdDisposCharacter(const string& areaName)";
  GameData_2215b70 = v2;
  GameData_2215be8 =
      (__int64)"void PushGroupIdDisposCharacterAll(const string& groupId)";
  GameData_2215bf0 = (__int64)&GameData_2215b78;
  GameData_2215bf8 = (__int64)"hub::init";
  GameData_2215c00 = (__int64)game_script_hub_init_SetCheckEnableBuildPerson;
  GameData_2215c28 = (__int64)"void SetCheckEnableBuildPerson(bool isEnable)";
  GameData_2215c30 = (__int64)&GameData_2215bb8;
  GameData_2215c58 = 0;
  GameData_2215c48 = 0;
  GameData_2215c50 = 0;
  GameData_2215c60 = 2;
  GameData_2215c38 = (__int64)"hub::init";
  GameData_2215c40 =
      (__int64)game_script_hub_init_DisableSituationDisposCharacter;
  GameData_2215c68 = (__int64)"void DisableSituationDisposCharacter()";
  GameData_2215c70 = (__int64)&GameData_2215bf8;
  GameData_2215c78 = (__int64)"hub::init";
  GameData_2215c80 = (__int64)hub_init_OverrideInitLocator;
  GameData_2215c98 = 0;
  GameData_2215c88 = 0;
  GameData_2215c90 = 0;
  GameData_2215ca0 = 2;
  GameData_2215ca8 =
      (__int64)"void OverrideInitLocator(const string& lctLabel)";
  GameData_2215cb0 = (__int64)&GameData_2215c38;
  GameData_2215cb8 = (__int64)"hub::init";
  GameData_2215cc0 = (__int64)game_script_hub_init_RegisterTimelineEventFunc;
  GameData_2215cd8 = 0;
  GameData_2215cc8 = 0;
  GameData_2215cd0 = 0;
  GameData_2215ce0 = 2;
  GameData_2215ce8 =
      (__int64)"void RegisterTimelineEventFunc( array<string>& arg )";
  GameData_2215cf0 = (__int64)&GameData_2215c78;
  GameData_2215cf8 = (__int64)"hub::init";
  GameData_2215d00 = (__int64)game_script_hub_init_SetDestinationShowType;
  GameData_2215d18 = 0;
  GameData_2215d08 = 0;
  GameData_2215d10 = 0;
  GameData_2215d20 = 2;
  GameData_2215d28 = (__int64)"void SetDestinationShowType(const string& mode)";
  GameData_2215d30 = (__int64)&GameData_2215cb8;
  GameData_2215d38 = (__int64)"hub::init";
  GameData_2215d40 = (__int64)game_script_hub_init_SetOverrideLoadVariationId;
  GameData_2215d58 = 0;
  GameData_2215d48 = 0;
  GameData_2215d50 = 0;
  GameData_2215d60 = 2;
  GameData_2215d68 =
      (__int64)"void SetOverrideLoadVariationId(string variationId)";
  GameData_2215d70 = (__int64)&GameData_2215cf8;
  *v0 = (__int64)&GameData_2215d78;
  GameData_2215d98 = 0;
  GameData_2215d88 = 0;
  GameData_2215d90 = 0;
  GameData_2215da0 = 2;
  GameData_2215d78 = (__int64)"hub::init";
  GameData_2215d80 = (__int64)game_script_hub_init_ChangeExLightingHades;
  GameData_2215da8 = (__int64)"void ChangeExLightingHades()";
  GameData_2215db0 = (__int64)&GameData_2215d38;
}

void game_e5c8f0()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  GameData_22162c0 = (__int64)"hub::locator";
  GameData_22162c8 = (__int64)"LocatorHandle";
  GameData_22162e0 = (__int64)"hub::locator";
  GameData_22162e8 = (__int64)"LocatorHandle";
  v0 = GameData_212bf48[0];
  GameData_22162f0 = (__int64)game_script_hub_locator_Construct;
  GameData_22162f8 = 0;
  v1 = *GameData_212bf20[0];
  *GameData_212bf20[0] = (__int64)&GameData_22162c0;
  v2 = GameData_212bf30[0];
  GameData_2216300 = 0;
  GameData_2216308 = 0;
  GameData_2216310 = 2;
  GameData_22162d0 = 0x1F0200000020LL;
  GameData_22162d8 = v1;
  v3 = *GameData_212bf30[0];
  GameData_2216318 = (__int64)"void f()";
  GameData_2216320 = 0x400000000LL;
  GameData_2216328 = v3;
  GameData_2216370 = 0x400000000LL;
  GameData_2216378 = (__int64)&GameData_22162e0;
  v4 = *v0;
  *v0 = (__int64)&GameData_22162b0;
  GameData_2216330 = (__int64)"hub::locator";
  GameData_2216338 = (__int64)"LocatorHandle";
  GameData_2216358 = 0;
  GameData_2216348 = 0;
  GameData_2216350 = 0;
  GameData_2216360 = 2;
  GameData_22162b0 = (__int64)"hub::locator";
  GameData_22162b8 = v4;
  GameData_2216340 = (__int64)game_script_hub_locator_CopyConstruct;
  GameData_2216368 = (__int64)"void f( const LocatorHandle& )";
  GameData_2216390 = (__int64)game_script_hub_locator_Destruct;
  *v2 = (__int64)&GameData_2216380;
  GameData_2216380 = (__int64)"hub::locator";
  GameData_2216388 = (__int64)"LocatorHandle";
  GameData_22163a8 = 0;
  GameData_2216398 = 0;
  GameData_22163a0 = 0;
  GameData_22163b0 = 2;
  GameData_22163b8 = (__int64)"void f()";
  GameData_22163c0 = 0x400000002LL;
  GameData_22163c8 = (__int64)&GameData_2216330;
  GameData_2216408 = (__int64)"LocatorHandle &opAssign(const LocatorHandle &)";
  GameData_22163d0 = (__int64)"hub::locator";
  GameData_22163d8 = (__int64)"LocatorHandle";
  GameData_22163f8 = 0;
  GameData_22163e8 = 0;
  GameData_22163f0 = 0;
  GameData_2216468 = (__int64)&GameData_22163d0;
  GameData_2216420 = (__int64)"hub::locator";
  GameData_2216428 = (__int64)"LocatorHandle";
  GameData_2216448 = 0;
  GameData_2216438 = 0;
  GameData_2216440 = 0;
  GameData_2216418 = *GameData_212bf38[0];
  GameData_22163e0 = (__int64)game_script_hub_locator_Assign;
  GameData_2216400 = 3;
  GameData_2216410 = 3;
  GameData_2216450 = 3;
  GameData_2216460 = 3;
  GameData_2216430 = (__int64)game_script_hub_locator_Equals;
  GameData_2216458 = (__int64)"bool opEquals(const LocatorHandle &)";
  GameData_22164b8 = (__int64)&GameData_2216420;
  *GameData_212bf38[0] = (__int64)&GameData_2216470;
  GameData_2216470 = (__int64)"hub::locator";
  GameData_2216478 = (__int64)"LocatorHandle";
  GameData_2216498 = 0;
  GameData_2216488 = 0;
  GameData_2216490 = 0;
  GameData_22164a0 = 3;
  GameData_22164b0 = 3;
  GameData_22164a8 = (__int64)"bool IsValid(void) const";
  GameData_2216480 = (__int64)game_script_hub_character_IsValid_ptr;
  GameData_22164c0 = (__int64)"hub::locator";
  GameData_22164c8 = (__int64)game_script_hub_locator_GetHandleLabel;
  GameData_22164e0 = 0;
  GameData_22164d0 = 0;
  GameData_22164d8 = 0;
  GameData_22164e8 = 2;
  GameData_22165c0 = (__int64)"hub::locator";
  GameData_22165c8 = (__int64)game_script_hub_locator_GetGlobalHash;
  GameData_22165e0 = 0;
  GameData_22165d0 = 0;
  GameData_22165d8 = 0;
  GameData_22165e8 = 2;
  v5 = *GameData_212bf18[0];
  GameData_22164f0 =
      (__int64)"LocatorHandle GetHandleLabel(const string& label)";
  GameData_22164f8 = v5;
  GameData_2216500 = (__int64)"hub::locator";
  GameData_2216508 = (__int64)game_script_hub_locator_GetHandleGlobalHash;
  GameData_2216520 = 0;
  GameData_2216510 = 0;
  GameData_2216518 = 0;
  GameData_2216528 = 2;
  GameData_2216530 =
      (__int64)"LocatorHandle GetHandleGlobalHash(as_u64 globalHash)";
  GameData_2216538 = (__int64)&GameData_22164c0;
  GameData_2216540 = (__int64)"hub::locator";
  GameData_2216548 = (__int64)game_script_hub_locator_IsPlaceable;
  GameData_2216560 = 0;
  GameData_2216550 = 0;
  GameData_2216558 = 0;
  GameData_2216568 = 2;
  GameData_2216570 = (__int64)"bool IsPlaceable(LocatorHandle handle)";
  GameData_2216578 = (__int64)&GameData_2216500;
  GameData_2216580 = (__int64)"hub::locator";
  GameData_2216588 = (__int64)game_script_hub_locator_ReserveErace;
  GameData_22165a0 = 0;
  GameData_2216590 = 0;
  GameData_2216598 = 0;
  GameData_22165a8 = 2;
  GameData_22165b0 = (__int64)"void ReserveErace(LocatorHandle handle)";
  GameData_22165b8 = (__int64)&GameData_2216540;
  GameData_22165f0 = (__int64)"as_u64 GetGlobalHash(LocatorHandle handle)";
  GameData_22165f8 = (__int64)&GameData_2216580;
  GameData_2216620 = 0;
  GameData_2216610 = 0;
  GameData_2216618 = 0;
  GameData_2216628 = 2;
  GameData_2216600 = (__int64)"hub::locator";
  GameData_2216608 = (__int64)game_script_hub_locator_GetLabelCount;
  GameData_2216630 = (__int64)"int GetLabelCount(const string& label)";
  GameData_2216638 = (__int64)&GameData_22165c0;
  GameData_2216640 = (__int64)"hub::locator";
  GameData_2216648 = (__int64)game_script_hub_locator_LctCopyForMain;
  GameData_2216660 = 0;
  GameData_2216650 = 0;
  GameData_2216658 = 0;
  GameData_2216668 = 2;
  GameData_2216670 = (__int64)"void LctCopyForMain(LocatorHandle handle)";
  GameData_2216678 = (__int64)&GameData_2216600;
  GameData_2216680 = (__int64)"hub::locator";
  GameData_2216688 = (__int64)game_script_hub_locator_LctRegisterLabel;
  GameData_22166a0 = 0;
  GameData_2216690 = 0;
  GameData_2216698 = 0;
  GameData_22166a8 = 2;
  GameData_22166b0 = (__int64)"void LctRegisterLabel(LocatorHandle handle, "
                              "const string& label)";
  GameData_22166b8 = (__int64)&GameData_2216640;
  GameData_22166c0 = (__int64)"hub::locator";
  GameData_22166c8 = (__int64)game_script_hub_locator_GetDisposPosition;
  GameData_22166e0 = 0;
  GameData_22166d0 = 0;
  GameData_22166d8 = 0;
  GameData_22166e8 = 2;
  GameData_22166f0 =
      (__int64)"math::Vec3 GetDisposPosition(LocatorHandle handle)";
  GameData_22166f8 = (__int64)&GameData_2216680;
  GameData_2216700 = (__int64)"hub::locator";
  GameData_2216708 = (__int64)game_script_hub_locator_GetDisposAngle;
  GameData_2216720 = 0;
  GameData_2216710 = 0;
  GameData_2216718 = 0;
  GameData_2216728 = 2;
  GameData_2216730 = (__int64)"float GetDisposAngle(LocatorHandle handle)";
  GameData_2216738 = (__int64)&GameData_22166c0;
  *GameData_212bf18[0] = (__int64)&GameData_2216740;
  GameData_2216760 = 0;
  GameData_2216750 = 0;
  GameData_2216758 = 0;
  GameData_2216768 = 2;
  GameData_2216740 = (__int64)"hub::locator";
  GameData_2216748 = (__int64)game_script_hub_locator_SetDestinationOverride;
  GameData_2216770 =
      (__int64)"void SetDestinationOverride(LocatorHandle handle)";
  GameData_2216778 = (__int64)&GameData_2216700;
}

__int64 game_e5f420(_DWORD* a1, char* a2)
{
  __int64* v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  float v9;
  __int128 v10;
  int8x16_t v11;
  float v12;
  unsigned __int32 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;
  unsigned __int64 v21;
  unsigned int v22;
  int8x16_t v23;
  __int64 v24;
  _QWORD v25[6];
  unsigned __int64 v26;

  v3 = GameData_212eda8[0];
  if (*GameData_212eda8[0] == 0) {
    goto LABEL_28;
  }
  v4 = *((_QWORD*)a2 + 2);
  v5 = a1;
  if (v4 != 0 && (v6 = *(_QWORD*)(v4 + 168)) != 0) {
    v7 = *(_DWORD*)(v6 + 592);
    v8 = *(char*)(v6 + 584) + 256;
    v9 = (float)(unsigned int)(v7 - 1) * 0x1.4000000000000p+1f;
    if (v7 <= 0) {
      v9 = 0x0.0p+0f;
    }
    *(_QWORD*)&v10 = COERCE_UNSIGNED_INT(
        (float)((float)((float)((float)v8 * 0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v9);
    v21 = COERCE_UNSIGNED_INT(
        (float)((float)((float)((float)(unsigned int)(*(char*)(v6 + 585) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v9);
    *(float*)&v22 = (float)((float)((float)((float)v8 * 0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) +
                    v9;
    *((_QWORD*)&v10 + 1) = v21;
    *(_OWORD*)v25 = v10;
    LANES128(v11).n128_u64[0] =
        __PAIR64__(COERCE_UNSIGNED_INT(Unit_6c7fa0(v6, (__int64)v25)), v22);
    LANES128(v11).n128_u64[1] = v21;
  }
  else {
    a1 = v5;
    if (a2[4] != 1) {
      goto LABEL_28;
    }
    LANES128(v11).n128_f32[0] =
        (float)((float)((float)(unsigned int)(*a2 + 256) *
                        0x1.4000000000000p+2f) +
                0x1.4000000000000p+1f) +
        -0x1.4000000000000p+10f;
    LANES128(v11).n128_u32[1] = 1128792064;
    LANES128(v11).n128_f32[2] =
        (float)((float)((float)(unsigned int)(a2[1] + 256) *
                        0x1.4000000000000p+2f) +
                0x1.4000000000000p+1f) +
        -0x1.4000000000000p+10f;
    LANES128(v11).n128_u32[3] = 0;
  }
  v23 = v11;
  v26 =
      LANES64_OF(
          vzip1_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]),
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0])))
          .n64_u64[0];
  game_d74a00((void*)((__int64)v25), (float*)&v26);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release_alt1((__int64)&GameData_22110c8);
  }
  v24 = GameData_22110c0;
  if (a2[9] == 1) {
    v12 = (float)((float)((float)((float)(unsigned int)(a2[6] + 256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) -
          *((float*)&v26 + 1);
    *(float*)&v24 = (float)((float)((float)((float)(unsigned int)(a2[5] + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) -
                    *(float*)&v26;
    *((float*)&v24 + 1) = v12;
  }
  if ((Cursor_f566c0(*v3, (__int64)v25, (__int64)&v24) & 1) != 0) {
    v13 = v25[0];
    v14 = __PAIR64__(HIDWORD(v25[0]), LANES128(v23).n128_u32[1]);
  }
  else {
    v14 = *(unsigned __int64*)((char*)LANES128(v23).n128_u64 + 4);
    v13 = LANES128(v23).n128_u32[0];
  }
  v15 = *(_QWORD*)(*v3 + 8);
  *(_QWORD*)(v15 + 212) = 1065353216;
  v16 = *(unsigned __int8*)(v15 + 224);
  *(_DWORD*)(v15 + 280) = v13;
  *(_DWORD*)(v15 + 284) = HIDWORD(v14);
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_DWORD*)(v15 + 208) = 0;
  if (v16 == 1) {
    *(_BYTE*)(v15 + 224) = 0;
  }
  *(_BYTE*)(v15 + 232) = 0;
  *(_DWORD*)(v15 + 236) = 0;
  *(_DWORD*)(v15 + 228) = -1027080192;
  if (*(_BYTE*)(v15 + 248) == 1) {
    *(_BYTE*)(v15 + 248) = 0;
  }
  if (*(_BYTE*)(v15 + 256) == 1) {
    *(_BYTE*)(v15 + 256) = 0;
  }
  if (*(_BYTE*)(v15 + 261) == 1) {
    *(_BYTE*)(v15 + 261) = 0;
  }
  if (*(_BYTE*)(v15 + 263) == 1) {
    *(_BYTE*)(v15 + 263) = 0;
  }
  if (*(_BYTE*)(v15 + 265) == 1) {
    *(_BYTE*)(v15 + 265) = 0;
  }
  *(_DWORD*)(v15 + 168) = v14;
  *(_DWORD*)(v15 + 172) = v14;
  *(_DWORD*)(v15 + 220) = v14;
  *(_DWORD*)(v15 + 268) = 0;
  *(_WORD*)(v15 + 272) = 256;
  *(_BYTE*)(v15 + 224) = 1;
  game_cfc7c0(v15 + 128, (float*)(v15 + 280), 1, 0x0.0p+0f);
  a1 = v5;
LABEL_28:
  v17 = *((_QWORD*)a2 + 2);
  if (v17 != 0) {
    GameRoutine_e5f7e0_alt1(a1, *((_QWORD*)a2 + 2));
    GameRoutine_f56210(*(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL), v17,
                       0);
  }
  else {
    GameRoutine_e5fa20_alt1(a1);
    GameRoutine_f56340_alt1(*(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL),
                            0);
  }
  v18 = *((_DWORD**)a2 + 3);
  v19 = *(_QWORD*)GameData_212dc38[0];
  if (v18 != nullptr) {
    wld_a7fda0(v19 + 16, v18);
    *(_DWORD*)(v19 + 24) = 0;
    *(_QWORD*)(v19 + 140) = 0x469C40003DCCCCCDLL;
    *(_DWORD*)(v19 + 1064) = 1036966167;
    *(_BYTE*)(v19 + 948) = 1;
  }
  return GameHr_d1fb60(v19, v18 == nullptr);
}

_QWORD* game_e803d0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_221b3f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_221b3f0) != 0) {
    GameData_221b2f0 = 13;
    GameData_221b2f8 = 0;
    GameData_221b300 = (__int64)game_e81a10;
    GameData_221b308 = 0;
    GameData_221b310 = 0;
    GameData_221b318 = 0;
    GameData_221b320 = 0;
    GameData_221b328 = 0;
    GameData_221b330 = 13;
    GameData_221b338 = 0;
    GameData_221b340 = (__int64)GameRoutine_e81b70;
    GameData_221b348 = 0;
    GameData_221b350 = 0;
    GameData_221b358 = 0;
    GameData_221b360 = 0;
    GameData_221b368 = 0;
    GameData_221b370 = 13;
    GameData_221b378 = 0;
    GameData_221b380 = (__int64)game_e81a10;
    GameData_221b388 = 0;
    GameData_221b390 = 0;
    GameData_221b398 = 0;
    GameData_221b3a0 = 0;
    GameData_221b3a8 = 0;
    GameData_221b3b0 = 0;
    GameData_221b3d8 = 0;
    GameData_221b3e0 = 0;
    GameData_221b3e8 = 0;
    GameData_221b3d0 = 0;
    GameData_221b3c0 = 0;
    GameData_221b3c8 = 0;
    GameData_221b3b8 = 0;
    __cxa_guard_release_alt1((__int64)&GameData_221b3f0);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      240, 16, 0);
  v5 = GameData_212c608[0];
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
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_DWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 208) = 0;
  *(_DWORD*)(v4 + 224) = 0;
  *(_QWORD*)v4 = game_ProcChangeCut_vtable;
  ProcInst_657850(v4, (__int64)&GameData_221b2f0, (__int64)"ProcChangeCut", 1,
                  a1);
  v6 = *(_QWORD*)(a2 + 48);
  *(_DWORD*)(v4 + 160) = *(_DWORD*)a2;
  if (v6 != 0) {
    if (v6 == a2 + 16) {
      v9_.v10 = v9_.v9;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 24LL))(v6, v9_.v9);
    }
    else {
      v9_.v10 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    }
  }
  else {
    v9_.v10 = nullptr;
  }
  GameRoutine_654050(v9_.v9, (_QWORD*)(v4 + 176));
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

void game_eae830()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_221c4e8 = (__int64)"cmdbtl";
  GameData_221c4f0 = (__int64)game_script_cmdbtl_GetPhase;
  GameData_221c4f8 = 0;
  GameData_221c500 = 0;
  v0 = GameData_212bf18[0];
  GameData_221c528 = (__int64)"cmdbtl";
  GameData_221c530 = (__int64)game_script_cmdbtl_GetTurn;
  GameData_221c508 = 0;
  GameData_221c538 = 0;
  GameData_221c540 = 0;
  GameData_221c548 = 0;
  v1 = *GameData_212bf18[0];
  GameData_221c510 = 2;
  GameData_221c550 = 2;
  GameData_221c518 = (__int64)"int GetPhase()";
  GameData_221c520 = v1;
  GameData_221c558 = (__int64)"int GetTurn()";
  GameData_221c560 = (__int64)&GameData_221c4e8;
  v2 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_221c4d8;
  GameData_221c578 = 0;
  GameData_221c580 = 0;
  GameData_221c588 = 0;
  GameData_221c590 = 2;
  GameData_221c568 = (__int64)"cmdbtl";
  GameData_221c570 = (__int64)game_script_cmdbtl_SituationComplete;
  GameData_221c598 = (__int64)"void SituationComplete()";
  GameData_221c5a0 = (__int64)&GameData_221c528;
  GameData_221c4d8 = (__int64)"cmdbtl";
  GameData_221c4e0 = v2;
  GameData_221c5a8 = (__int64)"cmdbtl";
  GameData_221c5b0 = (__int64)game_script_cmdbtl_SituationGameOver;
  GameData_221c5b8 = 0;
  GameData_221c5c0 = 0;
  GameData_221c5c8 = 0;
  GameData_221c5d0 = 2;
  GameData_221c5d8 = (__int64)"void SituationGameOver()";
  GameData_221c5e0 = (__int64)&GameData_221c568;
  GameData_221c5e8 = (__int64)"cmdbtl";
  GameData_221c5f0 = (__int64)game_script_cmdbtl_SituationEscape;
  GameData_221c608 = 0;
  GameData_221c5f8 = 0;
  GameData_221c600 = 0;
  GameData_221c610 = 2;
  GameData_221c618 = (__int64)"void SituationEscape()";
  GameData_221c620 = (__int64)&GameData_221c5a8;
  GameData_221c628 = (__int64)"cmdbtl";
  GameData_221c630 = (__int64)game_script_cmdbtl_ItemGainSilentTransport;
  GameData_221c648 = 0;
  GameData_221c638 = 0;
  GameData_221c640 = 0;
  GameData_221c650 = 2;
  GameData_221c658 = (__int64)"void ItemGainSilentTransport(const string& iid)";
  GameData_221c660 = (__int64)&GameData_221c5e8;
  GameData_221c668 = (__int64)"cmdbtl";
  GameData_221c670 = (__int64)cmdbtl_SetAIState;
  GameData_221c688 = 0;
  GameData_221c678 = 0;
  GameData_221c680 = 0;
  GameData_221c690 = 2;
  GameData_221c698 = (__int64)"void SetAIState(const string& state)";
  GameData_221c6a0 = (__int64)&GameData_221c628;
  GameData_221c6a8 = (__int64)"cmdbtl";
  GameData_221c6b0 = (__int64)game_script_cmdbtl_WaitLoadComplete;
  GameData_221c6c8 = 0;
  GameData_221c6b8 = 0;
  GameData_221c6c0 = 0;
  GameData_221c6d0 = 2;
  GameData_221c6d8 = (__int64)"void WaitLoadComplete()";
  GameData_221c6e0 = (__int64)&GameData_221c668;
  *v0 = (__int64)&GameData_221c6e8;
  GameData_221c708 = 0;
  GameData_221c6f8 = 0;
  GameData_221c700 = 0;
  GameData_221c710 = 2;
  GameData_221c6e8 = (__int64)"cmdbtl";
  GameData_221c6f0 = (__int64)game_script_cmdbtl_ExitGmap;
  GameData_221c718 = (__int64)"void ExitGmap()";
  GameData_221c720 = (__int64)&GameData_221c6a8;
}

void game_eb4fd0()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_221c738 = (__int64)"cmdbtl::party";
  GameData_221c740 = (__int64)GetHp;
  GameData_221c748 = 0;
  GameData_221c750 = 0;
  v0 = GameData_212bf18[0];
  GameData_221c778 = (__int64)"cmdbtl::party";
  GameData_221c780 = (__int64)SetHp;
  GameData_221c758 = 0;
  GameData_221c760 = 2;
  GameData_221c788 = 0;
  GameData_221c790 = 0;
  GameData_221c798 = 0;
  GameData_221c7a0 = 2;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_221c728;
  GameData_221c7a8 = (__int64)"void SetHp(int partyType, int hp)";
  GameData_221c7b0 = (__int64)&GameData_221c738;
  GameData_221c7c8 = 0;
  GameData_221c7d0 = 0;
  GameData_221c7d8 = 0;
  GameData_221c7e0 = 2;
  GameData_221c7b8 = (__int64)"cmdbtl::party";
  GameData_221c7c0 = (__int64)GetMaxHp;
  GameData_221c728 = (__int64)"cmdbtl::party";
  GameData_221c730 = v1;
  v2 = *v0;
  GameData_221c768 = (__int64)"int GetHp(int partyType)";
  GameData_221c770 = v2;
  GameData_221c7e8 = (__int64)"int GetMaxHp(int partyType)";
  GameData_221c7f0 = (__int64)&GameData_221c778;
  GameData_221c858 = 0;
  GameData_221c848 = 0;
  GameData_221c850 = 0;
  GameData_221c860 = 2;
  GameData_221c7f8 = (__int64)"cmdbtl::party";
  GameData_221c800 = (__int64)SetBonusMaxHp;
  GameData_221c808 = 0;
  GameData_221c810 = 0;
  GameData_221c818 = 0;
  GameData_221c820 = 2;
  GameData_221c838 = (__int64)"cmdbtl::party";
  GameData_221c840 = (__int64)GetStock;
  GameData_221c828 = (__int64)"void SetBonusMaxHp(int partyType, int hp)";
  GameData_221c830 = (__int64)&GameData_221c7b8;
  GameData_221c898 = 0;
  GameData_221c888 = 0;
  GameData_221c890 = 0;
  GameData_221c8a0 = 2;
  GameData_221c868 = (__int64)"int GetStock(int partyType)";
  GameData_221c870 = (__int64)&GameData_221c7f8;
  GameData_221c878 = (__int64)"cmdbtl::party";
  GameData_221c880 = (__int64)GetUnitCount;
  GameData_221c8a8 = (__int64)"int GetUnitCount(int partyType)";
  GameData_221c8b0 = (__int64)&GameData_221c838;
  GameData_221c8b8 = (__int64)"cmdbtl::party";
  GameData_221c8c0 = (__int64)GetUnitId;
  GameData_221c8d8 = 0;
  GameData_221c8c8 = 0;
  GameData_221c8d0 = 0;
  GameData_221c8e0 = 2;
  GameData_221c8e8 = (__int64)"int GetUnitId(int partyType, int index)";
  GameData_221c8f0 = (__int64)&GameData_221c878;
  GameData_221c8f8 = (__int64)"cmdbtl::party";
  GameData_221c900 = (__int64)SetLifeState;
  GameData_221c918 = 0;
  GameData_221c908 = 0;
  GameData_221c910 = 0;
  GameData_221c920 = 2;
  GameData_221c9b8 = (__int64)"cmdbtl::party";
  GameData_221c9c0 = (__int64)ClearLockTargetLeader;
  GameData_221c9d8 = 0;
  GameData_221c9c8 = 0;
  GameData_221c9d0 = 0;
  GameData_221c9e0 = 2;
  GameData_221c928 = (__int64)"void SetLifeState(int partyType, int lifeState)";
  GameData_221c930 = (__int64)&GameData_221c8b8;
  GameData_221c938 = (__int64)"cmdbtl::party";
  GameData_221c940 = (__int64)cmdbtl_party_SetLeaderId;
  GameData_221c958 = 0;
  GameData_221c948 = 0;
  GameData_221c950 = 0;
  GameData_221c960 = 2;
  GameData_221c968 = (__int64)"void SetLeaderId(int partyType, int unitId)";
  GameData_221c970 = (__int64)&GameData_221c8f8;
  GameData_221c978 = (__int64)"cmdbtl::party";
  GameData_221c980 = (__int64)cmdbtl_party_SetLockTargetLeader;
  GameData_221c998 = 0;
  GameData_221c988 = 0;
  GameData_221c990 = 0;
  GameData_221c9a0 = 2;
  GameData_221c9a8 =
      (__int64)"void SetLockTargetLeader(int partyType, int unitId)";
  GameData_221c9b0 = (__int64)&GameData_221c938;
  GameData_221c9e8 = (__int64)"void ClearLockTargetLeader(int partyType)";
  GameData_221c9f0 = (__int64)&GameData_221c978;
  GameData_221ca18 = 0;
  GameData_221ca08 = 0;
  GameData_221ca10 = 0;
  GameData_221ca20 = 2;
  GameData_221c9f8 = (__int64)"cmdbtl::party";
  GameData_221ca00 = (__int64)GetLeaderId;
  GameData_221ca28 = (__int64)"int GetLeaderId(int partyType)";
  GameData_221ca30 = (__int64)&GameData_221c9b8;
  GameData_221ca38 = (__int64)"cmdbtl::party";
  GameData_221ca40 = (__int64)GetLinkPoint;
  GameData_221ca58 = 0;
  GameData_221ca48 = 0;
  GameData_221ca50 = 0;
  GameData_221ca60 = 2;
  GameData_221cb38 = (__int64)"cmdbtl::party";
  GameData_221cb40 = (__int64)GetPID;
  GameData_221cb58 = 0;
  GameData_221cb48 = 0;
  GameData_221cb50 = 0;
  GameData_221cb60 = 2;
  GameData_221ca68 = (__int64)"int GetLinkPoint(int partyType)";
  GameData_221ca70 = (__int64)&GameData_221c9f8;
  GameData_221ca78 = (__int64)"cmdbtl::party";
  GameData_221ca80 = (__int64)SetLinkPoint;
  GameData_221ca98 = 0;
  GameData_221ca88 = 0;
  GameData_221ca90 = 0;
  GameData_221caa0 = 2;
  GameData_221caa8 = (__int64)"void SetLinkPoint(int partyType, int point)";
  GameData_221cab0 = (__int64)&GameData_221ca38;
  GameData_221cab8 = (__int64)"cmdbtl::party";
  GameData_221cac0 = (__int64)GameRoutine_eafec0;
  GameData_221cad8 = 0;
  GameData_221cac8 = 0;
  GameData_221cad0 = 0;
  GameData_221cae0 = 2;
  GameData_221cae8 = (__int64)"void RecreateActor(int partyType)";
  GameData_221caf0 = (__int64)&GameData_221ca78;
  GameData_221caf8 = (__int64)"cmdbtl::party";
  GameData_221cb00 = (__int64)cmdbtl_party_GetIdByPID;
  GameData_221cb18 = 0;
  GameData_221cb08 = 0;
  GameData_221cb10 = 0;
  GameData_221cb20 = 2;
  GameData_221cb28 = (__int64)"int GetIdByPID(string pid)";
  GameData_221cb30 = (__int64)&GameData_221cab8;
  GameData_221cb68 = (__int64)"string GetPID(int unitId)";
  GameData_221cb70 = (__int64)&GameData_221caf8;
  GameData_221cb98 = 0;
  GameData_221cb88 = 0;
  GameData_221cb90 = 0;
  GameData_221cba0 = 2;
  GameData_221cb78 = (__int64)"cmdbtl::party";
  GameData_221cb80 = (__int64)cmdbtl_party_GetUnitHp;
  GameData_221cba8 = (__int64)"int GetUnitHp(int unitId)";
  GameData_221cbb0 = (__int64)&GameData_221cb38;
  GameData_221cbb8 = (__int64)"cmdbtl::party";
  GameData_221cbc0 = (__int64)GetJID;
  GameData_221cbd8 = 0;
  GameData_221cbc8 = 0;
  GameData_221cbd0 = 0;
  GameData_221cbe0 = 2;
  GameData_221ccb8 = (__int64)"cmdbtl::party";
  GameData_221ccc0 = (__int64)cmdbtl_party_Equip;
  GameData_221ccd8 = 0;
  GameData_221ccc8 = 0;
  GameData_221ccd0 = 0;
  GameData_221cce0 = 2;
  GameData_221cbe8 = (__int64)"string GetJID(int unitId)";
  GameData_221cbf0 = (__int64)&GameData_221cb78;
  GameData_221cbf8 = (__int64)"cmdbtl::party";
  GameData_221cc00 = (__int64)GetLevel;
  GameData_221cc18 = 0;
  GameData_221cc08 = 0;
  GameData_221cc10 = 0;
  GameData_221cc20 = 2;
  GameData_221cc28 = (__int64)"int GetLevel(int unitId)";
  GameData_221cc30 = (__int64)&GameData_221cbb8;
  GameData_221cc38 = (__int64)"cmdbtl::party";
  GameData_221cc40 = (__int64)cmdbtl_party_IsPossession;
  GameData_221cc58 = 0;
  GameData_221cc48 = 0;
  GameData_221cc50 = 0;
  GameData_221cc60 = 2;
  GameData_221cc68 =
      (__int64)"bool IsPossession(int unitId, const string& iid)";
  GameData_221cc70 = (__int64)&GameData_221cbf8;
  GameData_221cc78 = (__int64)"cmdbtl::party";
  GameData_221cc80 = (__int64)cmdbtl_party_GetEquipIID;
  GameData_221cc98 = 0;
  GameData_221cc88 = 0;
  GameData_221cc90 = 0;
  GameData_221cca0 = 2;
  GameData_221cca8 = (__int64)"string GetEquipIID(int unitId)";
  GameData_221ccb0 = (__int64)&GameData_221cc38;
  GameData_221cce8 = (__int64)"void Equip(int unitId, const string& iid)";
  GameData_221ccf0 = (__int64)&GameData_221cc78;
  GameData_221cd18 = 0;
  GameData_221cd08 = 0;
  GameData_221cd10 = 0;
  GameData_221cd20 = 2;
  GameData_221ccf8 = (__int64)"cmdbtl::party";
  GameData_221cd00 = (__int64)cmdbtl_party_HasSkill;
  GameData_221cd28 = (__int64)"bool HasSkill(int unitId, const string& sid)";
  GameData_221cd30 = (__int64)&GameData_221ccb8;
  GameData_221cd38 = (__int64)"cmdbtl::party";
  GameData_221cd40 = (__int64)cmdbtl_party_AddPrivateSkill;
  GameData_221cd58 = 0;
  GameData_221cd48 = 0;
  GameData_221cd50 = 0;
  GameData_221cd60 = 2;
  GameData_221ce38 = (__int64)"cmdbtl::party";
  GameData_221ce40 = (__int64)SetPollution;
  GameData_221ce58 = 0;
  GameData_221ce48 = 0;
  GameData_221ce50 = 0;
  GameData_221ce60 = 2;
  GameData_221cd68 =
      (__int64)"void AddPrivateSkill(int unitId, const string& sid)";
  GameData_221cd70 = (__int64)&GameData_221ccf8;
  GameData_221cd78 = (__int64)"cmdbtl::party";
  GameData_221cd80 = (__int64)cmdbtl_party_RemovePrivateSkill;
  GameData_221cd98 = 0;
  GameData_221cd88 = 0;
  GameData_221cd90 = 0;
  GameData_221cda0 = 2;
  GameData_221cda8 =
      (__int64)"void RemovePrivateSkill(int unitId, const string& sid)";
  GameData_221cdb0 = (__int64)&GameData_221cd38;
  GameData_221cdb8 = (__int64)"cmdbtl::party";
  GameData_221cdc0 = (__int64)cmdbtl_party_AddPrivateSkillOnce;
  GameData_221cdd8 = 0;
  GameData_221cdc8 = 0;
  GameData_221cdd0 = 0;
  GameData_221cde0 = 2;
  GameData_221cde8 =
      (__int64)"void AddPrivateSkillOnce(int unitId, const string& sid)";
  GameData_221cdf0 = (__int64)&GameData_221cd78;
  GameData_221cdf8 = (__int64)"cmdbtl::party";
  GameData_221ce00 = (__int64)GetPollution;
  GameData_221ce18 = 0;
  GameData_221ce08 = 0;
  GameData_221ce10 = 0;
  GameData_221ce20 = 2;
  GameData_221ce28 = (__int64)"int GetPollution(int unitId)";
  GameData_221ce30 = (__int64)&GameData_221cdb8;
  GameData_221ce68 = (__int64)"void SetPollution(int unitId, int pollution)";
  GameData_221ce70 = (__int64)&GameData_221cdf8;
  GameData_221ce98 = 0;
  GameData_221ce88 = 0;
  GameData_221ce90 = 0;
  GameData_221cea0 = 2;
  GameData_221ce78 = (__int64)"cmdbtl::party";
  GameData_221ce80 = (__int64)SetForceDying;
  GameData_221cea8 = (__int64)"void SetForceDying(int unitId, bool isDying)";
  GameData_221ceb0 = (__int64)&GameData_221ce38;
  GameData_221ceb8 = (__int64)"cmdbtl::party";
  GameData_221cec0 = (__int64)SetClearDying;
  GameData_221ced8 = 0;
  GameData_221cec8 = 0;
  GameData_221ced0 = 0;
  GameData_221cee0 = 2;
  GameData_221cee8 = (__int64)"void SetClearDying(int unitId)";
  GameData_221cef0 = (__int64)&GameData_221ce78;
  GameData_221cef8 = (__int64)"cmdbtl::party";
  GameData_221cf00 = (__int64)PlayIdleMotion;
  GameData_221cf28 = (__int64)"void PlayIdleMotion(int unitId, bool withStart)";
  GameData_221cf30 = (__int64)&GameData_221ceb8;
  GameData_221cf18 = 0;
  GameData_221cf08 = 0;
  GameData_221cf10 = 0;
  GameData_221cf20 = 2;
  GameData_221cf38 = (__int64)"cmdbtl::party";
  GameData_221cf40 = (__int64)cmdbtl_party_PlayMotion_eb2160;
  GameData_221cf58 = 0;
  GameData_221cf48 = 0;
  GameData_221cf50 = 0;
  GameData_221cf60 = 2;
  GameData_221cf68 =
      (__int64)"void PlayMotion(int unitId, const string& animName)";
  GameData_221cf70 = (__int64)&GameData_221cef8;
  GameData_221cf78 = (__int64)"cmdbtl::party";
  GameData_221cf80 = (__int64)cmdbtl_party_PlayMotion_eb2360;
  GameData_221cfa8 = (__int64)"void PlayMotion(int unitId, const string& "
                              "animName, float blendSec)";
  GameData_221cfb0 = (__int64)&GameData_221cf38;
  GameData_221cf98 = 0;
  GameData_221cf88 = 0;
  GameData_221cf90 = 0;
  GameData_221cfa0 = 2;
  GameData_221cfe8 =
      (__int64)"void PlayMotionDetail(int unitId, const string& animName, "
               "float blendSec, float playSpeed, float startTime)";
  GameData_221cff0 = (__int64)&GameData_221cf78;
  GameData_221cfb8 = (__int64)"cmdbtl::party";
  GameData_221cfc0 = (__int64)cmdbtl_party_PlayMotionDetail;
  GameData_221cfd8 = 0;
  GameData_221cfc8 = 0;
  GameData_221cfd0 = 0;
  GameData_221cfe0 = 2;
  GameData_221d018 = 0;
  GameData_221d008 = 0;
  GameData_221d010 = 0;
  GameData_221d020 = 2;
  GameData_221cff8 = (__int64)"cmdbtl::party";
  GameData_221d000 = (__int64)cmdbtl_party_PlayFacial;
  GameData_221d028 = (__int64)"void PlayFacial(int unitId, const string& "
                              "facial, float blendSec)";
  GameData_221d030 = (__int64)&GameData_221cfb8;
  GameData_221d038 = (__int64)"cmdbtl::party";
  GameData_221d040 = (__int64)cmdbtl_party_PlayDefaultFacial;
  GameData_221d058 = 0;
  GameData_221d048 = 0;
  GameData_221d050 = 0;
  GameData_221d060 = 2;
  GameData_221d068 =
      (__int64)"void PlayDefaultFacial(int unitId, float blendSec)";
  GameData_221d070 = (__int64)&GameData_221cff8;
  GameData_221d078 = (__int64)"cmdbtl::party";
  GameData_221d080 = (__int64)cmdbtl_party_SetEnableFacialUpdate;
  GameData_221d0a8 =
      (__int64)"void SetEnableFacialUpdate(int unitId, bool isEnable)";
  GameData_221d0b0 = (__int64)&GameData_221d038;
  GameData_221d098 = 0;
  GameData_221d088 = 0;
  GameData_221d090 = 0;
  GameData_221d0a0 = 2;
  GameData_221d0b8 = (__int64)"cmdbtl::party";
  GameData_221d0c0 = (__int64)cmdbtl_party_SetHeadLookToTarget;
  GameData_221d0d8 = 0;
  GameData_221d0c8 = 0;
  GameData_221d0d0 = 0;
  GameData_221d0e0 = 2;
  GameData_221d0e8 =
      (__int64)"void SetHeadLookToTarget(int unitId, int targetUnitId)";
  GameData_221d0f0 = (__int64)&GameData_221d078;
  GameData_221d0f8 = (__int64)"cmdbtl::party";
  GameData_221d100 = (__int64)ClearHeadLookToTarget;
  GameData_221d128 = (__int64)"void ClearHeadLookToTarget(int unitId)";
  GameData_221d130 = (__int64)&GameData_221d0b8;
  GameData_221d118 = 0;
  GameData_221d108 = 0;
  GameData_221d110 = 0;
  GameData_221d120 = 2;
  GameData_221d168 = (__int64)"bool IsIdle(int unitId)";
  GameData_221d170 = (__int64)&GameData_221d0f8;
  GameData_221d138 = (__int64)"cmdbtl::party";
  GameData_221d140 = (__int64)cmdbtl_party_IsIdle;
  GameData_221d158 = 0;
  GameData_221d148 = 0;
  GameData_221d150 = 0;
  GameData_221d160 = 2;
  GameData_221d198 = 0;
  GameData_221d188 = 0;
  GameData_221d190 = 0;
  GameData_221d1a0 = 2;
  GameData_221d178 = (__int64)"cmdbtl::party";
  GameData_221d180 = (__int64)cmdbtl_party_WaitIdle;
  GameData_221d1a8 = (__int64)"void WaitIdle(int unitId)";
  GameData_221d1b0 = (__int64)&GameData_221d138;
  GameData_221d1b8 = (__int64)"cmdbtl::party";
  GameData_221d1c0 = (__int64)cmdbtl_party_GetPosition;
  GameData_221d1d8 = 0;
  GameData_221d1c8 = 0;
  GameData_221d1d0 = 0;
  GameData_221d1e0 = 2;
  GameData_221d1e8 = (__int64)"math::Vec3 GetPosition(int unitId)";
  GameData_221d1f0 = (__int64)&GameData_221d178;
  GameData_221d1f8 = (__int64)"cmdbtl::party";
  GameData_221d200 = (__int64)cmdbtl_party_SetPosition;
  GameData_221d228 =
      (__int64)"void SetPosition(int unitId, const math::Vec3& pos)";
  GameData_221d230 = (__int64)&GameData_221d1b8;
  GameData_221d218 = 0;
  GameData_221d208 = 0;
  GameData_221d210 = 0;
  GameData_221d220 = 2;
  GameData_221d238 = (__int64)"cmdbtl::party";
  GameData_221d240 = (__int64)GetAngle;
  GameData_221d258 = 0;
  GameData_221d248 = 0;
  GameData_221d250 = 0;
  GameData_221d260 = 2;
  GameData_221d268 = (__int64)"float GetAngle(int unitId)";
  GameData_221d270 = (__int64)&GameData_221d1f8;
  GameData_221d278 = (__int64)"cmdbtl::party";
  GameData_221d280 = (__int64)cmdbtl_party_SetAngle;
  GameData_221d2a8 =
      (__int64)"void SetAngle(int unitId, const float& angleDeg)";
  GameData_221d2b0 = (__int64)&GameData_221d238;
  GameData_221d298 = 0;
  GameData_221d288 = 0;
  GameData_221d290 = 0;
  GameData_221d2a0 = 2;
  GameData_221d2e8 = (__int64)"void PlayVoice(int unitId, const string& label)";
  GameData_221d2f0 = (__int64)&GameData_221d278;
  GameData_221d2b8 = (__int64)"cmdbtl::party";
  GameData_221d2c0 = (__int64)cmdbtl_party_PlayVoice;
  GameData_221d2d8 = 0;
  GameData_221d2c8 = 0;
  GameData_221d2d0 = 0;
  GameData_221d2e0 = 2;
  GameData_221d318 = 0;
  GameData_221d308 = 0;
  GameData_221d310 = 0;
  GameData_221d320 = 2;
  GameData_221d2f8 = (__int64)"cmdbtl::party";
  GameData_221d300 = (__int64)cmdbtl_party_PlayVoiceDirectLabel;
  GameData_221d328 =
      (__int64)"void PlayVoiceDirectLabel(int unitId, const string& label)";
  GameData_221d330 = (__int64)&GameData_221d2b8;
  GameData_221d338 = (__int64)"cmdbtl::party";
  GameData_221d340 = (__int64)IsVisible;
  GameData_221d358 = 0;
  GameData_221d348 = 0;
  GameData_221d350 = 0;
  GameData_221d360 = 2;
  GameData_221d368 = (__int64)"bool IsVisible(int unitId)";
  GameData_221d370 = (__int64)&GameData_221d2f8;
  GameData_221d378 = (__int64)"cmdbtl::party";
  GameData_221d380 = (__int64)SetVisible;
  GameData_221d3a8 =
      (__int64)"void SetVisible(int unitId, const bool isVisible)";
  GameData_221d3b0 = (__int64)&GameData_221d338;
  GameData_221d398 = 0;
  GameData_221d388 = 0;
  GameData_221d390 = 0;
  GameData_221d3a0 = 2;
  GameData_221d3b8 = (__int64)"cmdbtl::party";
  GameData_221d3c0 = (__int64)cmdbtl_party_AddTemporaryUnit;
  GameData_221d3d8 = 0;
  GameData_221d3c8 = 0;
  GameData_221d3d0 = 0;
  GameData_221d3e0 = 2;
  GameData_221d3e8 = (__int64)"void AddTemporaryUnit(const string& pid)";
  GameData_221d3f0 = (__int64)&GameData_221d378;
  GameData_221d428 = (__int64)"void AddTemporaryGuest(const string& pid)";
  GameData_221d430 = (__int64)&GameData_221d3b8;
  GameData_221d3f8 = (__int64)"cmdbtl::party";
  GameData_221d400 = (__int64)cmdbtl_party_AddTemporaryGuest;
  GameData_221d418 = 0;
  GameData_221d408 = 0;
  GameData_221d410 = 0;
  GameData_221d420 = 2;
  *v0 = (__int64)&GameData_221d438;
  GameData_221d458 = 0;
  GameData_221d448 = 0;
  GameData_221d450 = 0;
  GameData_221d460 = 2;
  GameData_221d438 = (__int64)"cmdbtl::party";
  GameData_221d440 = (__int64)TransferFromTemporaty;
  GameData_221d468 = (__int64)"void TransferFromTemporaty(int temporatyUnitId, "
                              "int targetPartyType)";
  GameData_221d470 = (__int64)&GameData_221d3f8;
}

#pragma GCC visibility pop
