#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_70f550(_QWORD* result, _QWORD*);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void HubDisposFileReader_c98880(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void LocatorDispos_db1ce0(PSEUDO_X8,
                                                     unsigned __int8* result);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void game_941ce0(PSEUDO_X8, __int64);
__int64* GameRoutine_d9d750(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* GameRoutine_e07e20(unsigned __int8*);
__int64* GameRoutine_e08050(__int64*, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_8224a0(unsigned __int8);
__int64* game_hub_e023c0(__int64, __int64, unsigned __int64);
__int64 GameHr_1552260();
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_89b540(__int64);
__int64 GameHr_9aba50();
__int64 GameHr_e152d0(_BYTE*);
__int64 GameHr_ff7060(__int64, __int64);
__int64 GameRoutine_10be430(__int64 result, __int64);
__int64 GameRoutine_10bfee0(__int64, __int64, char);
__int64 GameRoutine_1115db0(__int64 result, __int64, char);
__int64 GameRoutine_117bca0(int, __int64);
__int64 GameRoutine_18c8060(__int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_65c660(_QWORD*, unsigned __int64*);
__int64 GameRoutine_9ab6d0();
__int64 GameRoutine_9ab760();
__int64 GameRoutine_9ab8e0();
__int64 GameRoutine_9abcf0();
__int64 GameRoutine_9abd80();
__int64 GameRoutine_9abda0();
__int64 GameRoutine_9abe30();
__int64 GameRoutine_9abea0();
__int64 GameRoutine_9abf20();
__int64 GameRoutine_9ac060();
__int64 GameRoutine_d90760(__int64);
__int64 GameRoutine_d97ff0(__int64 result);
__int64 GameRoutine_e02840(__int64);
__int64 GameRoutine_e149a0(__int64, __int64, unsigned __int64);
__int64 GameRoutine_ffc2b0(__int64, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1567000(__int64, char);
__int64 MapTerrainInfo_1824db0(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcTitleSeq_9ab8f0();
__int64 ProcTitleSeq_9ac0d0();
__int64 ProcTitleSeq_9ac160();
__int64 ProcTitleSeq_9ac250();
__int64 UnitNatives_117be60();
__int64 UnitNatives_117bf80();
__int64 UnitNatives_117d000();
__int64 UnitNatives_117d280();
__int64 UnitNatives_117d4a0();
__int64 UnitNatives_117da60();
__int64 UnitNatives_117ee00();
__int64 UnitNatives_117f550();
__int64 UnitNatives_1181ce0();
__int64 UnitNatives_1181e00();
__int64 UnitNatives_1182020();
__int64 UnitNatives_1182d90();
__int64 UnitNatives_1182f20();
__int64 UnitNatives_11857b0();
__int64 UnitNatives_11859d0();
__int64 UnitNatives_1185d70();
__int64 UnitNatives_11873e0();
__int64 UnitNatives_1187600();
__int64 UnitNatives_1187e60();
__int64 VolunteerArgs_948220(__int16*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_55c3a0(__int64 result, __int64, float, double, float, double,
                    float);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_anonymous_ProcTitleSeq_CreateMenu();
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 game_map_anonymous_TrickEntity_TryCancel();
__int64 game_script_map_CanEnter();
__int64 game_script_map_GetPlayAreaMaxX();
__int64 game_script_map_GetPlayAreaMaxZ();
__int64 game_script_map_GetPlayAreaMinX();
__int64 game_script_map_GetPlayAreaMinZ();
__int64 game_script_map_RecoverUnitForContinue();
__int64 game_script_map_UpdateImage();
__int64 game_script_map_battle_GetDeadUnitIndex();
__int64 game_script_map_battle_GetDeadUnitPID();
__int64 game_script_map_battle_GetDefenceUnitIndex();
__int64 game_script_map_battle_GetDefenceUnitPID();
__int64 game_script_map_battle_GetOffenceUnitIndex();
__int64 game_script_map_battle_GetOffenceUnitPID();
__int64 game_script_map_camera_Pop();
__int64 game_script_map_camera_SetTilt();
__int64 game_script_map_cursor_GetX();
__int64 game_script_map_cursor_GetZ();
__int64 game_script_map_cursor_SetPos();
__int64 game_script_map_cursor_SetPosByPID();
__int64 game_script_map_effect_Create();
__int64 game_script_map_effect_Delete_1168a60();
__int64 game_script_map_effect_Delete_1168b20();
__int64 game_script_map_effect_Play();
__int64 game_script_map_effect_PlayUnitCenter();
__int64 game_script_map_event_EntryArea_1170d30();
__int64 game_script_map_event_EntryArea_1170d40();
__int64 game_script_map_event_EntryBattleAfter_116b780();
__int64 game_script_map_event_EntryBattleAfter_116b7d0();
__int64 game_script_map_event_EntryBattleBefore_116b640();
__int64 game_script_map_event_EntryBattleBefore_116b690();
__int64 game_script_map_event_EntryBattleComplete_116b820();
__int64 game_script_map_event_EntryBattleComplete_116b8d0();
__int64 game_script_map_event_EntryBattleTalk_116b6e0();
__int64 game_script_map_event_EntryBattleTalk_116b730();
__int64 game_script_map_event_EntryBreakdown_1172690();
__int64 game_script_map_event_EntryBreakdown_11726a0();
__int64 game_script_map_event_EntryDestroy_11721f0();
__int64 game_script_map_event_EntryDestroy_1172200();
__int64 game_script_map_event_EntryDieAfter_116df50();
__int64 game_script_map_event_EntryDieAfter_116df70();
__int64 game_script_map_event_EntryDieBefore_116df10();
__int64 game_script_map_event_EntryDieBefore_116df30();
__int64 game_script_map_event_EntryDieTalk_116ded0();
__int64 game_script_map_event_EntryDieTalk_116def0();
__int64 game_script_map_event_EntryDoor_11718b0();
__int64 game_script_map_event_EntryDoor_11718c0();
__int64 game_script_map_event_EntryEscapeAfter_1172d70();
__int64 game_script_map_event_EntryEscapeAfter_1172d80();
__int64 game_script_map_event_EntryEscapeBefore_1172d50();
__int64 game_script_map_event_EntryEscapeBefore_1172d60();
__int64 game_script_map_event_EntryFixedSilent_116d040();
__int64 game_script_map_event_EntryFixedSilent_116d050();
__int64 game_script_map_event_EntryFixed_116d020();
__int64 game_script_map_event_EntryFixed_116d030();
__int64 game_script_map_event_EntryGimmick_1171d50();
__int64 game_script_map_event_EntryGimmick_1171d60();
__int64 game_script_map_event_EntryMindComplete_116ff70();
__int64 game_script_map_event_EntryMindComplete_116ff80();
__int64 game_script_map_event_EntryPhaseAfter_116a1f0();
__int64 game_script_map_event_EntryPhaseAfter_116a210();
__int64 game_script_map_event_EntryPhaseBefore_116a1b0();
__int64 game_script_map_event_EntryPhaseBefore_116a1d0();
__int64 game_script_map_event_EntryPhaseEnd_116a230();
__int64 game_script_map_event_EntryPhaseEnd_116a250();
__int64 game_script_map_event_EntryPickupSilent_116c570();
__int64 game_script_map_event_EntryPickupSilent_116c580();
__int64 game_script_map_event_EntryPickup_116c550();
__int64 game_script_map_event_EntryPickup_116c560();
__int64 game_script_map_event_EntryReviveAfter_116ea60();
__int64 game_script_map_event_EntryReviveAfter_116ea80();
__int64 game_script_map_event_EntryReviveBefore_116ea20();
__int64 game_script_map_event_EntryReviveBefore_116ea40();
__int64 game_script_map_event_EntryTalk_1170670();
__int64 game_script_map_event_EntryTalk_1170680();
__int64 game_script_map_event_EntryTbox_1171410();
__int64 game_script_map_event_EntryTbox_1171420();
__int64 game_script_map_event_EntryUnitCommandBefore_116f890();
__int64 game_script_map_event_EntryUnitCommandBefore_116f8a0();
__int64 game_script_map_event_EntryUseActiveSkill_116f1b0();
__int64 game_script_map_event_EntryUseActiveSkill_116f1c0();
__int64 game_script_map_event_EntryWarpCommandAfter_1173210();
__int64 game_script_map_event_EntryWarpCommandAfter_1173220();
__int64 game_script_map_event_GetActiveUnitIndex();
__int64 game_script_map_history_Backup();
__int64 game_script_map_history_LogInfoSetBattleSkill();
__int64 game_script_map_history_LogInfoSetEscape();
__int64 game_script_map_history_ReserveToRecordMind();
__int64 game_script_map_history_Restore();
__int64 game_script_map_info_PushNoDisp();
__int64 game_script_map_info_UpdateHeight();
__int64 game_script_map_mind_GetActiveSkill();
__int64 game_script_map_mind_GetTargetPosX();
__int64 game_script_map_mind_GetTargetPosZ();
__int64 game_script_map_mind_GetTargetUnitIndex();
__int64 game_script_map_mind_GetTargetUnitPID();
__int64 game_script_map_mind_GetUnitIndex();
__int64 game_script_map_mind_GetUnitPID();
__int64 game_script_map_mind_GetUseItem();
__int64 game_script_map_obj_IsActive_1167960();
__int64 game_script_map_obj_IsActive_11679c0();
__int64 game_script_map_obj_PlayStateWait_1168460();
__int64 game_script_map_obj_PlayStateWait_11684b0();
__int64 game_script_map_obj_SetActive_1167a20();
__int64 game_script_map_obj_SetActive_1167af0();
__int64 game_script_map_snd_GeFadeMsec();
__int64 game_script_map_snd_PlayBgm();
__int64 game_script_map_snd_StopBgm();
__int64 game_script_map_terrain_GetBullet();
__int64 game_script_map_terrain_GetHp();
__int64 game_script_map_terrain_GetMaxHp();
__int64 game_script_map_terrain_GetOccupation();
__int64 game_script_map_terrain_GetOverlapTID();
__int64 game_script_map_terrain_GetTID();
__int64 game_script_map_terrain_GetTrickTID();
__int64 game_script_map_terrain_IsInTargetPos();
__int64 game_script_map_terrain_IsTrickDone();
__int64 game_script_map_terrain_IsTrickEnable();
__int64 game_script_map_terrain_Set();
__int64 game_script_map_terrain_SetBegin();
__int64 game_script_map_terrain_SetExclude();
__int64 game_script_map_terrain_SetHp();
__int64 game_script_map_terrain_SetMaxHp();
__int64 game_script_map_terrain_SetOccupation();
__int64 game_script_map_terrain_SetPhase();
__int64 game_script_map_terrain_SetSingle();
__int64 game_script_map_terrain_SetTrickEnable();
__int64 game_script_map_zoom_IsActive();
__int64 game_script_map_zoom_StopShake();
__int64 game_script_unit_BreakBarrier_11869f0();
__int64 game_script_unit_BreakBarrier_1186ae0();
__int64 game_script_unit_BreakBarrier_1186ca0();
__int64 game_script_unit_BreakBarrier_1186e80();
__int64 game_script_unit_Clear();
__int64 game_script_unit_ClearMoveLimit();
__int64 game_script_unit_DamagePopup_1188690();
__int64 game_script_unit_DamagePopup_1188720();
__int64 game_script_unit_Die_1185270();
__int64 game_script_unit_Die_11852c0();
__int64 game_script_unit_GenerateFaceTexture_1188af0();
__int64 game_script_unit_GenerateFaceTexture_1188b60();
__int64 game_script_unit_GetBarrierHp_1186030();
__int64 game_script_unit_GetBarrierHp_1186100();
__int64 game_script_unit_GetFirstIndexInForce();
__int64 game_script_unit_GetFirstIndexOnMap();
__int64 game_script_unit_GetForce_1178640();
__int64 game_script_unit_GetForce_11786a0();
__int64 game_script_unit_GetIndexByPID();
__int64 game_script_unit_GetIndexByPos();
__int64 game_script_unit_GetJID_1178080();
__int64 game_script_unit_GetJID_11780e0();
__int64 game_script_unit_GetLID_1178240();
__int64 game_script_unit_GetLID_11782c0();
__int64 game_script_unit_GetMotionName_1187b90();
__int64 game_script_unit_GetMotionName_1187c00();
__int64 game_script_unit_GetName_1178440();
__int64 game_script_unit_GetName_11784c0();
__int64 game_script_unit_GetNextIndex();
__int64 game_script_unit_GetNextIndexOnMap();
__int64 game_script_unit_GetPID();
__int64 game_script_unit_GetPIDByPos();
__int64 game_script_unit_IsAttackRangeForce_1180350();
__int64 game_script_unit_IsAttackRangeForce_11803c0();
__int64 game_script_unit_IsAttackRangePos_117fe20();
__int64 game_script_unit_IsAttackRangePos_117fea0();
__int64 game_script_unit_IsAttackRangeTargetUnit_1180020();
__int64 game_script_unit_IsAttackRangeTargetUnit_11800c0();
__int64 game_script_unit_IsDead_1177e80();
__int64 game_script_unit_IsDead_1177ee0();
__int64 game_script_unit_IsExistOnMap_1177cf0();
__int64 game_script_unit_IsExistOnMap_1177d60();
__int64 game_script_unit_IsExist_1177b90();
__int64 game_script_unit_IsExist_1177be0();
__int64 game_script_unit_IsFading();
__int64 game_script_unit_IsForcePlayer();
__int64 game_script_unit_IsMoveRangePos_117fc10();
__int64 game_script_unit_IsMoveRangePos_117fca0();
__int64 game_script_unit_PlayMotion();
__int64 game_script_unit_Reload_1187900();
__int64 game_script_unit_Reload_11879e0();
__int64 game_script_unit_RepairBarrier_1187140();
__int64 game_script_unit_RepairBarrier_1187220();
__int64 game_script_unit_SetBarrierHp_11862c0();
__int64 game_script_unit_SetBarrierHp_1186460();
__int64 game_script_unit_SetBarrierHp_11866e0();
__int64 game_script_unit_SetBarrierHp_1186800();
__int64 game_script_unit_SetRideOnOff_1188880();
__int64 game_script_unit_SetRideOnOff_1188940();
__int64 game_script_unit_UpdateLearn();
__int64 game_script_unit_WaitDamageEnd();
__int64 game_script_unit_WaitMotion_1188510();
__int64 game_script_unit_WaitMotion_1188560();
__int64 game_script_unit_ability_GetCharm_117b200();
__int64 game_script_unit_ability_GetCharm_117b260();
__int64 game_script_unit_ability_GetDef_117aec0();
__int64 game_script_unit_ability_GetDef_117af20();
__int64 game_script_unit_ability_GetHpStock_1179a60();
__int64 game_script_unit_ability_GetHpStock_1179ac0();
__int64 game_script_unit_ability_GetHp_11793b0();
__int64 game_script_unit_ability_GetHp_1179400();
__int64 game_script_unit_ability_GetLevel_1179230();
__int64 game_script_unit_ability_GetLevel_1179280();
__int64 game_script_unit_ability_GetLuck_117ad20();
__int64 game_script_unit_ability_GetLuck_117ad80();
__int64 game_script_unit_ability_GetMagic_117a840();
__int64 game_script_unit_ability_GetMagic_117a8a0();
__int64 game_script_unit_ability_GetMaxHp_11798c0();
__int64 game_script_unit_ability_GetMaxHp_1179920();
__int64 game_script_unit_ability_GetMdef_117b060();
__int64 game_script_unit_ability_GetMdef_117b0c0();
__int64 game_script_unit_ability_GetMoveType_117b3a0();
__int64 game_script_unit_ability_GetMoveType_117b400();
__int64 game_script_unit_ability_GetPollution_1179bf0();
__int64 game_script_unit_ability_GetPollution_1179c40();
__int64 game_script_unit_ability_GetQuick_117ab80();
__int64 game_script_unit_ability_GetQuick_117abe0();
__int64 game_script_unit_ability_GetSize();
__int64 game_script_unit_ability_GetStr_117a690();
__int64 game_script_unit_ability_GetStr_117a700();
__int64 game_script_unit_ability_GetTech_117a9e0();
__int64 game_script_unit_ability_GetTech_117aa40();
__int64 game_script_unit_ability_SetHp_1179530();
__int64 game_script_unit_ability_SetHp_1179680();
__int64 game_script_unit_ability_UpdateLearn();
__int64 game_script_unit_ai_ActivateForBand_1182760();
__int64 game_script_unit_ai_ActivateForBand_11827c0();
__int64 game_script_unit_ai_ClearMoveLimit();
__int64 game_script_unit_ai_GetBandNo_1183290();
__int64 game_script_unit_ai_GetBandNo_1183300();
__int64 game_script_unit_ai_GetSequenceArgPositionX();
__int64 game_script_unit_ai_GetSequenceArgPositionZ();
__int64 game_script_unit_ai_GetSequence_1182b60();
__int64 game_script_unit_ai_GetSequence_1182c00();
__int64 game_script_unit_ai_IsActive_1182350();
__int64 game_script_unit_ai_IsActive_11823c0();
__int64 game_script_unit_ai_SetActive_1182510();
__int64 game_script_unit_ai_SetActive_11825c0();
__int64 game_script_unit_ai_SetBandNo_1183450();
__int64 game_script_unit_ai_SetBandNo_1183500();
__int64 game_script_unit_ai_SetDisableMutationAttack_1184570();
__int64 game_script_unit_ai_SetDisableMutationAttack_1184640();
__int64 game_script_unit_ai_SetMoveBreak_11847f0();
__int64 game_script_unit_ai_SetMoveBreak_11848c0();
__int64 game_script_unit_ai_SetMoveDestroy_11842f0();
__int64 game_script_unit_ai_SetMoveDestroy_11843c0();
__int64 game_script_unit_ai_SetMoveThrough_1184a70();
__int64 game_script_unit_ai_SetMoveThrough_1184b40();
__int64 game_script_unit_ai_SetPriority_1182910();
__int64 game_script_unit_ai_SetPriority_11829c0();
__int64 game_script_unit_ai_SetRageMaxProhibitTurn_1183e00();
__int64 game_script_unit_ai_SetRageMaxProhibitTurn_1183ec0();
__int64 game_script_unit_ai_SetRageOpArg_1183900();
__int64 game_script_unit_ai_SetRageOpArg_11839e0();
__int64 game_script_unit_ai_SetRageOp_11836a0();
__int64 game_script_unit_ai_SetRageOp_1183760();
__int64 game_script_unit_ai_SetRageTargetPos_1183ba0();
__int64 game_script_unit_ai_SetRageTargetPos_1183c60();
__int64 game_script_unit_ai_SetRejectPower0Attack_1184060();
__int64 game_script_unit_ai_SetRejectPower0Attack_1184140();
__int64 game_script_unit_dir_Get();
__int64 game_script_unit_dir_Set();
__int64 game_script_unit_fade_FadeIn_117e460();
__int64 game_script_unit_fade_FadeIn_117e4c0();
__int64 game_script_unit_fade_FadeOut_117e610();
__int64 game_script_unit_fade_FadeOut_117e6c0();
__int64 game_script_unit_fade_IsFading();
__int64 game_script_unit_item_GetEquipIID_117baa0();
__int64 game_script_unit_item_GetEquipIID_117bb20();
__int64 game_script_unit_item_GetPossetionIID_117b8a0();
__int64 game_script_unit_item_GetPossetionIID_117b920();
__int64 game_script_unit_item_GetSize();
__int64 game_script_unit_item_IsPossession_117b6d0();
__int64 game_script_unit_item_IsPossession_117b740(__int64, __int64);
__int64 game_script_unit_item_SetEnduranceItem_117c360();
__int64 game_script_unit_item_SetEnduranceItem_117c4e0();
__int64 game_script_unit_pos_GetX_117c760();
__int64 game_script_unit_pos_GetX_117c7c0();
__int64 game_script_unit_pos_GetZ_117c910();
__int64 game_script_unit_pos_GetZ_117c980();
__int64 game_script_unit_pos_MoveForce_117ce40();
__int64 game_script_unit_pos_MoveForce_117cea0();
__int64 game_script_unit_pos_Move_117cc70();
__int64 game_script_unit_pos_Move_117cce0();
__int64 game_script_unit_pos_Set_117cad0();
__int64 game_script_unit_pos_Set_117cb20();
__int64 game_script_unit_skill_AddEquip_11807a0();
__int64 game_script_unit_skill_AddEquip_1180880();
__int64 game_script_unit_skill_AddPrivate_1180d10();
__int64 game_script_unit_skill_AddPrivate_1180e00();
__int64 game_script_unit_skill_ChangeDangerMap();
__int64 game_script_unit_skill_GetEndurance_1181560();
__int64 game_script_unit_skill_GetEndurance_11816a0();
__int64 game_script_unit_skill_Has_1180590();
__int64 game_script_unit_skill_Has_1180620();
__int64 game_script_unit_skill_RemoveEquip_1180a50();
__int64 game_script_unit_skill_RemoveEquip_1180b40();
__int64 game_script_unit_skill_RemovePrivate_1180ff0();
__int64 game_script_unit_skill_RemovePrivate_11810e0();
__int64 game_script_unit_skill_SetEndurance_11818c0();
__int64 game_script_unit_skill_SetEndurance_1181a60();
__int64 game_script_unit_skill_Supply_11812d0();
__int64 game_script_unit_skill_Supply_11813a0();
__int64 game_script_unit_status_Check_1178940();
__int64 game_script_unit_status_Check_11789a0();
__int64 game_script_unit_status_Clear();
__int64 game_script_unit_status_IsForcePlayer();
__int64 game_script_unit_status_Set_1178af0();
__int64 game_script_unit_status_Set_1178bc0();
__int64 map_Dispos();
__int64 map_DisposGetDataNum();
__int64 map_DisposGetPosX();
__int64 map_DisposGetPosZ();
__int64 map_DisposIsEnable();
__int64 map_DisposSingle();
__int64 map_SetRainEnable();
__int64 map_camera_GetRoll();
__int64 map_camera_GetTilt();
__int64 map_camera_MoveWait();
__int64 map_camera_SetRoll();
__int64 map_camera_StartShake();
__int64 map_effect_Delete();
__int64 map_effect_PreloadAndWait();
__int64 map_effect_Shoot_1168c00();
__int64 map_effect_Shoot_1168f80();
__int64 map_history_ReserveMindUnit();
__int64 map_history_ReserveToRecordMindAndChangeDead();
__int64 map_obj_PlayState_1167f50();
__int64 map_obj_PlayState_1168020();
__int64 map_snd_PlaySe();
__int64 map_snd_SetSeVol();
__int64 map_snd_StopSe();
__int64 map_snd_WaitSe();
__int64 map_terrain_BreakTrick();
__int64 map_terrain_DeleteTrick();
__int64 map_terrain_GetCostId();
__int64 map_terrain_GetCoveredTID();
__int64 map_terrain_GetTrickPosByTID();
__int64 map_terrain_IsCostEnable();
__int64 map_terrain_IsSetTrickItem();
__int64 map_terrain_IsTrickExist();
__int64 map_terrain_RepairTrick();
__int64 map_terrain_SetEnd();
__int64 map_terrain_SetTargetByCircle();
__int64 map_terrain_SetTargetByPid();
__int64 map_terrain_SetTargetByRect();
__int64 map_terrain_SetTargetBySid();
__int64 map_terrain_SetTrickItem();
__int64 map_terrain_SetTrickRange();
__int64 map_terrain_UpdateTrickForContinue();
__int64 map_zoom_In();
__int64 map_zoom_Out();
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_oe_SetUserInactivityDetectionTimeExtended(bool);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
__int64 unit_CancelRageTarget();
__int64 unit_Delete_11853f0();
__int64 unit_Delete_1185560();
__int64 unit_GetMoveToPos_117fa70();
__int64 unit_GetMoveToPos_117fac0();
__int64 unit_SetRageTarget();
__int64 unit_Transfer_117ea10();
__int64 unit_Transfer_117eba0();
__int64 unit_ability_SetPollution_1179d70();
__int64 unit_ability_SetPollution_117a1a0();
__int64 unit_dir_Set();
__int64 unit_dir_SetByPos_117e020();
__int64 unit_dir_SetByPos_117e1c0();
__n128 game_111e3c0(__int64);
bool GameRoutine_10bfbf0(float32x4_t*);
bool GameRoutine_11cc300(__int64);
bool game_ffbf60(const char*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN GameData_1a9b049;
extern _UNKNOWN GameData_1a9b065;
extern _UNKNOWN GameData_1a9ef19;
extern _UNKNOWN GameData_1ae8174;
extern _UNKNOWN GameData_1ae94c2;
extern _UNKNOWN GameData_1af761d;
extern _UNKNOWN GameData_1aff179;
extern _UNKNOWN GameData_1bb457c;
extern _UNKNOWN GameData_1bb4580;
extern _UNKNOWN GameData_1bb4584;
extern _UNKNOWN GameData_1bb4588;
extern _UNKNOWN GameData_1bb458c;
extern _UNKNOWN GameData_1bb4590;
extern _UNKNOWN GameData_1bb4594;
extern _UNKNOWN GameData_1bb4598;
extern _UNKNOWN GameData_1bb459c;
extern _UNKNOWN GameData_1bb45a0;
extern _UNKNOWN GameData_1bb45a4;
extern _UNKNOWN GameData_1bb45a8;
extern _UNKNOWN GameData_1bb45ac;
extern _UNKNOWN GameData_1bb45b0;
extern _UNKNOWN GameData_1bb45b4;
extern _UNKNOWN GameData_1bb45b8;
extern _UNKNOWN GameData_1bb45bc;
extern _UNKNOWN GameData_1bb45c0;
extern _UNKNOWN GameData_1bb45c4;
extern _UNKNOWN GameData_1bb45c8;
extern _UNKNOWN GameData_1bb45cc;
extern _UNKNOWN GameData_1bb45d0;
extern _UNKNOWN GameData_1bb45d4;
extern _UNKNOWN GameData_1bb45d8;
extern _UNKNOWN GameData_1bb45dc;
extern _UNKNOWN GameData_1bb45e0;
extern _UNKNOWN GameData_1bb45e4;
extern _UNKNOWN GameData_1bb45e8;
extern _UNKNOWN GameData_1bb45ec;
extern _UNKNOWN GameData_1bb45f0;
extern _UNKNOWN GameData_1bb45f4;
extern _UNKNOWN GameData_1bb45f8;
extern _UNKNOWN GameData_1bb45fc;
extern _UNKNOWN GameData_1bb4600;
extern _UNKNOWN GameData_1bb4604;
extern _UNKNOWN GameData_1bb4608;
extern _UNKNOWN GameData_1bb460c;
extern _UNKNOWN GameData_1bb4610;
extern _UNKNOWN GameData_1bb4614;
extern _UNKNOWN GameData_1bb4618;
extern _UNKNOWN GameData_1bb461c;
extern _UNKNOWN GameData_1bb4620;
extern _UNKNOWN GameData_1bb4624;
extern _UNKNOWN GameData_1bb4628;
extern _UNKNOWN GameData_1bb462c;
extern _UNKNOWN GameData_1bb4630;
extern _UNKNOWN GameData_1bb4634;
extern _UNKNOWN GameData_1bb4638;
extern _UNKNOWN GameData_1bb463c;
extern _UNKNOWN GameData_1bb4640;
extern _UNKNOWN GameData_1bb4644;
extern _UNKNOWN GameData_1bb4648;
extern _UNKNOWN GameData_1bb464c;
extern _UNKNOWN GameData_1bb4650;
extern _UNKNOWN GameData_1bb4654;
extern _UNKNOWN GameData_1bb4658;
extern _UNKNOWN GameData_1bb4950;
extern _UNKNOWN GameData_1bb4954;
extern _UNKNOWN GameData_1bb4958;
extern _UNKNOWN GameData_1bb495c;
extern _UNKNOWN GameData_1bb4960;
extern _UNKNOWN GameData_1bb4964;
extern _UNKNOWN GameData_1bb4968;
extern _UNKNOWN GameData_1bb496c;
extern _UNKNOWN GameData_1bb4970;
extern _UNKNOWN GameData_1bb4974;
extern _UNKNOWN GameData_1bb4978;
extern _UNKNOWN GameData_1bb497c;
extern _UNKNOWN GameData_1bb4980;
extern _UNKNOWN GameData_1bb4984;
extern _UNKNOWN GameData_1bb4988;
extern _UNKNOWN GameData_1bb498c;
extern _UNKNOWN GameData_1bb4990;
extern _UNKNOWN GameData_1bb4994;
extern _UNKNOWN GameData_1bb4998;
extern _UNKNOWN GameData_1bb499c;
extern _UNKNOWN GameData_1bb49a0;
extern _UNKNOWN GameData_1bb49a4;
extern _UNKNOWN GameData_1bb49a8;
extern _UNKNOWN GameData_1bb49ac;
extern _UNKNOWN GameData_1bb49b0;
extern _UNKNOWN GameData_1bb49b4;
extern _UNKNOWN GameData_1bb49b8;
extern _UNKNOWN GameData_1bb49bc;
extern _UNKNOWN GameData_1bb49c0;
extern _UNKNOWN GameData_1bb49c4;
extern _UNKNOWN GameData_1bb49c8;
extern _UNKNOWN GameData_1bb49cc;
extern _UNKNOWN GameData_1bb49d0;
extern _UNKNOWN GameData_1bb49d4;
extern _UNKNOWN GameData_1bb49d8;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21ca4e8;
extern _UNKNOWN GameData_21d91a8;
extern _UNKNOWN GameData_21ed5d0;
extern _UNKNOWN GameData_21f5fb8;
extern _UNKNOWN GameData_2258fe0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6160;
extern __int16 GameData_21ca4c0;
extern __int16 GameData_21ed5c0;
extern __int16 GameData_21ed5c6;
extern __int16 GameData_21eea60;
extern __int16 GameData_21eeab8;
extern __int16 GameData_2265aca;
extern __int64 (*GameData_1fffd38[])();
extern __int64 (*GameData_1fffd88[])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_anonymous_PlayerItems_vtable[])();
extern __int64 (*game_anonymous_ProcTitleSeq_vtable[])();
extern __int64 (*game_movie_Seq_vtable[])();
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d7e0[7];
extern __int64* GameData_212d7e8[6];
extern __int64* GameData_212dea8;
extern __int64* GameData_212eb88;
extern __int64* GameData_212f290[4];
extern __int64* GameData_212fbc8;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130600[6];
extern __int64* GameData_21320e8;
extern __int64* game_map_history_g_transporter_ptr[8];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212bf18[9];
extern __int64 GameData_212bf40[4];
extern __int64 GameData_212bf48[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212cf70[7];
extern __int64 GameData_212cf90[3];
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212ef60;
extern __int64 GameData_2130f48;
extern __int64 GameData_21ca310;
extern __int64 GameData_21ca4b0;
extern __int64 GameData_21ca4b8;
extern __int64 GameData_21ca9f0;
extern __int64 GameData_21caa08;
extern __int64 GameData_21caa20;
extern __int64 GameData_21d9198;
extern __int64 GameData_21d91a0;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea48;
extern __int64 GameData_21eea50;
extern __int64 GameData_21eea98;
extern __int64 GameData_21eeac0;
extern __int64 GameData_21f5400;
extern __int64 GameData_21f5408;
extern __int64 GameData_21f5410;
extern __int64 GameData_21f5420;
extern __int64 GameData_21f5430;
extern __int64 GameData_21f5440;
extern __int64 GameData_21f5448;
extern __int64 GameData_21f5450;
extern __int64 GameData_21f5460;
extern __int64 GameData_21f5470;
extern __int64 GameData_21f5480;
extern __int64 GameData_21f5488;
extern __int64 GameData_21f5490;
extern __int64 GameData_21f54a0;
extern __int64 GameData_21f54b0;
extern __int64 GameData_21f54c0;
extern __int64 GameData_21f54c8;
extern __int64 GameData_21f54d0;
extern __int64 GameData_21f54e0;
extern __int64 GameData_21f54f0;
extern __int64 GameData_21f5500;
extern __int64 GameData_21f5508;
extern __int64 GameData_21f5510;
extern __int64 GameData_21f5520;
extern __int64 GameData_21f5530;
extern __int64 GameData_21f5540;
extern __int64 GameData_21f5548;
extern __int64 GameData_21f5560;
extern __int64 GameData_21f5570;
extern __int64 GameData_21f5580;
extern __int64 GameData_21f5588;
extern __int64 GameData_21f55a0;
extern __int64 GameData_21f55b0;
extern __int64 GameData_21f55c0;
extern __int64 GameData_21f55c8;
extern __int64 GameData_21f55d0;
extern __int64 GameData_21f55e0;
extern __int64 GameData_21f55f0;
extern __int64 GameData_21f5600;
extern __int64 GameData_21f5608;
extern __int64 GameData_21f5610;
extern __int64 GameData_21f5620;
extern __int64 GameData_21f5630;
extern __int64 GameData_21f5640;
extern __int64 GameData_21f5648;
extern __int64 GameData_21f5650;
extern __int64 GameData_21f5660;
extern __int64 GameData_21f5670;
extern __int64 GameData_21f5680;
extern __int64 GameData_21f5688;
extern __int64 GameData_21f5690;
extern __int64 GameData_21f56a0;
extern __int64 GameData_21f56b0;
extern __int64 GameData_21f56c0;
extern __int64 GameData_21f56c8;
extern __int64 GameData_21f56d0;
extern __int64 GameData_21f56e0;
extern __int64 GameData_21f56f0;
extern __int64 GameData_21f5700;
extern __int64 GameData_21f5708;
extern __int64 GameData_21f5710;
extern __int64 GameData_21f5720;
extern __int64 GameData_21f5730;
extern __int64 GameData_21f5740;
extern __int64 GameData_21f5748;
extern __int64 GameData_21f5760;
extern __int64 GameData_21f5770;
extern __int64 GameData_21f5780;
extern __int64 GameData_21f5788;
extern __int64 GameData_21f5790;
extern __int64 GameData_21f57a0;
extern __int64 GameData_21f57b0;
extern __int64 GameData_21f57c0;
extern __int64 GameData_21f57c8;
extern __int64 GameData_21f57d0;
extern __int64 GameData_21f57e0;
extern __int64 GameData_21f57f0;
extern __int64 GameData_21f5800;
extern __int64 GameData_21f5808;
extern __int64 GameData_21f5810;
extern __int64 GameData_21f5820;
extern __int64 GameData_21f5830;
extern __int64 GameData_21f5840;
extern __int64 GameData_21f5848;
extern __int64 GameData_21f5860;
extern __int64 GameData_21f5870;
extern __int64 GameData_21f5880;
extern __int64 GameData_21f5888;
extern __int64 GameData_21f5890;
extern __int64 GameData_21f58a0;
extern __int64 GameData_21f58b0;
extern __int64 GameData_21f58c0;
extern __int64 GameData_21f58c8;
extern __int64 GameData_21f58d0;
extern __int64 GameData_21f58e0;
extern __int64 GameData_21f58f0;
extern __int64 GameData_21f5900;
extern __int64 GameData_21f5908;
extern __int64 GameData_21f5910;
extern __int64 GameData_21f5920;
extern __int64 GameData_21f5930;
extern __int64 GameData_21f5940;
extern __int64 GameData_21f5948;
extern __int64 GameData_21f5950;
extern __int64 GameData_21f5960;
extern __int64 GameData_21f5970;
extern __int64 GameData_21f5980;
extern __int64 GameData_21f5988;
extern __int64 GameData_21f5990;
extern __int64 GameData_21f59a0;
extern __int64 GameData_21f59b0;
extern __int64 GameData_21f59c0;
extern __int64 GameData_21f59c8;
extern __int64 GameData_21f59d0;
extern __int64 GameData_21f59e0;
extern __int64 GameData_21f59f0;
extern __int64 GameData_21f5a00;
extern __int64 GameData_21f5a08;
extern __int64 GameData_21f5a10;
extern __int64 GameData_21f5a20;
extern __int64 GameData_21f5a30;
extern __int64 GameData_21f5a40;
extern __int64 GameData_21f5a48;
extern __int64 GameData_21f5a50;
extern __int64 GameData_21f5a60;
extern __int64 GameData_21f5a70;
extern __int64 GameData_21f5a80;
extern __int64 GameData_21f5a88;
extern __int64 GameData_21f5a90;
extern __int64 GameData_21f5aa0;
extern __int64 GameData_21f5ab0;
extern __int64 GameData_21f5ac0;
extern __int64 GameData_21f5ac8;
extern __int64 GameData_21f5ad0;
extern __int64 GameData_21f5ae0;
extern __int64 GameData_21f5af0;
extern __int64 GameData_21f5b00;
extern __int64 GameData_21f5b08;
extern __int64 GameData_21f5b20;
extern __int64 GameData_21f5b30;
extern __int64 GameData_21f5b40;
extern __int64 GameData_21f5b48;
extern __int64 GameData_21f5b60;
extern __int64 GameData_21f5b70;
extern __int64 GameData_21f5b80;
extern __int64 GameData_21f5b88;
extern __int64 GameData_21f5b90;
extern __int64 GameData_21f5ba0;
extern __int64 GameData_21f5bb0;
extern __int64 GameData_21f5bc0;
extern __int64 GameData_21f5bc8;
extern __int64 GameData_21f5bd0;
extern __int64 GameData_21f5be0;
extern __int64 GameData_21f5bf0;
extern __int64 GameData_21f5c00;
extern __int64 GameData_21f5c08;
extern __int64 GameData_21f5c10;
extern __int64 GameData_21f5c20;
extern __int64 GameData_21f5c30;
extern __int64 GameData_21f5c40;
extern __int64 GameData_21f5c48;
extern __int64 GameData_21f5c60;
extern __int64 GameData_21f5c70;
extern __int64 GameData_21f5c80;
extern __int64 GameData_21f5c88;
extern __int64 GameData_21f5ca0;
extern __int64 GameData_21f5cb0;
extern __int64 GameData_21f5cc0;
extern __int64 GameData_21f5cc8;
extern __int64 GameData_21f5cd0;
extern __int64 GameData_21f5ce0;
extern __int64 GameData_21f5cf0;
extern __int64 GameData_21f5d00;
extern __int64 GameData_21f5d08;
extern __int64 GameData_21f5d10;
extern __int64 GameData_21f5d20;
extern __int64 GameData_21f5d30;
extern __int64 GameData_21f5d40;
extern __int64 GameData_21f5d48;
extern __int64 GameData_21f5d50;
extern __int64 GameData_21f5d60;
extern __int64 GameData_21f5d70;
extern __int64 GameData_21f5d80;
extern __int64 GameData_21f5d88;
extern __int64 GameData_21f5d90;
extern __int64 GameData_21f5da0;
extern __int64 GameData_21f5db0;
extern __int64 GameData_21f5dc0;
extern __int64 GameData_21f5dc8;
extern __int64 GameData_21f5de0;
extern __int64 GameData_21f5df0;
extern __int64 GameData_21f5e00;
extern __int64 GameData_21f5e08;
extern __int64 GameData_21f5e20;
extern __int64 GameData_21f5e30;
extern __int64 GameData_21f5e40;
extern __int64 GameData_21f5e48;
extern __int64 GameData_21f5e50;
extern __int64 GameData_21f5e60;
extern __int64 GameData_21f5e70;
extern __int64 GameData_21f5e80;
extern __int64 GameData_21f5e88;
extern __int64 GameData_21f5e90;
extern __int64 GameData_21f5ea0;
extern __int64 GameData_21f5eb0;
extern __int64 GameData_21f5ec0;
extern __int64 GameData_21f5ec8;
extern __int64 GameData_21f5ed0;
extern __int64 GameData_21f5ee0;
extern __int64 GameData_21f5ef0;
extern __int64 GameData_21f5f00;
extern __int64 GameData_21f5f08;
extern __int64 GameData_21f5f20;
extern __int64 GameData_21f5f30;
extern __int64 GameData_21f5f40;
extern __int64 GameData_21f5f48;
extern __int64 GameData_21f5f60;
extern __int64 GameData_21f5f70;
extern __int64 GameData_21f5f80;
extern __int64 GameData_21f5f88;
extern __int64 GameData_21f5f90;
extern __int64 GameData_21f5fa0;
extern __int64 GameData_21f5fb0;
extern __int64 GameData_21f5fc0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_22127a8;
extern __int64 GameData_22265e8;
extern __int64 GameData_22265f0;
extern __int64 GameData_22265f8;
extern __int64 GameData_2226600;
extern __int64 GameData_2226608;
extern __int64 GameData_2226610;
extern __int64 GameData_2226618;
extern __int64 GameData_2226628;
extern __int64 GameData_2226630;
extern __int64 GameData_2226648;
extern __int64 GameData_2226660;
extern __int64 GameData_2226678;
extern __int64 GameData_2226680;
extern __int64 GameData_2226688;
extern __int64 GameData_2226690;
extern __int64 GameData_2226698;
extern __int64 GameData_22345f8;
extern __int64 GameData_2234600;
extern __int64 GameData_2234608;
extern __int64 GameData_2234610;
extern __int64 GameData_2234618;
extern __int64 GameData_2234620;
extern __int64 GameData_2234628;
extern __int64 GameData_2234638;
extern __int64 GameData_2234640;
extern __int64 GameData_2234658;
extern __int64 GameData_2234670;
extern __int64 GameData_2234688;
extern __int64 GameData_2234690;
extern __int64 GameData_2234698;
extern __int64 GameData_22346a0;
extern __int64 GameData_22346a8;
extern __int64 GameData_2236520;
extern __int64 GameData_2236538;
extern __int64 GameData_2236540;
extern __int64 GameData_2236548;
extern __int64 GameData_2236550;
extern __int64 GameData_2236558;
extern __int64 GameData_2236560;
extern __int64 GameData_2236568;
extern __int64 GameData_2236b30;
extern __int64 GameData_2236b38;
extern __int64 GameData_2236b40;
extern __int64 GameData_2236b48;
extern __int64 GameData_2236b50;
extern __int64 GameData_2236b58;
extern __int64 GameData_2236b60;
extern __int64 GameData_2236b70;
extern __int64 GameData_2236b78;
extern __int64 GameData_2236b90;
extern __int64 GameData_2236ba8;
extern __int64 GameData_2236bc0;
extern __int64 GameData_2236bc8;
extern __int64 GameData_2236bd0;
extern __int64 GameData_2236bd8;
extern __int64 GameData_2236be0;
extern __int64 GameData_2236be8;
extern __int64 GameData_2236bf0;
extern __int64 GameData_2236bf8;
extern __int64 GameData_2236c00;
extern __int64 GameData_2236c08;
extern __int64 GameData_2236c10;
extern __int64 GameData_2236c18;
extern __int64 GameData_2236c20;
extern __int64 GameData_2236c28;
extern __int64 GameData_2236c30;
extern __int64 GameData_2236c38;
extern __int64 GameData_2236c40;
extern __int64 GameData_2236c48;
extern __int64 GameData_2236c50;
extern __int64 GameData_2236c58;
extern __int64 GameData_2236c60;
extern __int64 GameData_2236c68;
extern __int64 GameData_2236c70;
extern __int64 GameData_2236c78;
extern __int64 GameData_2236c80;
extern __int64 GameData_2236c88;
extern __int64 GameData_2236c90;
extern __int64 GameData_2236c98;
extern __int64 GameData_2236ca0;
extern __int64 GameData_2236ca8;
extern __int64 GameData_2236cb0;
extern __int64 GameData_2236cb8;
extern __int64 GameData_2236cc0;
extern __int64 GameData_2236cc8;
extern __int64 GameData_2236cd0;
extern __int64 GameData_2236cd8;
extern __int64 GameData_2236ce0;
extern __int64 GameData_2236ce8;
extern __int64 GameData_2236cf0;
extern __int64 GameData_2236cf8;
extern __int64 GameData_2236d00;
extern __int64 GameData_2236d08;
extern __int64 GameData_2236d10;
extern __int64 GameData_2236d18;
extern __int64 GameData_2236d20;
extern __int64 GameData_2236d28;
extern __int64 GameData_2236d30;
extern __int64 GameData_2236d38;
extern __int64 GameData_2236d40;
extern __int64 GameData_2236d48;
extern __int64 GameData_2236d50;
extern __int64 GameData_2236d58;
extern __int64 GameData_2236d60;
extern __int64 GameData_2236d68;
extern __int64 GameData_2236d70;
extern __int64 GameData_2236d78;
extern __int64 GameData_2236d80;
extern __int64 GameData_2236d88;
extern __int64 GameData_2236d90;
extern __int64 GameData_2236d98;
extern __int64 GameData_2236da0;
extern __int64 GameData_2236da8;
extern __int64 GameData_2236db0;
extern __int64 GameData_2236db8;
extern __int64 GameData_2236dc0;
extern __int64 GameData_2236dc8;
extern __int64 GameData_2236dd0;
extern __int64 GameData_2236dd8;
extern __int64 GameData_2236de0;
extern __int64 GameData_2236de8;
extern __int64 GameData_2236df0;
extern __int64 GameData_2236df8;
extern __int64 GameData_2236e00;
extern __int64 GameData_2236e08;
extern __int64 GameData_2236e10;
extern __int64 GameData_2236e18;
extern __int64 GameData_2236e20;
extern __int64 GameData_2236e28;
extern __int64 GameData_2236e30;
extern __int64 GameData_2236e38;
extern __int64 GameData_2236e40;
extern __int64 GameData_2236e48;
extern __int64 GameData_2236e50;
extern __int64 GameData_2236e58;
extern __int64 GameData_2236e60;
extern __int64 GameData_2236e68;
extern __int64 GameData_2236e70;
extern __int64 GameData_2236e78;
extern __int64 GameData_2236e80;
extern __int64 GameData_2236e88;
extern __int64 GameData_2236e90;
extern __int64 GameData_2236e98;
extern __int64 GameData_2236ea0;
extern __int64 GameData_2236ea8;
extern __int64 GameData_2236eb0;
extern __int64 GameData_2236eb8;
extern __int64 GameData_2236ec0;
extern __int64 GameData_2236ec8;
extern __int64 GameData_2236ed0;
extern __int64 GameData_2236ed8;
extern __int64 GameData_2236ee0;
extern __int64 GameData_2236ee8;
extern __int64 GameData_2236ef0;
extern __int64 GameData_2236ef8;
extern __int64 GameData_2236f00;
extern __int64 GameData_2236f08;
extern __int64 GameData_2236f10;
extern __int64 GameData_2236f18;
extern __int64 GameData_2236f20;
extern __int64 GameData_2236f28;
extern __int64 GameData_2236f30;
extern __int64 GameData_2236f38;
extern __int64 GameData_2236f40;
extern __int64 GameData_2236f48;
extern __int64 GameData_2236f50;
extern __int64 GameData_2236f58;
extern __int64 GameData_2236f60;
extern __int64 GameData_2236f68;
extern __int64 GameData_2236f70;
extern __int64 GameData_2236f78;
extern __int64 GameData_2236f80;
extern __int64 GameData_2236f88;
extern __int64 GameData_2236f90;
extern __int64 GameData_2236f98;
extern __int64 GameData_2236fa0;
extern __int64 GameData_2236fa8;
extern __int64 GameData_2236fb0;
extern __int64 GameData_2236fb8;
extern __int64 GameData_2236fc0;
extern __int64 GameData_2236fc8;
extern __int64 GameData_2236fd0;
extern __int64 GameData_2236fd8;
extern __int64 GameData_2236fe0;
extern __int64 GameData_2236fe8;
extern __int64 GameData_2236ff0;
extern __int64 GameData_2236ff8;
extern __int64 GameData_2237000;
extern __int64 GameData_2237008;
extern __int64 GameData_2237010;
extern __int64 GameData_2237018;
extern __int64 GameData_2237020;
extern __int64 GameData_2237028;
extern __int64 GameData_2237030;
extern __int64 GameData_2237038;
extern __int64 GameData_2237040;
extern __int64 GameData_2237048;
extern __int64 GameData_2237050;
extern __int64 GameData_2237058;
extern __int64 GameData_2237060;
extern __int64 GameData_2237068;
extern __int64 GameData_2237070;
extern __int64 GameData_2237078;
extern __int64 GameData_2237080;
extern __int64 GameData_2237088;
extern __int64 GameData_2237090;
extern __int64 GameData_2237098;
extern __int64 GameData_22370a0;
extern __int64 GameData_22370a8;
extern __int64 GameData_22370b0;
extern __int64 GameData_22370b8;
extern __int64 GameData_22370c0;
extern __int64 GameData_22370c8;
extern __int64 GameData_22370d0;
extern __int64 GameData_22370d8;
extern __int64 GameData_22370e0;
extern __int64 GameData_22370e8;
extern __int64 GameData_22370f0;
extern __int64 GameData_22370f8;
extern __int64 GameData_2237100;
extern __int64 GameData_2237108;
extern __int64 GameData_2237110;
extern __int64 GameData_2237118;
extern __int64 GameData_2237120;
extern __int64 GameData_2237128;
extern __int64 GameData_2237130;
extern __int64 GameData_2237138;
extern __int64 GameData_2237140;
extern __int64 GameData_2237148;
extern __int64 GameData_2237150;
extern __int64 GameData_2237158;
extern __int64 GameData_2237160;
extern __int64 GameData_2237168;
extern __int64 GameData_2237170;
extern __int64 GameData_2237178;
extern __int64 GameData_2237180;
extern __int64 GameData_2237188;
extern __int64 GameData_2237190;
extern __int64 GameData_2237198;
extern __int64 GameData_22371a0;
extern __int64 GameData_22371a8;
extern __int64 GameData_22371b0;
extern __int64 GameData_22371b8;
extern __int64 GameData_22371d0;
extern __int64 GameData_22371d8;
extern __int64 GameData_22371e0;
extern __int64 GameData_22371e8;
extern __int64 GameData_22371f0;
extern __int64 GameData_22371f8;
extern __int64 GameData_2237210;
extern __int64 GameData_2237218;
extern __int64 GameData_2237220;
extern __int64 GameData_2237228;
extern __int64 GameData_2237230;
extern __int64 GameData_2237238;
extern __int64 GameData_2237250;
extern __int64 GameData_2237258;
extern __int64 GameData_2237260;
extern __int64 GameData_2237268;
extern __int64 GameData_2237270;
extern __int64 GameData_2237278;
extern __int64 GameData_2237290;
extern __int64 GameData_2237298;
extern __int64 GameData_22372a0;
extern __int64 GameData_22372a8;
extern __int64 GameData_22372b0;
extern __int64 GameData_22372b8;
extern __int64 GameData_22372d0;
extern __int64 GameData_22372d8;
extern __int64 GameData_22372e0;
extern __int64 GameData_22372e8;
extern __int64 GameData_22372f0;
extern __int64 GameData_22372f8;
extern __int64 GameData_2237310;
extern __int64 GameData_2237318;
extern __int64 GameData_2237320;
extern __int64 GameData_2237328;
extern __int64 GameData_2237330;
extern __int64 GameData_2237338;
extern __int64 GameData_2237350;
extern __int64 GameData_2237358;
extern __int64 GameData_2237360;
extern __int64 GameData_2237368;
extern __int64 GameData_2237370;
extern __int64 GameData_2237378;
extern __int64 GameData_2237390;
extern __int64 GameData_2237398;
extern __int64 GameData_22373a0;
extern __int64 GameData_22373a8;
extern __int64 GameData_22373b0;
extern __int64 GameData_22373b8;
extern __int64 GameData_22373d0;
extern __int64 GameData_22373d8;
extern __int64 GameData_22373e0;
extern __int64 GameData_22373e8;
extern __int64 GameData_22373f0;
extern __int64 GameData_22373f8;
extern __int64 GameData_2237410;
extern __int64 GameData_2237418;
extern __int64 GameData_2237420;
extern __int64 GameData_2237428;
extern __int64 GameData_2237430;
extern __int64 GameData_2237438;
extern __int64 GameData_2237450;
extern __int64 GameData_2237458;
extern __int64 GameData_2237460;
extern __int64 GameData_2237468;
extern __int64 GameData_2237470;
extern __int64 GameData_2237478;
extern __int64 GameData_2237490;
extern __int64 GameData_2237498;
extern __int64 GameData_22374a0;
extern __int64 GameData_22374a8;
extern __int64 GameData_22374b0;
extern __int64 GameData_22374b8;
extern __int64 GameData_22374d0;
extern __int64 GameData_22374d8;
extern __int64 GameData_22374e0;
extern __int64 GameData_22374e8;
extern __int64 GameData_22374f0;
extern __int64 GameData_22374f8;
extern __int64 GameData_2237510;
extern __int64 GameData_2237518;
extern __int64 GameData_2237520;
extern __int64 GameData_2237528;
extern __int64 GameData_2237530;
extern __int64 GameData_2237538;
extern __int64 GameData_2237550;
extern __int64 GameData_2237558;
extern __int64 GameData_2237560;
extern __int64 GameData_2237568;
extern __int64 GameData_2237570;
extern __int64 GameData_2237578;
extern __int64 GameData_2237590;
extern __int64 GameData_2237598;
extern __int64 GameData_22375a0;
extern __int64 GameData_22375a8;
extern __int64 GameData_22375b0;
extern __int64 GameData_22375b8;
extern __int64 GameData_22375d0;
extern __int64 GameData_22375d8;
extern __int64 GameData_22375e0;
extern __int64 GameData_22375e8;
extern __int64 GameData_22375f0;
extern __int64 GameData_22375f8;
extern __int64 GameData_2237610;
extern __int64 GameData_2237618;
extern __int64 GameData_2237620;
extern __int64 GameData_2237628;
extern __int64 GameData_2237630;
extern __int64 GameData_2237638;
extern __int64 GameData_2237650;
extern __int64 GameData_2237658;
extern __int64 GameData_2237660;
extern __int64 GameData_2237668;
extern __int64 GameData_2237670;
extern __int64 GameData_2237678;
extern __int64 GameData_2237690;
extern __int64 GameData_2237698;
extern __int64 GameData_22376a0;
extern __int64 GameData_22376a8;
extern __int64 GameData_22376b0;
extern __int64 GameData_22376b8;
extern __int64 GameData_22376d0;
extern __int64 GameData_22376d8;
extern __int64 GameData_22376e0;
extern __int64 GameData_22376e8;
extern __int64 GameData_22376f0;
extern __int64 GameData_22376f8;
extern __int64 GameData_2237710;
extern __int64 GameData_2237718;
extern __int64 GameData_2237720;
extern __int64 GameData_2237728;
extern __int64 GameData_2237730;
extern __int64 GameData_2237738;
extern __int64 GameData_2237750;
extern __int64 GameData_2237758;
extern __int64 GameData_2237760;
extern __int64 GameData_2237768;
extern __int64 GameData_2237770;
extern __int64 GameData_2237778;
extern __int64 GameData_2237790;
extern __int64 GameData_2237798;
extern __int64 GameData_22377a0;
extern __int64 GameData_22377a8;
extern __int64 GameData_22377b0;
extern __int64 GameData_22377b8;
extern __int64 GameData_22377d0;
extern __int64 GameData_22377d8;
extern __int64 GameData_22377e0;
extern __int64 GameData_22377e8;
extern __int64 GameData_22377f0;
extern __int64 GameData_22377f8;
extern __int64 GameData_2237810;
extern __int64 GameData_2237818;
extern __int64 GameData_2237820;
extern __int64 GameData_2237828;
extern __int64 GameData_2237830;
extern __int64 GameData_2237838;
extern __int64 GameData_2237850;
extern __int64 GameData_2237858;
extern __int64 GameData_2237860;
extern __int64 GameData_2237868;
extern __int64 GameData_2237870;
extern __int64 GameData_2237878;
extern __int64 GameData_2237890;
extern __int64 GameData_2237898;
extern __int64 GameData_22378a0;
extern __int64 GameData_22378a8;
extern __int64 GameData_22378b0;
extern __int64 GameData_22378b8;
extern __int64 GameData_22378d0;
extern __int64 GameData_22378d8;
extern __int64 GameData_22378e0;
extern __int64 GameData_22378e8;
extern __int64 GameData_22378f0;
extern __int64 GameData_22378f8;
extern __int64 GameData_2237910;
extern __int64 GameData_2237918;
extern __int64 GameData_2237920;
extern __int64 GameData_2237928;
extern __int64 GameData_2237930;
extern __int64 GameData_2237938;
extern __int64 GameData_2237950;
extern __int64 GameData_2237958;
extern __int64 GameData_2237960;
extern __int64 GameData_2237968;
extern __int64 GameData_2237970;
extern __int64 GameData_2237978;
extern __int64 GameData_2237990;
extern __int64 GameData_2237998;
extern __int64 GameData_22379a0;
extern __int64 GameData_22379a8;
extern __int64 GameData_22379b0;
extern __int64 GameData_22379b8;
extern __int64 GameData_22379d0;
extern __int64 GameData_22379d8;
extern __int64 GameData_22379e0;
extern __int64 GameData_22379e8;
extern __int64 GameData_22379f0;
extern __int64 GameData_22379f8;
extern __int64 GameData_2237a10;
extern __int64 GameData_2237a18;
extern __int64 GameData_2237a20;
extern __int64 GameData_2237a28;
extern __int64 GameData_2237a30;
extern __int64 GameData_2237a38;
extern __int64 GameData_2237a50;
extern __int64 GameData_2237a58;
extern __int64 GameData_2237a60;
extern __int64 GameData_2237a68;
extern __int64 GameData_2237a70;
extern __int64 GameData_2237a78;
extern __int64 GameData_2237a90;
extern __int64 GameData_2237a98;
extern __int64 GameData_2237aa0;
extern __int64 GameData_2237aa8;
extern __int64 GameData_2237ab0;
extern __int64 GameData_2237ab8;
extern __int64 GameData_2237ad0;
extern __int64 GameData_2237ad8;
extern __int64 GameData_2237ae0;
extern __int64 GameData_2237ae8;
extern __int64 GameData_2237af0;
extern __int64 GameData_2237af8;
extern __int64 GameData_2237b10;
extern __int64 GameData_2237b18;
extern __int64 GameData_2237b20;
extern __int64 GameData_2237b28;
extern __int64 GameData_2237b30;
extern __int64 GameData_2237b38;
extern __int64 GameData_2237b50;
extern __int64 GameData_2237b58;
extern __int64 GameData_2237b60;
extern __int64 GameData_2237b68;
extern __int64 GameData_2237b70;
extern __int64 GameData_2237b78;
extern __int64 GameData_2237b90;
extern __int64 GameData_2237b98;
extern __int64 GameData_2237ba0;
extern __int64 GameData_2237ba8;
extern __int64 GameData_2237bb0;
extern __int64 GameData_2237bb8;
extern __int64 GameData_2237bd0;
extern __int64 GameData_2237bd8;
extern __int64 GameData_2237be0;
extern __int64 GameData_2237be8;
extern __int64 GameData_2237bf0;
extern __int64 GameData_2237bf8;
extern __int64 GameData_2237c10;
extern __int64 GameData_2237c18;
extern __int64 GameData_2237c20;
extern __int64 GameData_2237c28;
extern __int64 GameData_2237c30;
extern __int64 GameData_2237c38;
extern __int64 GameData_2237c50;
extern __int64 GameData_2237c58;
extern __int64 GameData_2237c60;
extern __int64 GameData_2237c68;
extern __int64 GameData_2237c70;
extern __int64 GameData_2237c78;
extern __int64 GameData_2237c90;
extern __int64 GameData_2237c98;
extern __int64 GameData_2237ca0;
extern __int64 GameData_2237ca8;
extern __int64 GameData_2237cb0;
extern __int64 GameData_2237cb8;
extern __int64 GameData_2237cd0;
extern __int64 GameData_2237cd8;
extern __int64 GameData_2237ce0;
extern __int64 GameData_2237ce8;
extern __int64 GameData_2237cf0;
extern __int64 GameData_2237cf8;
extern __int64 GameData_2237d10;
extern __int64 GameData_2237d18;
extern __int64 GameData_2237d20;
extern __int64 GameData_2237d28;
extern __int64 GameData_2237d30;
extern __int64 GameData_2237d38;
extern __int64 GameData_2237d50;
extern __int64 GameData_2237d58;
extern __int64 GameData_2237d60;
extern __int64 GameData_2237d68;
extern __int64 GameData_2237d70;
extern __int64 GameData_2237d78;
extern __int64 GameData_2237d90;
extern __int64 GameData_2237d98;
extern __int64 GameData_2237da0;
extern __int64 GameData_2237da8;
extern __int64 GameData_2237db0;
extern __int64 GameData_2237db8;
extern __int64 GameData_2237dd0;
extern __int64 GameData_2237dd8;
extern __int64 GameData_2237de0;
extern __int64 GameData_2237de8;
extern __int64 GameData_2237df0;
extern __int64 GameData_2237df8;
extern __int64 GameData_2237e10;
extern __int64 GameData_2237e18;
extern __int64 GameData_2237e20;
extern __int64 GameData_2237e28;
extern __int64 GameData_2237e30;
extern __int64 GameData_2237e38;
extern __int64 GameData_2237e50;
extern __int64 GameData_2237e58;
extern __int64 GameData_2237e60;
extern __int64 GameData_2237e68;
extern __int64 GameData_2237e70;
extern __int64 GameData_2237e78;
extern __int64 GameData_2237e90;
extern __int64 GameData_2237e98;
extern __int64 GameData_2237ea0;
extern __int64 GameData_2237ea8;
extern __int64 GameData_2237eb0;
extern __int64 GameData_2237eb8;
extern __int64 GameData_2237ed0;
extern __int64 GameData_2237ed8;
extern __int64 GameData_2237ee0;
extern __int64 GameData_2237ee8;
extern __int64 GameData_2237ef0;
extern __int64 GameData_2237ef8;
extern __int64 GameData_2237f10;
extern __int64 GameData_2237f18;
extern __int64 GameData_2237f20;
extern __int64 GameData_2237f28;
extern __int64 GameData_2237f30;
extern __int64 GameData_2237f38;
extern __int64 GameData_2237f50;
extern __int64 GameData_2237f58;
extern __int64 GameData_2237f60;
extern __int64 GameData_2237f68;
extern __int64 GameData_2237f70;
extern __int64 GameData_2237f78;
extern __int64 GameData_2237f90;
extern __int64 GameData_2237f98;
extern __int64 GameData_2237fa0;
extern __int64 GameData_2237fa8;
extern __int64 GameData_2237fb0;
extern __int64 GameData_2237fb8;
extern __int64 GameData_2237fd0;
extern __int64 GameData_2237fd8;
extern __int64 GameData_2237fe0;
extern __int64 GameData_2237fe8;
extern __int64 GameData_2237ff0;
extern __int64 GameData_2237ff8;
extern __int64 GameData_2238010;
extern __int64 GameData_2238018;
extern __int64 GameData_2238020;
extern __int64 GameData_2238028;
extern __int64 GameData_2238030;
extern __int64 GameData_2238038;
extern __int64 GameData_2238050;
extern __int64 GameData_2238058;
extern __int64 GameData_2238060;
extern __int64 GameData_2238068;
extern __int64 GameData_2238070;
extern __int64 GameData_2238078;
extern __int64 GameData_2238090;
extern __int64 GameData_2238098;
extern __int64 GameData_22380a0;
extern __int64 GameData_22380a8;
extern __int64 GameData_22380b0;
extern __int64 GameData_22380b8;
extern __int64 GameData_22380d0;
extern __int64 GameData_22380d8;
extern __int64 GameData_22380e0;
extern __int64 GameData_22380e8;
extern __int64 GameData_22380f0;
extern __int64 GameData_22380f8;
extern __int64 GameData_2238110;
extern __int64 GameData_2238118;
extern __int64 GameData_2238120;
extern __int64 GameData_2238128;
extern __int64 GameData_2238130;
extern __int64 GameData_2238138;
extern __int64 GameData_2238150;
extern __int64 GameData_2238158;
extern __int64 GameData_2238160;
extern __int64 GameData_2238168;
extern __int64 GameData_2238170;
extern __int64 GameData_2238178;
extern __int64 GameData_2238190;
extern __int64 GameData_2238198;
extern __int64 GameData_22381a0;
extern __int64 GameData_22381a8;
extern __int64 GameData_22381b0;
extern __int64 GameData_22381b8;
extern __int64 GameData_22381d0;
extern __int64 GameData_22381d8;
extern __int64 GameData_22381e0;
extern __int64 GameData_22381e8;
extern __int64 GameData_22381f0;
extern __int64 GameData_22381f8;
extern __int64 GameData_2238210;
extern __int64 GameData_2238218;
extern __int64 GameData_2238220;
extern __int64 GameData_2238228;
extern __int64 GameData_2238230;
extern __int64 GameData_2238238;
extern __int64 GameData_2238250;
extern __int64 GameData_2238258;
extern __int64 GameData_2238260;
extern __int64 GameData_2238268;
extern __int64 GameData_2238270;
extern __int64 GameData_2238278;
extern __int64 GameData_2238290;
extern __int64 GameData_2238298;
extern __int64 GameData_22382a0;
extern __int64 GameData_22382a8;
extern __int64 GameData_22382b0;
extern __int64 GameData_22382b8;
extern __int64 GameData_22382d0;
extern __int64 GameData_22382d8;
extern __int64 GameData_22382e0;
extern __int64 GameData_22382e8;
extern __int64 GameData_22382f0;
extern __int64 GameData_22382f8;
extern __int64 GameData_2238310;
extern __int64 GameData_2238318;
extern __int64 GameData_2238320;
extern __int64 GameData_2238328;
extern __int64 GameData_2238330;
extern __int64 GameData_2238338;
extern __int64 GameData_2238350;
extern __int64 GameData_2238358;
extern __int64 GameData_2238360;
extern __int64 GameData_2238368;
extern __int64 GameData_2238370;
extern __int64 GameData_2238378;
extern __int64 GameData_2238390;
extern __int64 GameData_2238398;
extern __int64 GameData_22383a0;
extern __int64 GameData_22383a8;
extern __int64 GameData_22383b0;
extern __int64 GameData_22383b8;
extern __int64 GameData_22383d0;
extern __int64 GameData_22383d8;
extern __int64 GameData_22383e0;
extern __int64 GameData_22383e8;
extern __int64 GameData_22383f0;
extern __int64 GameData_22383f8;
extern __int64 GameData_2238410;
extern __int64 GameData_2238418;
extern __int64 GameData_2238420;
extern __int64 GameData_2238428;
extern __int64 GameData_2238430;
extern __int64 GameData_2238438;
extern __int64 GameData_2238450;
extern __int64 GameData_2238458;
extern __int64 GameData_2238460;
extern __int64 GameData_2238468;
extern __int64 GameData_2238470;
extern __int64 GameData_2238478;
extern __int64 GameData_2238490;
extern __int64 GameData_2238498;
extern __int64 GameData_22384a0;
extern __int64 GameData_22384a8;
extern __int64 GameData_22384b0;
extern __int64 GameData_22384b8;
extern __int64 GameData_22384c0;
extern __int64 GameData_22384c8;
extern __int64 GameData_22384d0;
extern __int64 GameData_22384d8;
extern __int64 GameData_22384e0;
extern __int64 GameData_22384e8;
extern __int64 GameData_22384f0;
extern __int64 GameData_22384f8;
extern __int64 GameData_2238500;
extern __int64 GameData_2238508;
extern __int64 GameData_2238510;
extern __int64 GameData_2238518;
extern __int64 GameData_2238520;
extern __int64 GameData_2238528;
extern __int64 GameData_2238530;
extern __int64 GameData_2238538;
extern __int64 GameData_2238540;
extern __int64 GameData_2238548;
extern __int64 GameData_2238550;
extern __int64 GameData_2238558;
extern __int64 GameData_2238560;
extern __int64 GameData_2238568;
extern __int64 GameData_2238570;
extern __int64 GameData_2238578;
extern __int64 GameData_2238580;
extern __int64 GameData_2238588;
extern __int64 GameData_2238590;
extern __int64 GameData_2238598;
extern __int64 GameData_22385a0;
extern __int64 GameData_22385a8;
extern __int64 GameData_22385b0;
extern __int64 GameData_22385b8;
extern __int64 GameData_22385c0;
extern __int64 GameData_22385c8;
extern __int64 GameData_22385d0;
extern __int64 GameData_22385d8;
extern __int64 GameData_22385e0;
extern __int64 GameData_22385e8;
extern __int64 GameData_22385f0;
extern __int64 GameData_22385f8;
extern __int64 GameData_2238610;
extern __int64 GameData_2238618;
extern __int64 GameData_2238620;
extern __int64 GameData_2238628;
extern __int64 GameData_2238630;
extern __int64 GameData_2238638;
extern __int64 GameData_2238650;
extern __int64 GameData_2238658;
extern __int64 GameData_2238660;
extern __int64 GameData_2238668;
extern __int64 GameData_2238670;
extern __int64 GameData_2238678;
extern __int64 GameData_2238690;
extern __int64 GameData_2238698;
extern __int64 GameData_22386a0;
extern __int64 GameData_22386a8;
extern __int64 GameData_22386b0;
extern __int64 GameData_22386b8;
extern __int64 GameData_22386d0;
extern __int64 GameData_22386d8;
extern __int64 GameData_22386e0;
extern __int64 GameData_22386e8;
extern __int64 GameData_22386f0;
extern __int64 GameData_22386f8;
extern __int64 GameData_2238710;
extern __int64 GameData_2238718;
extern __int64 GameData_2238720;
extern __int64 GameData_2238728;
extern __int64 GameData_2238730;
extern __int64 GameData_2238738;
extern __int64 GameData_2238750;
extern __int64 GameData_2238758;
extern __int64 GameData_2238760;
extern __int64 GameData_2238768;
extern __int64 GameData_2238770;
extern __int64 GameData_2238778;
extern __int64 GameData_2238790;
extern __int64 GameData_2238798;
extern __int64 GameData_22387a0;
extern __int64 GameData_22387a8;
extern __int64 GameData_22387b0;
extern __int64 GameData_22387b8;
extern __int64 GameData_22387d0;
extern __int64 GameData_22387d8;
extern __int64 GameData_22387e0;
extern __int64 GameData_22387e8;
extern __int64 GameData_22387f0;
extern __int64 GameData_22387f8;
extern __int64 GameData_2238810;
extern __int64 GameData_2238818;
extern __int64 GameData_2238820;
extern __int64 GameData_2238828;
extern __int64 GameData_2238830;
extern __int64 GameData_2238838;
extern __int64 GameData_2238850;
extern __int64 GameData_2238858;
extern __int64 GameData_2238860;
extern __int64 GameData_2238868;
extern __int64 GameData_2238870;
extern __int64 GameData_2238878;
extern __int64 GameData_2238890;
extern __int64 GameData_2238898;
extern __int64 GameData_22388a0;
extern __int64 GameData_22388a8;
extern __int64 GameData_22388b0;
extern __int64 GameData_22388b8;
extern __int64 GameData_22388d0;
extern __int64 GameData_22388d8;
extern __int64 GameData_22388e0;
extern __int64 GameData_22388e8;
extern __int64 GameData_22388f0;
extern __int64 GameData_22388f8;
extern __int64 GameData_2238910;
extern __int64 GameData_2238918;
extern __int64 GameData_2238920;
extern __int64 GameData_2238928;
extern __int64 GameData_2238930;
extern __int64 GameData_2238938;
extern __int64 GameData_2238950;
extern __int64 GameData_2238958;
extern __int64 GameData_2238960;
extern __int64 GameData_2238968;
extern __int64 GameData_2238970;
extern __int64 GameData_2238978;
extern __int64 GameData_2238990;
extern __int64 GameData_2238998;
extern __int64 GameData_22389a0;
extern __int64 GameData_22389a8;
extern __int64 GameData_22389b0;
extern __int64 GameData_22389b8;
extern __int64 GameData_22389d0;
extern __int64 GameData_22389d8;
extern __int64 GameData_22389e0;
extern __int64 GameData_22389e8;
extern __int64 GameData_22389f0;
extern __int64 GameData_22389f8;
extern __int64 GameData_2238a10;
extern __int64 GameData_2238a18;
extern __int64 GameData_2238a20;
extern __int64 GameData_2238a28;
extern __int64 GameData_2238a30;
extern __int64 GameData_2238a38;
extern __int64 GameData_2238a50;
extern __int64 GameData_2238a58;
extern __int64 GameData_2238a60;
extern __int64 GameData_2238a68;
extern __int64 GameData_2238a70;
extern __int64 GameData_2238a78;
extern __int64 GameData_2238a90;
extern __int64 GameData_2238a98;
extern __int64 GameData_2238aa0;
extern __int64 GameData_2238aa8;
extern __int64 GameData_2238ab0;
extern __int64 GameData_2238ab8;
extern __int64 GameData_2238ad0;
extern __int64 GameData_2238ad8;
extern __int64 GameData_2238ae0;
extern __int64 GameData_2238ae8;
extern __int64 GameData_2238af0;
extern __int64 GameData_2238af8;
extern __int64 GameData_2238b10;
extern __int64 GameData_2238b18;
extern __int64 GameData_2238b20;
extern __int64 GameData_2238b28;
extern __int64 GameData_2238b30;
extern __int64 GameData_2238b38;
extern __int64 GameData_2238b50;
extern __int64 GameData_2238b58;
extern __int64 GameData_2238b60;
extern __int64 GameData_2238b68;
extern __int64 GameData_2238b70;
extern __int64 GameData_2238b78;
extern __int64 GameData_2238b90;
extern __int64 GameData_2238b98;
extern __int64 GameData_2238ba0;
extern __int64 GameData_2238ba8;
extern __int64 GameData_2238bb0;
extern __int64 GameData_2238bb8;
extern __int64 GameData_2238bd0;
extern __int64 GameData_2238bd8;
extern __int64 GameData_2238be0;
extern __int64 GameData_2238be8;
extern __int64 GameData_2238bf0;
extern __int64 GameData_2238bf8;
extern __int64 GameData_2238c10;
extern __int64 GameData_2238c18;
extern __int64 GameData_2238c20;
extern __int64 GameData_2238c28;
extern __int64 GameData_2238c30;
extern __int64 GameData_2238c38;
extern __int64 GameData_2238c50;
extern __int64 GameData_2238c58;
extern __int64 GameData_2238c60;
extern __int64 GameData_2238c68;
extern __int64 GameData_2238c70;
extern __int64 GameData_2238c78;
extern __int64 GameData_2238c90;
extern __int64 GameData_2238c98;
extern __int64 GameData_2238ca0;
extern __int64 GameData_2238ca8;
extern __int64 GameData_2238cb0;
extern __int64 GameData_2238cb8;
extern __int64 GameData_2238cd0;
extern __int64 GameData_2238cd8;
extern __int64 GameData_2238ce0;
extern __int64 GameData_2238ce8;
extern __int64 GameData_2238cf0;
extern __int64 GameData_2238cf8;
extern __int64 GameData_2238d10;
extern __int64 GameData_2238d18;
extern __int64 GameData_2238d20;
extern __int64 GameData_2238d28;
extern __int64 GameData_2238d30;
extern __int64 GameData_2238d38;
extern __int64 GameData_2238d50;
extern __int64 GameData_2238d58;
extern __int64 GameData_2238d60;
extern __int64 GameData_2238d68;
extern __int64 GameData_2238d70;
extern __int64 GameData_2238d78;
extern __int64 GameData_2238d90;
extern __int64 GameData_2238d98;
extern __int64 GameData_2238da0;
extern __int64 GameData_2238da8;
extern __int64 GameData_2238db0;
extern __int64 GameData_2238db8;
extern __int64 GameData_2238dd0;
extern __int64 GameData_2238dd8;
extern __int64 GameData_2238de0;
extern __int64 GameData_2238de8;
extern __int64 GameData_2238df0;
extern __int64 GameData_2238df8;
extern __int64 GameData_2238e10;
extern __int64 GameData_2238e18;
extern __int64 GameData_2238e20;
extern __int64 GameData_2238e28;
extern __int64 GameData_2238e30;
extern __int64 GameData_2238e38;
extern __int64 GameData_2238e50;
extern __int64 GameData_2238e58;
extern __int64 GameData_2238e60;
extern __int64 GameData_2238e68;
extern __int64 GameData_2238e70;
extern __int64 GameData_2238e78;
extern __int64 GameData_2238e90;
extern __int64 GameData_2238e98;
extern __int64 GameData_2238ea0;
extern __int64 GameData_2238ea8;
extern __int64 GameData_2238eb0;
extern __int64 GameData_2238eb8;
extern __int64 GameData_2238ed0;
extern __int64 GameData_2238ed8;
extern __int64 GameData_2238ee0;
extern __int64 GameData_2238ee8;
extern __int64 GameData_2238ef0;
extern __int64 GameData_2238ef8;
extern __int64 GameData_2238f10;
extern __int64 GameData_2238f18;
extern __int64 GameData_2238f20;
extern __int64 GameData_2238f28;
extern __int64 GameData_2238f30;
extern __int64 GameData_2238f38;
extern __int64 GameData_2238f50;
extern __int64 GameData_2238f58;
extern __int64 GameData_2238f60;
extern __int64 GameData_2238f68;
extern __int64 GameData_2238f70;
extern __int64 GameData_2238f78;
extern __int64 GameData_2238f90;
extern __int64 GameData_2238f98;
extern __int64 GameData_2238fa0;
extern __int64 GameData_2238fa8;
extern __int64 GameData_2238fb0;
extern __int64 GameData_2238fb8;
extern __int64 GameData_2238fd0;
extern __int64 GameData_2238fd8;
extern __int64 GameData_2238fe0;
extern __int64 GameData_2238fe8;
extern __int64 GameData_2238ff0;
extern __int64 GameData_2238ff8;
extern __int64 GameData_2239010;
extern __int64 GameData_2239018;
extern __int64 GameData_2239020;
extern __int64 GameData_2239028;
extern __int64 GameData_2239030;
extern __int64 GameData_2239038;
extern __int64 GameData_2239050;
extern __int64 GameData_2239058;
extern __int64 GameData_2239060;
extern __int64 GameData_2239068;
extern __int64 GameData_2239070;
extern __int64 GameData_2239078;
extern __int64 GameData_2239090;
extern __int64 GameData_2239098;
extern __int64 GameData_22390a0;
extern __int64 GameData_22390a8;
extern __int64 GameData_22390b0;
extern __int64 GameData_22390b8;
extern __int64 GameData_22390d0;
extern __int64 GameData_22390d8;
extern __int64 GameData_22390e0;
extern __int64 GameData_22390e8;
extern __int64 GameData_22390f0;
extern __int64 GameData_22390f8;
extern __int64 GameData_2239110;
extern __int64 GameData_2239118;
extern __int64 GameData_2239120;
extern __int64 GameData_2239128;
extern __int64 GameData_2239130;
extern __int64 GameData_2239138;
extern __int64 GameData_2239150;
extern __int64 GameData_2239158;
extern __int64 GameData_2239160;
extern __int64 GameData_2239168;
extern __int64 GameData_2239170;
extern __int64 GameData_2239178;
extern __int64 GameData_2239190;
extern __int64 GameData_2239198;
extern __int64 GameData_22391a0;
extern __int64 GameData_22391a8;
extern __int64 GameData_22391b0;
extern __int64 GameData_22391b8;
extern __int64 GameData_22391d0;
extern __int64 GameData_22391d8;
extern __int64 GameData_22391e0;
extern __int64 GameData_22391e8;
extern __int64 GameData_22391f0;
extern __int64 GameData_22391f8;
extern __int64 GameData_2239210;
extern __int64 GameData_2239218;
extern __int64 GameData_2239220;
extern __int64 GameData_2239228;
extern __int64 GameData_2239230;
extern __int64 GameData_2239238;
extern __int64 GameData_2239250;
extern __int64 GameData_2239258;
extern __int64 GameData_2239260;
extern __int64 GameData_2239268;
extern __int64 GameData_2239270;
extern __int64 GameData_2239278;
extern __int64 GameData_2239290;
extern __int64 GameData_2239298;
extern __int64 GameData_22392a0;
extern __int64 GameData_22392a8;
extern __int64 GameData_22392b0;
extern __int64 GameData_22392b8;
extern __int64 GameData_22392d0;
extern __int64 GameData_22392d8;
extern __int64 GameData_22392e0;
extern __int64 GameData_22392e8;
extern __int64 GameData_22392f0;
extern __int64 GameData_22392f8;
extern __int64 GameData_2239310;
extern __int64 GameData_2239318;
extern __int64 GameData_2239320;
extern __int64 GameData_2239328;
extern __int64 GameData_2239330;
extern __int64 GameData_2239338;
extern __int64 GameData_2239350;
extern __int64 GameData_2239358;
extern __int64 GameData_2239360;
extern __int64 GameData_2239368;
extern __int64 GameData_2239370;
extern __int64 GameData_2239378;
extern __int64 GameData_2239390;
extern __int64 GameData_2239398;
extern __int64 GameData_22393a0;
extern __int64 GameData_22393a8;
extern __int64 GameData_22393b0;
extern __int64 GameData_22393b8;
extern __int64 GameData_22393d0;
extern __int64 GameData_22393d8;
extern __int64 GameData_22393e0;
extern __int64 GameData_22393e8;
extern __int64 GameData_22393f0;
extern __int64 GameData_22393f8;
extern __int64 GameData_2239410;
extern __int64 GameData_2239418;
extern __int64 GameData_2239420;
extern __int64 GameData_2239428;
extern __int64 GameData_2239430;
extern __int64 GameData_2239438;
extern __int64 GameData_2239450;
extern __int64 GameData_2239458;
extern __int64 GameData_2239460;
extern __int64 GameData_2239468;
extern __int64 GameData_2239470;
extern __int64 GameData_2239478;
extern __int64 GameData_2239490;
extern __int64 GameData_2239498;
extern __int64 GameData_22394a0;
extern __int64 GameData_22394a8;
extern __int64 GameData_22394b0;
extern __int64 GameData_22394b8;
extern __int64 GameData_22394d0;
extern __int64 GameData_22394d8;
extern __int64 GameData_22394e0;
extern __int64 GameData_22394e8;
extern __int64 GameData_22394f0;
extern __int64 GameData_22394f8;
extern __int64 GameData_2239510;
extern __int64 GameData_2239518;
extern __int64 GameData_2239520;
extern __int64 GameData_2239528;
extern __int64 GameData_2239530;
extern __int64 GameData_2239538;
extern __int64 GameData_2239550;
extern __int64 GameData_2239558;
extern __int64 GameData_2239560;
extern __int64 GameData_2239568;
extern __int64 GameData_2239570;
extern __int64 GameData_2239578;
extern __int64 GameData_2239590;
extern __int64 GameData_2239598;
extern __int64 GameData_22395a0;
extern __int64 GameData_22395a8;
extern __int64 GameData_22395b0;
extern __int64 GameData_22395b8;
extern __int64 GameData_22395d0;
extern __int64 GameData_22395d8;
extern __int64 GameData_22395e0;
extern __int64 GameData_22395e8;
extern __int64 GameData_22395f0;
extern __int64 GameData_22395f8;
extern __int64 GameData_2239610;
extern __int64 GameData_2239618;
extern __int64 GameData_2239620;
extern __int64 GameData_2239628;
extern __int64 GameData_2239630;
extern __int64 GameData_2239638;
extern __int64 GameData_2239650;
extern __int64 GameData_2239658;
extern __int64 GameData_2239660;
extern __int64 GameData_2239668;
extern __int64 GameData_2239670;
extern __int64 GameData_2239678;
extern __int64 GameData_2239690;
extern __int64 GameData_2239698;
extern __int64 GameData_22396a0;
extern __int64 GameData_22396a8;
extern __int64 GameData_22396b0;
extern __int64 GameData_22396b8;
extern __int64 GameData_22396d0;
extern __int64 GameData_22396d8;
extern __int64 GameData_22396e0;
extern __int64 GameData_22396e8;
extern __int64 GameData_22396f0;
extern __int64 GameData_22396f8;
extern __int64 GameData_2239710;
extern __int64 GameData_2239718;
extern __int64 GameData_2239720;
extern __int64 GameData_2239728;
extern __int64 GameData_2239730;
extern __int64 GameData_2239738;
extern __int64 GameData_2239750;
extern __int64 GameData_2239758;
extern __int64 GameData_2239760;
extern __int64 GameData_2239768;
extern __int64 GameData_2239770;
extern __int64 GameData_2239778;
extern __int64 GameData_2239790;
extern __int64 GameData_2239798;
extern __int64 GameData_22397a0;
extern __int64 GameData_22397a8;
extern __int64 GameData_22397b0;
extern __int64 GameData_22397b8;
extern __int64 GameData_22397d0;
extern __int64 GameData_22397d8;
extern __int64 GameData_22397e0;
extern __int64 GameData_22397e8;
extern __int64 GameData_22397f0;
extern __int64 GameData_22397f8;
extern __int64 GameData_2239810;
extern __int64 GameData_2239818;
extern __int64 GameData_2239820;
extern __int64 GameData_2239828;
extern __int64 GameData_2239830;
extern __int64 GameData_2239838;
extern __int64 GameData_2239850;
extern __int64 GameData_2239858;
extern __int64 GameData_2239860;
extern __int64 GameData_2239868;
extern __int64 GameData_2239870;
extern __int64 GameData_2239878;
extern __int64 GameData_2239890;
extern __int64 GameData_2239898;
extern __int64 GameData_22398a0;
extern __int64 GameData_22398a8;
extern __int64 GameData_22398b0;
extern __int64 GameData_22398b8;
extern __int64 GameData_22398d0;
extern __int64 GameData_22398d8;
extern __int64 GameData_22398e0;
extern __int64 GameData_22398e8;
extern __int64 GameData_22398f0;
extern __int64 GameData_22398f8;
extern __int64 GameData_2239910;
extern __int64 GameData_2239918;
extern __int64 GameData_2239920;
extern __int64 GameData_2239928;
extern __int64 GameData_2239930;
extern __int64 GameData_2239938;
extern __int64 GameData_2239950;
extern __int64 GameData_2239958;
extern __int64 GameData_2239960;
extern __int64 GameData_2239968;
extern __int64 GameData_2239970;
extern __int64 GameData_2239978;
extern __int64 GameData_2239990;
extern __int64 GameData_2239998;
extern __int64 GameData_22399a0;
extern __int64 GameData_22399a8;
extern __int64 GameData_22399b0;
extern __int64 GameData_22399b8;
extern __int64 GameData_22399d0;
extern __int64 GameData_22399d8;
extern __int64 GameData_22399e0;
extern __int64 GameData_22399e8;
extern __int64 GameData_22399f0;
extern __int64 GameData_22399f8;
extern __int64 GameData_2239a10;
extern __int64 GameData_2239a18;
extern __int64 GameData_2239a20;
extern __int64 GameData_2239a28;
extern __int64 GameData_2239a30;
extern __int64 GameData_2239a38;
extern __int64 GameData_2239a50;
extern __int64 GameData_2239a58;
extern __int64 GameData_2239a60;
extern __int64 GameData_2239a68;
extern __int64 GameData_2239a70;
extern __int64 GameData_2239a78;
extern __int64 GameData_2239a90;
extern __int64 GameData_2239a98;
extern __int64 GameData_2239aa0;
extern __int64 GameData_2239aa8;
extern __int64 GameData_2239ab0;
extern __int64 GameData_2239ab8;
extern __int64 GameData_2239ad0;
extern __int64 GameData_2239ad8;
extern __int64 GameData_2239ae0;
extern __int64 GameData_2239ae8;
extern __int64 GameData_2239af0;
extern __int64 GameData_2239af8;
extern __int64 GameData_2239b10;
extern __int64 GameData_2239b18;
extern __int64 GameData_2239b20;
extern __int64 GameData_2239b28;
extern __int64 GameData_2239b30;
extern __int64 GameData_2239b38;
extern __int64 GameData_2239b50;
extern __int64 GameData_2239b58;
extern __int64 GameData_2239b60;
extern __int64 GameData_2239b68;
extern __int64 GameData_2239b70;
extern __int64 GameData_2239b78;
extern __int64 GameData_2239b90;
extern __int64 GameData_2239b98;
extern __int64 GameData_2239ba0;
extern __int64 GameData_2239ba8;
extern __int64 GameData_2239bb0;
extern __int64 GameData_2239bb8;
extern __int64 GameData_2239bd0;
extern __int64 GameData_2239bd8;
extern __int64 GameData_2239be0;
extern __int64 GameData_2239be8;
extern __int64 GameData_2239bf0;
extern __int64 GameData_2239bf8;
extern __int64 GameData_2239c10;
extern __int64 GameData_2239c18;
extern __int64 GameData_2239c20;
extern __int64 GameData_2239c28;
extern __int64 GameData_2239c30;
extern __int64 GameData_2239c38;
extern __int64 GameData_2239c50;
extern __int64 GameData_2239c58;
extern __int64 GameData_2239c60;
extern __int64 GameData_2239c68;
extern __int64 GameData_2239c70;
extern __int64 GameData_2239c78;
extern __int64 GameData_2239c90;
extern __int64 GameData_2239c98;
extern __int64 GameData_2239ca0;
extern __int64 GameData_2239ca8;
extern __int64 GameData_2239cb0;
extern __int64 GameData_2239cb8;
extern __int64 GameData_2239cd0;
extern __int64 GameData_2239cd8;
extern __int64 GameData_2239ce0;
extern __int64 GameData_2239ce8;
extern __int64 GameData_2239cf0;
extern __int64 GameData_2239cf8;
extern __int64 GameData_2239d10;
extern __int64 GameData_2239d18;
extern __int64 GameData_2239d20;
extern __int64 GameData_2239d28;
extern __int64 GameData_2239d30;
extern __int64 GameData_2239d38;
extern __int64 GameData_2239d50;
extern __int64 GameData_2239d58;
extern __int64 GameData_2239d60;
extern __int64 GameData_2239d68;
extern __int64 GameData_2239d70;
extern __int64 GameData_2239d78;
extern __int64 GameData_2239d90;
extern __int64 GameData_2239d98;
extern __int64 GameData_2239da0;
extern __int64 GameData_2239da8;
extern __int64 GameData_2239db0;
extern __int64 GameData_2239db8;
extern __int64 GameData_2239dd0;
extern __int64 GameData_2239dd8;
extern __int64 GameData_2239e70;
extern __int64 GameData_2239e78;
extern __int64 GameData_2239e80;
extern __int64 GameData_2239e88;
extern __int64 GameData_2239e90;
extern __int64 GameData_2239e98;
extern __int64 GameData_2239ea0;
extern __int64 GameData_2239eb0;
extern __int64 GameData_2239eb8;
extern __int64 GameData_2239ed0;
extern __int64 GameData_2239ee8;
extern __int64 GameData_2239f00;
extern __int64 GameData_2239f08;
extern __int64 GameData_2239f10;
extern __int64 GameData_2239f18;
extern __int64 GameData_2239f20;
extern __int64 GameData_2239f28;
extern __int64 GameData_2239f30;
extern __int64 GameData_2239f38;
extern __int64 GameData_2239f50;
extern __int64 GameData_2239f58;
extern __int64 GameData_2239f60;
extern __int64 GameData_2239f68;
extern __int64 GameData_2239f70;
extern __int64 GameData_2239f78;
extern __int64 GameData_2239f90;
extern __int64 GameData_2239f98;
extern __int64 GameData_2239fa0;
extern __int64 GameData_2239fa8;
extern __int64 GameData_2239fb0;
extern __int64 GameData_2239fb8;
extern __int64 GameData_2239fd0;
extern __int64 GameData_2239fd8;
extern __int64 GameData_2239fe0;
extern __int64 GameData_2239fe8;
extern __int64 GameData_2239ff0;
extern __int64 GameData_2239ff8;
extern __int64 GameData_223a010;
extern __int64 GameData_223a018;
extern __int64 GameData_223a020;
extern __int64 GameData_223a028;
extern __int64 GameData_223a030;
extern __int64 GameData_223a038;
extern __int64 GameData_223a050;
extern __int64 GameData_223a058;
extern __int64 GameData_223a060;
extern __int64 GameData_223a068;
extern __int64 GameData_223a070;
extern __int64 GameData_223a078;
extern __int64 GameData_223a090;
extern __int64 GameData_223a098;
extern __int64 GameData_223a0a0;
extern __int64 GameData_223a0a8;
extern __int64 GameData_223a0b0;
extern __int64 GameData_223a0b8;
extern __int64 GameData_223a0d0;
extern __int64 GameData_223a0d8;
extern __int64 GameData_223a0e0;
extern __int64 GameData_223a0e8;
extern __int64 GameData_223a0f0;
extern __int64 GameData_223a0f8;
extern __int64 GameData_223a110;
extern __int64 GameData_223a118;
extern __int64 GameData_223a120;
extern __int64 GameData_223a128;
extern __int64 GameData_223a130;
extern __int64 GameData_223a138;
extern __int64 GameData_223a150;
extern __int64 GameData_223a158;
extern __int64 GameData_223a160;
extern __int64 GameData_223a168;
extern __int64 GameData_223a170;
extern __int64 GameData_223a178;
extern __int64 GameData_223a190;
extern __int64 GameData_223a198;
extern __int64 GameData_223a1a0;
extern __int64 GameData_223a1a8;
extern __int64 GameData_223a1b0;
extern __int64 GameData_223a1b8;
extern __int64 GameData_223a1d0;
extern __int64 GameData_223a1d8;
extern __int64 GameData_223a1e0;
extern __int64 GameData_223a1e8;
extern __int64 GameData_223a1f0;
extern __int64 GameData_223a1f8;
extern __int64 GameData_223a210;
extern __int64 GameData_223a218;
extern __int64 GameData_223a220;
extern __int64 GameData_223a228;
extern __int64 GameData_223a230;
extern __int64 GameData_223a238;
extern __int64 GameData_223a250;
extern __int64 GameData_223a258;
extern __int64 GameData_223a260;
extern __int64 GameData_223a268;
extern __int64 GameData_223a270;
extern __int64 GameData_223a278;
extern __int64 GameData_223a290;
extern __int64 GameData_223a298;
extern __int64 GameData_223a2a0;
extern __int64 GameData_223a2a8;
extern __int64 GameData_223a2b0;
extern __int64 GameData_223a2b8;
extern __int64 GameData_223a2d0;
extern __int64 GameData_223a2d8;
extern __int64 GameData_223a2e0;
extern __int64 GameData_223a2e8;
extern __int64 GameData_223a2f0;
extern __int64 GameData_223a2f8;
extern __int64 GameData_223a310;
extern __int64 GameData_223a318;
extern __int64 GameData_223a320;
extern __int64 GameData_223a328;
extern __int64 GameData_223a330;
extern __int64 GameData_223a338;
extern __int64 GameData_223a350;
extern __int64 GameData_223a358;
extern __int64 GameData_223a360;
extern __int64 GameData_223a368;
extern __int64 GameData_223a370;
extern __int64 GameData_223a378;
extern __int64 GameData_223a390;
extern __int64 GameData_223a398;
extern __int64 GameData_223a3a0;
extern __int64 GameData_223a3a8;
extern __int64 GameData_223a3b0;
extern __int64 GameData_223a3b8;
extern __int64 GameData_223a3d0;
extern __int64 GameData_223a3d8;
extern __int64 GameData_223a3e0;
extern __int64 GameData_223a3e8;
extern __int64 GameData_223a3f0;
extern __int64 GameData_223a3f8;
extern __int64 GameData_223a410;
extern __int64 GameData_223a418;
extern __int64 GameData_223a420;
extern __int64 GameData_223a428;
extern __int64 GameData_223a430;
extern __int64 GameData_223a438;
extern __int64 GameData_223a450;
extern __int64 GameData_223a458;
extern __int64 GameData_223a460;
extern __int64 GameData_223a468;
extern __int64 GameData_223a470;
extern __int64 GameData_223a478;
extern __int64 GameData_223a490;
extern __int64 GameData_223a498;
extern __int64 GameData_223a4a0;
extern __int64 GameData_223a4a8;
extern __int64 GameData_223a4b0;
extern __int64 GameData_223a4b8;
extern __int64 GameData_223a4d0;
extern __int64 GameData_223a4d8;
extern __int64 GameData_223a4e0;
extern __int64 GameData_223a4e8;
extern __int64 GameData_223a4f0;
extern __int64 GameData_223a4f8;
extern __int64 GameData_223a510;
extern __int64 GameData_223a518;
extern __int64 GameData_223a520;
extern __int64 GameData_223a528;
extern __int64 GameData_223a530;
extern __int64 GameData_223a538;
extern __int64 GameData_223a540;
extern __int64 GameData_223a548;
extern __int64 GameData_223a550;
extern __int64 GameData_223a558;
extern __int64 GameData_223a560;
extern __int64 GameData_223a568;
extern __int64 GameData_223a570;
extern __int64 GameData_223a578;
extern __int64 GameData_223a580;
extern __int64 GameData_223a588;
extern __int64 GameData_223a590;
extern __int64 GameData_223a598;
extern __int64 GameData_223a5a0;
extern __int64 GameData_223a5a8;
extern __int64 GameData_223a5b0;
extern __int64 GameData_223a5b8;
extern __int64 GameData_223a5c0;
extern __int64 GameData_223a5c8;
extern __int64 GameData_223a5d0;
extern __int64 GameData_223a5d8;
extern __int64 GameData_223a5e0;
extern __int64 GameData_223a5e8;
extern __int64 GameData_223a5f0;
extern __int64 GameData_223a5f8;
extern __int64 GameData_223a600;
extern __int64 GameData_223a608;
extern __int64 GameData_223a610;
extern __int64 GameData_223a618;
extern __int64 GameData_223a630;
extern __int64 GameData_223a638;
extern __int64 GameData_223a640;
extern __int64 GameData_223a648;
extern __int64 GameData_223a650;
extern __int64 GameData_223a658;
extern __int64 GameData_223a670;
extern __int64 GameData_223a678;
extern __int64 GameData_223a680;
extern __int64 GameData_223a688;
extern __int64 GameData_223a690;
extern __int64 GameData_223a698;
extern __int64 GameData_223a6b0;
extern __int64 GameData_223a6b8;
extern __int64 GameData_223a6c0;
extern __int64 GameData_223a6c8;
extern __int64 GameData_223a6d0;
extern __int64 GameData_223a6d8;
extern __int64 GameData_223a6f0;
extern __int64 GameData_223a6f8;
extern __int64 GameData_223a700;
extern __int64 GameData_223a708;
extern __int64 GameData_223a710;
extern __int64 GameData_223a718;
extern __int64 GameData_223a730;
extern __int64 GameData_223a738;
extern __int64 GameData_223a740;
extern __int64 GameData_223a748;
extern __int64 GameData_223a750;
extern __int64 GameData_223a758;
extern __int64 GameData_223a770;
extern __int64 GameData_223a778;
extern __int64 GameData_223a780;
extern __int64 GameData_223a788;
extern __int64 GameData_223a790;
extern __int64 GameData_223a798;
extern __int64 GameData_223a7b0;
extern __int64 GameData_223a7b8;
extern __int64 GameData_223a7c0;
extern __int64 GameData_223a7c8;
extern __int64 GameData_223a7d0;
extern __int64 GameData_223a7d8;
extern __int64 GameData_223a7f0;
extern __int64 GameData_223a7f8;
extern __int64 GameData_223a800;
extern __int64 GameData_223a808;
extern __int64 GameData_223a810;
extern __int64 GameData_223a818;
extern __int64 GameData_223a830;
extern __int64 GameData_223a838;
extern __int64 GameData_223a840;
extern __int64 GameData_223a848;
extern __int64 GameData_223a850;
extern __int64 GameData_223a858;
extern __int64 GameData_223a870;
extern __int64 GameData_223a878;
extern __int64 GameData_223a880;
extern __int64 GameData_223a888;
extern __int64 GameData_223a890;
extern __int64 GameData_223a898;
extern __int64 GameData_223a8b0;
extern __int64 GameData_223a8b8;
extern __int64 GameData_223a8c0;
extern __int64 GameData_223a8c8;
extern __int64 GameData_223a8d0;
extern __int64 GameData_223a8d8;
extern __int64 GameData_223a8f0;
extern __int64 GameData_223a8f8;
extern __int64 GameData_223a900;
extern __int64 GameData_223a908;
extern __int64 GameData_223a910;
extern __int64 GameData_223a918;
extern __int64 GameData_223a930;
extern __int64 GameData_223a938;
extern __int64 GameData_223a940;
extern __int64 GameData_223a948;
extern __int64 GameData_223a950;
extern __int64 GameData_223a958;
extern __int64 GameData_223a970;
extern __int64 GameData_223a978;
extern __int64 GameData_223a980;
extern __int64 GameData_223a988;
extern __int64 GameData_223a990;
extern __int64 GameData_223a998;
extern __int64 GameData_223a9b0;
extern __int64 GameData_223a9b8;
extern __int64 GameData_223a9c0;
extern __int64 GameData_223a9c8;
extern __int64 GameData_223a9d0;
extern __int64 GameData_223a9d8;
extern __int64 GameData_223a9f0;
extern __int64 GameData_223a9f8;
extern __int64 GameData_223aa00;
extern __int64 GameData_223aa08;
extern __int64 GameData_223aa10;
extern __int64 GameData_223aa18;
extern __int64 GameData_223aa30;
extern __int64 GameData_223aa38;
extern __int64 GameData_223aa40;
extern __int64 GameData_223aa48;
extern __int64 GameData_223aa50;
extern __int64 GameData_223aa58;
extern __int64 GameData_223aa70;
extern __int64 GameData_223aa78;
extern __int64 GameData_223aa80;
extern __int64 GameData_223aa88;
extern __int64 GameData_223aa90;
extern __int64 GameData_223aa98;
extern __int64 GameData_223aab0;
extern __int64 GameData_223aab8;
extern __int64 GameData_223aac0;
extern __int64 GameData_223aac8;
extern __int64 GameData_223aad0;
extern __int64 GameData_223aad8;
extern __int64 GameData_223aaf0;
extern __int64 GameData_223aaf8;
extern __int64 GameData_223ab00;
extern __int64 GameData_223ab08;
extern __int64 GameData_223ab10;
extern __int64 GameData_223ab18;
extern __int64 GameData_223ab30;
extern __int64 GameData_223ab38;
extern __int64 GameData_223ab40;
extern __int64 GameData_223ab48;
extern __int64 GameData_223ab50;
extern __int64 GameData_223ab58;
extern __int64 GameData_223ab70;
extern __int64 GameData_223ab78;
extern __int64 GameData_223ab80;
extern __int64 GameData_223ab88;
extern __int64 GameData_223ab90;
extern __int64 GameData_223ab98;
extern __int64 GameData_223abb0;
extern __int64 GameData_223abb8;
extern __int64 GameData_223abc0;
extern __int64 GameData_223abc8;
extern __int64 GameData_223abd0;
extern __int64 GameData_223abd8;
extern __int64 GameData_223abf0;
extern __int64 GameData_223abf8;
extern __int64 GameData_223ac00;
extern __int64 GameData_223ac08;
extern __int64 GameData_223ac10;
extern __int64 GameData_223ac18;
extern __int64 GameData_223ac30;
extern __int64 GameData_223ac38;
extern __int64 GameData_223ac40;
extern __int64 GameData_223ac48;
extern __int64 GameData_223ac50;
extern __int64 GameData_223ac58;
extern __int64 GameData_223ac70;
extern __int64 GameData_223ac78;
extern __int64 GameData_223ac80;
extern __int64 GameData_223ac88;
extern __int64 GameData_223ac90;
extern __int64 GameData_223ac98;
extern __int64 GameData_223acb0;
extern __int64 GameData_223acb8;
extern __int64 GameData_223acc0;
extern __int64 GameData_223acc8;
extern __int64 GameData_223acd0;
extern __int64 GameData_223acd8;
extern __int64 GameData_223acf0;
extern __int64 GameData_223acf8;
extern __int64 GameData_223ad00;
extern __int64 GameData_223ad08;
extern __int64 GameData_223ad10;
extern __int64 GameData_223ad18;
extern __int64 GameData_223ad30;
extern __int64 GameData_223ad38;
extern __int64 GameData_223ad40;
extern __int64 GameData_223ad48;
extern __int64 GameData_223ad50;
extern __int64 GameData_223ad58;
extern __int64 GameData_223ad70;
extern __int64 GameData_223ad78;
extern __int64 GameData_223ad80;
extern __int64 GameData_223ad88;
extern __int64 GameData_223ad90;
extern __int64 GameData_223ad98;
extern __int64 GameData_223adb0;
extern __int64 GameData_223adb8;
extern __int64 GameData_223adc0;
extern __int64 GameData_223adc8;
extern __int64 GameData_223add0;
extern __int64 GameData_223add8;
extern __int64 GameData_223adf0;
extern __int64 GameData_223adf8;
extern __int64 GameData_223ae00;
extern __int64 GameData_223ae08;
extern __int64 GameData_223ae10;
extern __int64 GameData_223ae18;
extern __int64 GameData_223ae30;
extern __int64 GameData_223ae38;
extern __int64 GameData_223ae40;
extern __int64 GameData_223ae48;
extern __int64 GameData_223ae50;
extern __int64 GameData_223ae58;
extern __int64 GameData_223ae70;
extern __int64 GameData_223ae78;
extern __int64 GameData_223ae80;
extern __int64 GameData_223ae88;
extern __int64 GameData_223ae90;
extern __int64 GameData_223ae98;
extern __int64 GameData_223aeb0;
extern __int64 GameData_223aeb8;
extern __int64 GameData_223aec0;
extern __int64 GameData_223aec8;
extern __int64 GameData_223aed0;
extern __int64 GameData_223aed8;
extern __int64 GameData_223aef0;
extern __int64 GameData_223aef8;
extern __int64 GameData_223af00;
extern __int64 GameData_223af08;
extern __int64 GameData_223af10;
extern __int64 GameData_223af18;
extern __int64 GameData_223af30;
extern __int64 GameData_223af38;
extern __int64 GameData_223af40;
extern __int64 GameData_223af48;
extern __int64 GameData_223af50;
extern __int64 GameData_223af58;
extern __int64 GameData_223af70;
extern __int64 GameData_223af78;
extern __int64 GameData_223af80;
extern __int64 GameData_223af88;
extern __int64 GameData_223af90;
extern __int64 GameData_223af98;
extern __int64 GameData_223afb0;
extern __int64 GameData_223afb8;
extern __int64 GameData_223afc0;
extern __int64 GameData_223afc8;
extern __int64 GameData_223afd0;
extern __int64 GameData_223afd8;
extern __int64 GameData_223aff0;
extern __int64 GameData_223aff8;
extern __int64 GameData_223b000;
extern __int64 GameData_223b008;
extern __int64 GameData_223b010;
extern __int64 GameData_223b018;
extern __int64 GameData_223b030;
extern __int64 GameData_223b038;
extern __int64 GameData_223b040;
extern __int64 GameData_223b048;
extern __int64 GameData_223b050;
extern __int64 GameData_223b058;
extern __int64 GameData_223b070;
extern __int64 GameData_223b078;
extern __int64 GameData_223b080;
extern __int64 GameData_223b088;
extern __int64 GameData_223b090;
extern __int64 GameData_223b098;
extern __int64 GameData_223b0a0;
extern __int64 GameData_223b0a8;
extern __int64 GameData_223b0b0;
extern __int64 GameData_223b0b8;
extern __int64 GameData_223b0d0;
extern __int64 GameData_223b0d8;
extern __int64 GameData_223b0e0;
extern __int64 GameData_223b0e8;
extern __int64 GameData_223b0f0;
extern __int64 GameData_223b0f8;
extern __int64 GameData_223b110;
extern __int64 GameData_223b118;
extern __int64 GameData_223b120;
extern __int64 GameData_223b128;
extern __int64 GameData_223b130;
extern __int64 GameData_223b138;
extern __int64 GameData_223b150;
extern __int64 GameData_223b158;
extern __int64 GameData_223b160;
extern __int64 GameData_223b168;
extern __int64 GameData_223b170;
extern __int64 GameData_223b178;
extern __int64 GameData_223b190;
extern __int64 GameData_223b198;
extern __int64 GameData_223b1a0;
extern __int64 GameData_223b1a8;
extern __int64 GameData_223b1b0;
extern __int64 GameData_223b1b8;
extern __int64 GameData_223b1d0;
extern __int64 GameData_223b1d8;
extern __int64 GameData_223b1e0;
extern __int64 GameData_223b1e8;
extern __int64 GameData_223b1f0;
extern __int64 GameData_223b1f8;
extern __int64 GameData_223b210;
extern __int64 GameData_223b218;
extern __int64 GameData_223b220;
extern __int64 GameData_223b228;
extern __int64 GameData_223b230;
extern __int64 GameData_223b238;
extern __int64 GameData_223b250;
extern __int64 GameData_223b258;
extern __int64 GameData_223b260;
extern __int64 GameData_223b268;
extern __int64 GameData_223b270;
extern __int64 GameData_223b278;
extern __int64 GameData_223b290;
extern __int64 GameData_223b298;
extern __int64 GameData_223b2a0;
extern __int64 GameData_223b2a8;
extern __int64 GameData_223b2b0;
extern __int64 GameData_223b2b8;
extern __int64 GameData_223b2d0;
extern __int64 GameData_223b2d8;
extern __int64 GameData_223b2e0;
extern __int64 GameData_223b2e8;
extern __int64 GameData_223b2f0;
extern __int64 GameData_223b2f8;
extern __int64 GameData_223b310;
extern __int64 GameData_223b318;
extern __int64 GameData_223b320;
extern __int64 GameData_223b328;
extern __int64 GameData_223b330;
extern __int64 GameData_223b338;
extern __int64 GameData_223b350;
extern __int64 GameData_223b358;
extern __int64 GameData_223b360;
extern __int64 GameData_223b368;
extern __int64 GameData_223b370;
extern __int64 GameData_223b378;
extern __int64 GameData_223b390;
extern __int64 GameData_223b398;
extern __int64 GameData_223b3a0;
extern __int64 GameData_223b3a8;
extern __int64 GameData_223b3b0;
extern __int64 GameData_223b3b8;
extern __int64 GameData_223b3d0;
extern __int64 GameData_223b3d8;
extern __int64 GameData_223b3e0;
extern __int64 GameData_223b3e8;
extern __int64 GameData_223b3f0;
extern __int64 GameData_223b3f8;
extern __int64 GameData_223b410;
extern __int64 GameData_223b418;
extern __int64 GameData_223b420;
extern __int64 GameData_223b428;
extern __int64 GameData_223b430;
extern __int64 GameData_223b438;
extern __int64 GameData_223b450;
extern __int64 GameData_223b458;
extern __int64 GameData_223b460;
extern __int64 GameData_223b468;
extern __int64 GameData_223b470;
extern __int64 GameData_223b478;
extern __int64 GameData_223b490;
extern __int64 GameData_223b498;
extern __int64 GameData_223b4a0;
extern __int64 GameData_223b4a8;
extern __int64 GameData_223b4b0;
extern __int64 GameData_223b4b8;
extern __int64 GameData_223b4d0;
extern __int64 GameData_223b4d8;
extern __int64 GameData_223b4e0;
extern __int64 GameData_223b4e8;
extern __int64 GameData_223b4f0;
extern __int64 GameData_223b4f8;
extern __int64 GameData_223b510;
extern __int64 GameData_223b518;
extern __int64 GameData_223b520;
extern __int64 GameData_223b528;
extern __int64 GameData_223b530;
extern __int64 GameData_223b538;
extern __int64 GameData_223b550;
extern __int64 GameData_223b558;
extern __int64 GameData_223b560;
extern __int64 GameData_223b568;
extern __int64 GameData_223b570;
extern __int64 GameData_223b578;
extern __int64 GameData_223b590;
extern __int64 GameData_223b598;
extern __int64 GameData_223b5a0;
extern __int64 GameData_223b5a8;
extern __int64 GameData_223b5b0;
extern __int64 GameData_223b5b8;
extern __int64 GameData_223b5c0;
extern __int64 GameData_223b5c8;
extern __int64 GameData_223b5d0;
extern __int64 GameData_223b5d8;
extern __int64 GameData_223b5e0;
extern __int64 GameData_223b5e8;
extern __int64 GameData_223b5f0;
extern __int64 GameData_223b5f8;
extern __int64 GameData_223b600;
extern __int64 GameData_223b608;
extern __int64 GameData_223b610;
extern __int64 GameData_223b618;
extern __int64 GameData_223b620;
extern __int64 GameData_223b628;
extern __int64 GameData_223b630;
extern __int64 GameData_223b638;
extern __int64 GameData_223b640;
extern __int64 GameData_223b648;
extern __int64 GameData_223b650;
extern __int64 GameData_223b658;
extern __int64 GameData_223b660;
extern __int64 GameData_223b668;
extern __int64 GameData_223b670;
extern __int64 GameData_223b678;
extern __int64 GameData_223b680;
extern __int64 GameData_223b688;
extern __int64 GameData_223b690;
extern __int64 GameData_223b698;
extern __int64 GameData_223b6a0;
extern __int64 GameData_223b6a8;
extern __int64 GameData_223b6b0;
extern __int64 GameData_223b6b8;
extern __int64 GameData_223b6c0;
extern __int64 GameData_223b6c8;
extern __int64 GameData_223b6d0;
extern __int64 GameData_223b6d8;
extern __int64 GameData_223b6e0;
extern __int64 GameData_223b6e8;
extern __int64 GameData_223b6f0;
extern __int64 GameData_223b6f8;
extern __int64 GameData_223b710;
extern __int64 GameData_223b718;
extern __int64 GameData_223b720;
extern __int64 GameData_223b728;
extern __int64 GameData_223b730;
extern __int64 GameData_223b738;
extern __int64 GameData_223b750;
extern __int64 GameData_223b758;
extern __int64 GameData_223b760;
extern __int64 GameData_223b768;
extern __int64 GameData_223b770;
extern __int64 GameData_223b778;
extern __int64 GameData_223b790;
extern __int64 GameData_223b798;
extern __int64 GameData_223b7a0;
extern __int64 GameData_223b7a8;
extern __int64 GameData_223b7b0;
extern __int64 GameData_223b7b8;
extern __int64 GameData_223b7d0;
extern __int64 GameData_223b7d8;
extern __int64 GameData_223b7e0;
extern __int64 GameData_223b7e8;
extern __int64 GameData_223b7f0;
extern __int64 GameData_223b7f8;
extern __int64 GameData_223b810;
extern __int64 GameData_223b818;
extern __int64 GameData_223b820;
extern __int64 GameData_223b828;
extern __int64 GameData_223b830;
extern __int64 GameData_223b838;
extern __int64 GameData_223b850;
extern __int64 GameData_223b858;
extern __int64 GameData_223b860;
extern __int64 GameData_223b868;
extern __int64 GameData_223b870;
extern __int64 GameData_223b878;
extern __int64 GameData_223b890;
extern __int64 GameData_223b898;
extern __int64 GameData_223b8a0;
extern __int64 GameData_223b8a8;
extern __int64 GameData_223b8b0;
extern __int64 GameData_223b8b8;
extern __int64 GameData_223b8d0;
extern __int64 GameData_223b8d8;
extern __int64 GameData_223b8e0;
extern __int64 GameData_223b8e8;
extern __int64 GameData_223b8f0;
extern __int64 GameData_223b8f8;
extern __int64 GameData_223b910;
extern __int64 GameData_223b918;
extern __int64 GameData_223b920;
extern __int64 GameData_223b928;
extern __int64 GameData_223b930;
extern __int64 GameData_223b938;
extern __int64 GameData_223b950;
extern __int64 GameData_223b958;
extern __int64 GameData_223b960;
extern __int64 GameData_223b968;
extern __int64 GameData_223b970;
extern __int64 GameData_223b978;
extern __int64 GameData_223b990;
extern __int64 GameData_223b998;
extern __int64 GameData_223b9a0;
extern __int64 GameData_223b9a8;
extern __int64 GameData_223b9b0;
extern __int64 GameData_223b9b8;
extern __int64 GameData_223b9d0;
extern __int64 GameData_223b9d8;
extern __int64 GameData_223b9e0;
extern __int64 GameData_223b9e8;
extern __int64 GameData_223b9f0;
extern __int64 GameData_223b9f8;
extern __int64 GameData_223ba10;
extern __int64 GameData_223ba18;
extern __int64 GameData_223ba20;
extern __int64 GameData_223ba28;
extern __int64 GameData_223ba30;
extern __int64 GameData_223ba38;
extern __int64 GameData_223ba50;
extern __int64 GameData_223ba58;
extern __int64 GameData_223ba60;
extern __int64 GameData_223ba68;
extern __int64 GameData_223ba70;
extern __int64 GameData_223ba78;
extern __int64 GameData_223ba90;
extern __int64 GameData_223ba98;
extern __int64 GameData_223baa0;
extern __int64 GameData_223baa8;
extern __int64 GameData_223bab0;
extern __int64 GameData_223bab8;
extern __int64 GameData_223bad0;
extern __int64 GameData_223bad8;
extern __int64 GameData_223bae0;
extern __int64 GameData_223bae8;
extern __int64 GameData_223baf0;
extern __int64 GameData_223baf8;
extern __int64 GameData_223bb10;
extern __int64 GameData_223bb18;
extern __int64 GameData_223bb20;
extern __int64 GameData_223bb28;
extern __int64 GameData_223bb30;
extern __int64 GameData_223bb38;
extern __int64 GameData_223bb50;
extern __int64 GameData_223bb58;
extern __int64 GameData_223bb60;
extern __int64 GameData_223bb68;
extern __int64 GameData_223bb70;
extern __int64 GameData_223bb78;
extern __int64 GameData_223bb90;
extern __int64 GameData_223bb98;
extern __int64 GameData_223bba0;
extern __int64 GameData_223bba8;
extern __int64 GameData_223bbb0;
extern __int64 GameData_223bbb8;
extern __int64 GameData_223bbd0;
extern __int64 GameData_223bbd8;
extern __int64 GameData_223bbe0;
extern __int64 GameData_223bbe8;
extern __int64 GameData_223bbf0;
extern __int64 GameData_223bbf8;
extern __int64 GameData_223bc10;
extern __int64 GameData_223bc18;
extern __int64 GameData_223bc20;
extern __int64 GameData_223bc28;
extern __int64 GameData_223bc30;
extern __int64 GameData_223bc38;
extern __int64 GameData_223bc50;
extern __int64 GameData_223bc58;
extern __int64 GameData_223bc60;
extern __int64 GameData_223bc68;
extern __int64 GameData_223bc70;
extern __int64 GameData_223bc78;
extern __int64 GameData_223bc90;
extern __int64 GameData_223bc98;
extern __int64 GameData_223bca0;
extern __int64 GameData_223bca8;
extern __int64 GameData_223bcb0;
extern __int64 GameData_223bcb8;
extern __int64 GameData_223bcd0;
extern __int64 GameData_223bcd8;
extern __int64 GameData_223bce0;
extern __int64 GameData_223bce8;
extern __int64 GameData_223bcf0;
extern __int64 GameData_223bcf8;
extern __int64 GameData_223bd10;
extern __int64 GameData_223bd18;
extern __int64 GameData_223bd20;
extern __int64 GameData_223bd28;
extern __int64 GameData_223bd30;
extern __int64 GameData_223bd38;
extern __int64 GameData_223bd50;
extern __int64 GameData_223bd58;
extern __int64 GameData_223bd60;
extern __int64 GameData_223bd68;
extern __int64 GameData_223bd70;
extern __int64 GameData_223bd78;
extern __int64 GameData_223bd90;
extern __int64 GameData_223bd98;
extern __int64 GameData_223bda0;
extern __int64 GameData_223bda8;
extern __int64 GameData_223bdb0;
extern __int64 GameData_223bdb8;
extern __int64 GameData_223bdd0;
extern __int64 GameData_223bdd8;
extern __int64 GameData_223bde0;
extern __int64 GameData_223bde8;
extern __int64 GameData_223bdf0;
extern __int64 GameData_223bdf8;
extern __int64 GameData_223be10;
extern __int64 GameData_223be18;
extern __int64 GameData_223be20;
extern __int64 GameData_223be28;
extern __int64 GameData_223be30;
extern __int64 GameData_223be38;
extern __int64 GameData_223be50;
extern __int64 GameData_223be58;
extern __int64 GameData_223be60;
extern __int64 GameData_223be68;
extern __int64 GameData_223be70;
extern __int64 GameData_223be78;
extern __int64 GameData_223be90;
extern __int64 GameData_223be98;
extern __int64 GameData_223bea0;
extern __int64 GameData_223bea8;
extern __int64 GameData_223beb0;
extern __int64 GameData_223beb8;
extern __int64 GameData_223bed0;
extern __int64 GameData_223bed8;
extern __int64 GameData_223bee0;
extern __int64 GameData_223bee8;
extern __int64 GameData_223bef0;
extern __int64 GameData_223bef8;
extern __int64 GameData_223bf10;
extern __int64 GameData_223bf18;
extern __int64 GameData_223bf20;
extern __int64 GameData_223bf28;
extern __int64 GameData_223bf30;
extern __int64 GameData_223bf38;
extern __int64 GameData_223bf50;
extern __int64 GameData_223bf58;
extern __int64 GameData_223bf60;
extern __int64 GameData_223bf68;
extern __int64 GameData_223bf70;
extern __int64 GameData_223bf78;
extern __int64 GameData_223bf90;
extern __int64 GameData_223bf98;
extern __int64 GameData_223bfa0;
extern __int64 GameData_223bfa8;
extern __int64 GameData_223bfb0;
extern __int64 GameData_223bfb8;
extern __int64 GameData_223bfd0;
extern __int64 GameData_223bfd8;
extern __int64 GameData_223bfe0;
extern __int64 GameData_223bfe8;
extern __int64 GameData_223bff0;
extern __int64 GameData_223bff8;
extern __int64 GameData_223c010;
extern __int64 GameData_223c018;
extern __int64 GameData_223c020;
extern __int64 GameData_223c028;
extern __int64 GameData_223c030;
extern __int64 GameData_223c038;
extern __int64 GameData_223c050;
extern __int64 GameData_223c058;
extern __int64 GameData_223c060;
extern __int64 GameData_223c068;
extern __int64 GameData_223c070;
extern __int64 GameData_223c078;
extern __int64 GameData_223c090;
extern __int64 GameData_223c098;
extern __int64 GameData_223c0a0;
extern __int64 GameData_223c0a8;
extern __int64 GameData_223c0b0;
extern __int64 GameData_223c0b8;
extern __int64 GameData_223c0d0;
extern __int64 GameData_223c0d8;
extern __int64 GameData_223c0e0;
extern __int64 GameData_223c0e8;
extern __int64 GameData_223c0f0;
extern __int64 GameData_223c0f8;
extern __int64 GameData_223c110;
extern __int64 GameData_223c118;
extern __int64 GameData_223c120;
extern __int64 GameData_223c128;
extern __int64 GameData_223c130;
extern __int64 GameData_223c138;
extern __int64 GameData_223c150;
extern __int64 GameData_223c158;
extern __int64 GameData_223c160;
extern __int64 GameData_223c168;
extern __int64 GameData_223c170;
extern __int64 GameData_223c178;
extern __int64 GameData_223c190;
extern __int64 GameData_223c198;
extern __int64 GameData_223c1a0;
extern __int64 GameData_223c1a8;
extern __int64 GameData_223c1b0;
extern __int64 GameData_223c1b8;
extern __int64 GameData_223c1d0;
extern __int64 GameData_223c1d8;
extern __int64 GameData_223c1e0;
extern __int64 GameData_223c1e8;
extern __int64 GameData_223c1f0;
extern __int64 GameData_223c1f8;
extern __int64 GameData_223c210;
extern __int64 GameData_223c218;
extern __int64 GameData_223c220;
extern __int64 GameData_223c228;
extern __int64 GameData_223c230;
extern __int64 GameData_223c238;
extern __int64 GameData_223c250;
extern __int64 GameData_223c258;
extern __int64 GameData_223c260;
extern __int64 GameData_223c268;
extern __int64 GameData_223c270;
extern __int64 GameData_223c278;
extern __int64 GameData_223c290;
extern __int64 GameData_223c298;
extern __int64 GameData_223c2a0;
extern __int64 GameData_223c2a8;
extern __int64 GameData_223c2b0;
extern __int64 GameData_223c2b8;
extern __int64 GameData_223c2d0;
extern __int64 GameData_223c2d8;
extern __int64 GameData_223c2e0;
extern __int64 GameData_223c2e8;
extern __int64 GameData_223c2f0;
extern __int64 GameData_223c2f8;
extern __int64 GameData_223c310;
extern __int64 GameData_223c318;
extern __int64 GameData_223c320;
extern __int64 GameData_223c328;
extern __int64 GameData_223c330;
extern __int64 GameData_223c338;
extern __int64 GameData_223c350;
extern __int64 GameData_223c358;
extern __int64 GameData_223c360;
extern __int64 GameData_223c368;
extern __int64 GameData_223c370;
extern __int64 GameData_223c378;
extern __int64 GameData_223c390;
extern __int64 GameData_223c398;
extern __int64 GameData_223c3a0;
extern __int64 GameData_223c3a8;
extern __int64 GameData_223c3b0;
extern __int64 GameData_223c3b8;
extern __int64 GameData_223c3d0;
extern __int64 GameData_223c3d8;
extern __int64 GameData_223c3e0;
extern __int64 GameData_223c3e8;
extern __int64 GameData_223c3f0;
extern __int64 GameData_223c3f8;
extern __int64 GameData_223c410;
extern __int64 GameData_223c418;
extern __int64 GameData_223c420;
extern __int64 GameData_223c428;
extern __int64 GameData_223c430;
extern __int64 GameData_223c438;
extern __int64 GameData_223c450;
extern __int64 GameData_223c458;
extern __int64 GameData_223c460;
extern __int64 GameData_223c468;
extern __int64 GameData_223c470;
extern __int64 GameData_223c478;
extern __int64 GameData_223c490;
extern __int64 GameData_223c498;
extern __int64 GameData_223c4a0;
extern __int64 GameData_223c4a8;
extern __int64 GameData_223c4b0;
extern __int64 GameData_223c4b8;
extern __int64 GameData_223c4c0;
extern __int64 GameData_223c4c8;
extern __int64 GameData_223c4d0;
extern __int64 GameData_223c4d8;
extern __int64 GameData_223c4e0;
extern __int64 GameData_223c4e8;
extern __int64 GameData_223c4f0;
extern __int64 GameData_223c4f8;
extern __int64 GameData_223c500;
extern __int64 GameData_223c508;
extern __int64 GameData_223c510;
extern __int64 GameData_223c518;
extern __int64 GameData_223c520;
extern __int64 GameData_223c528;
extern __int64 GameData_223c530;
extern __int64 GameData_223c538;
extern __int64 GameData_223c540;
extern __int64 GameData_223c548;
extern __int64 GameData_223c550;
extern __int64 GameData_223c558;
extern __int64 GameData_223c560;
extern __int64 GameData_223c568;
extern __int64 GameData_223c570;
extern __int64 GameData_223c578;
extern __int64 GameData_223c580;
extern __int64 GameData_223c588;
extern __int64 GameData_223c590;
extern __int64 GameData_223c598;
extern __int64 GameData_223c5a0;
extern __int64 GameData_223c5a8;
extern __int64 GameData_223c5b0;
extern __int64 GameData_223c5b8;
extern __int64 GameData_223c5c0;
extern __int64 GameData_223c5c8;
extern __int64 GameData_223c5d0;
extern __int64 GameData_223c5d8;
extern __int64 GameData_223c5e0;
extern __int64 GameData_223c5e8;
extern __int64 GameData_223c5f0;
extern __int64 GameData_223c5f8;
extern __int64 GameData_223c610;
extern __int64 GameData_223c618;
extern __int64 GameData_223c620;
extern __int64 GameData_223c628;
extern __int64 GameData_223c630;
extern __int64 GameData_223c638;
extern __int64 GameData_223c650;
extern __int64 GameData_223c658;
extern __int64 GameData_223c660;
extern __int64 GameData_223c668;
extern __int64 GameData_223c670;
extern __int64 GameData_223c678;
extern __int64 GameData_223c690;
extern __int64 GameData_223c698;
extern __int64 GameData_223c6a0;
extern __int64 GameData_223c6a8;
extern __int64 GameData_223c6b0;
extern __int64 GameData_223c6b8;
extern __int64 GameData_223c6d0;
extern __int64 GameData_223c6d8;
extern __int64 GameData_223c6e0;
extern __int64 GameData_223c6e8;
extern __int64 GameData_223c6f0;
extern __int64 GameData_223c6f8;
extern __int64 GameData_223c710;
extern __int64 GameData_223c718;
extern __int64 GameData_223c720;
extern __int64 GameData_223c728;
extern __int64 GameData_223c730;
extern __int64 GameData_223c738;
extern __int64 GameData_223c750;
extern __int64 GameData_223c758;
extern __int64 GameData_223c760;
extern __int64 GameData_223c768;
extern __int64 GameData_223c770;
extern __int64 GameData_223c778;
extern __int64 GameData_223c790;
extern __int64 GameData_223c798;
extern __int64 GameData_223c7a0;
extern __int64 GameData_223c7a8;
extern __int64 GameData_223c7b0;
extern __int64 GameData_223c7b8;
extern __int64 GameData_223c7d0;
extern __int64 GameData_223c7d8;
extern __int64 GameData_223c7e0;
extern __int64 GameData_223c7e8;
extern __int64 GameData_223c7f0;
extern __int64 GameData_223c7f8;
extern __int64 GameData_223c810;
extern __int64 GameData_223c818;
extern __int64 GameData_223c820;
extern __int64 GameData_223c828;
extern __int64 GameData_223c830;
extern __int64 GameData_223c838;
extern __int64 GameData_223c850;
extern __int64 GameData_223c858;
extern __int64 GameData_223c860;
extern __int64 GameData_223c868;
extern __int64 GameData_223c870;
extern __int64 GameData_223c878;
extern __int64 GameData_223c890;
extern __int64 GameData_223c898;
extern __int64 GameData_223c8a0;
extern __int64 GameData_223c8a8;
extern __int64 GameData_223c8b0;
extern __int64 GameData_223c8b8;
extern __int64 GameData_223c8d0;
extern __int64 GameData_223c8d8;
extern __int64 GameData_223c8e0;
extern __int64 GameData_223c8e8;
extern __int64 GameData_223c8f0;
extern __int64 GameData_223c8f8;
extern __int64 GameData_223c910;
extern __int64 GameData_223c918;
extern __int64 GameData_223c920;
extern __int64 GameData_223c928;
extern __int64 GameData_223c930;
extern __int64 GameData_223c938;
extern __int64 GameData_223c950;
extern __int64 GameData_223c958;
extern __int64 GameData_223c960;
extern __int64 GameData_223c968;
extern __int64 GameData_223c970;
extern __int64 GameData_223c978;
extern __int64 GameData_223c990;
extern __int64 GameData_223c998;
extern __int64 GameData_223c9a0;
extern __int64 GameData_223c9a8;
extern __int64 GameData_223c9b0;
extern __int64 GameData_223c9b8;
extern __int64 GameData_223c9d0;
extern __int64 GameData_223c9d8;
extern __int64 GameData_223c9e0;
extern __int64 GameData_223c9e8;
extern __int64 GameData_223c9f0;
extern __int64 GameData_223c9f8;
extern __int64 GameData_223ca10;
extern __int64 GameData_223ca18;
extern __int64 GameData_223ca20;
extern __int64 GameData_223ca28;
extern __int64 GameData_223ca30;
extern __int64 GameData_223ca38;
extern __int64 GameData_223ca50;
extern __int64 GameData_223ca58;
extern __int64 GameData_223ca60;
extern __int64 GameData_223ca68;
extern __int64 GameData_223ca70;
extern __int64 GameData_223ca78;
extern __int64 GameData_223ca90;
extern __int64 GameData_223ca98;
extern __int64 GameData_223caa0;
extern __int64 GameData_223caa8;
extern __int64 GameData_223cab0;
extern __int64 GameData_223cab8;
extern __int64 GameData_223cad0;
extern __int64 GameData_223cad8;
extern __int64 GameData_223cae0;
extern __int64 GameData_223cae8;
extern __int64 GameData_223caf0;
extern __int64 GameData_223caf8;
extern __int64 GameData_223cb10;
extern __int64 GameData_223cb18;
extern __int64 GameData_223cb20;
extern __int64 GameData_223cb28;
extern __int64 GameData_223cb30;
extern __int64 GameData_223cb38;
extern __int64 GameData_223cb50;
extern __int64 GameData_223cb58;
extern __int64 GameData_223cb60;
extern __int64 GameData_223cb68;
extern __int64 GameData_223cb70;
extern __int64 GameData_223cb78;
extern __int64 GameData_223cb90;
extern __int64 GameData_223cb98;
extern __int64 GameData_223cba0;
extern __int64 GameData_223cba8;
extern __int64 GameData_223cbb0;
extern __int64 GameData_223cbb8;
extern __int64 GameData_223cbd0;
extern __int64 GameData_223cbd8;
extern __int64 GameData_223cbe0;
extern __int64 GameData_223cbe8;
extern __int64 GameData_223cbf0;
extern __int64 GameData_223cbf8;
extern __int64 GameData_223cc10;
extern __int64 GameData_223cc18;
extern __int64 GameData_223cc20;
extern __int64 GameData_223cc28;
extern __int64 GameData_223cc30;
extern __int64 GameData_223cc38;
extern __int64 GameData_223cc50;
extern __int64 GameData_223cc58;
extern __int64 GameData_223cc60;
extern __int64 GameData_223cc68;
extern __int64 GameData_223cc70;
extern __int64 GameData_223cc78;
extern __int64 GameData_223cc90;
extern __int64 GameData_223cc98;
extern __int64 GameData_223cca0;
extern __int64 GameData_223cca8;
extern __int64 GameData_223ccb0;
extern __int64 GameData_223ccb8;
extern __int64 GameData_223ccd0;
extern __int64 GameData_223ccd8;
extern __int64 GameData_223cce0;
extern __int64 GameData_223cce8;
extern __int64 GameData_223ccf0;
extern __int64 GameData_223ccf8;
extern __int64 GameData_223cd10;
extern __int64 GameData_223cd18;
extern __int64 GameData_223cd20;
extern __int64 GameData_223cd28;
extern __int64 GameData_223cd30;
extern __int64 GameData_223cd38;
extern __int64 GameData_223cd50;
extern __int64 GameData_223cd58;
extern __int64 GameData_223cd60;
extern __int64 GameData_223cd68;
extern __int64 GameData_223cd70;
extern __int64 GameData_223cd78;
extern __int64 GameData_223cd90;
extern __int64 GameData_223cd98;
extern __int64 GameData_223cda0;
extern __int64 GameData_223cda8;
extern __int64 GameData_223cdb0;
extern __int64 GameData_223cdb8;
extern __int64 GameData_223cdd0;
extern __int64 GameData_223cdd8;
extern __int64 GameData_223cde0;
extern __int64 GameData_223cde8;
extern __int64 GameData_223cdf0;
extern __int64 GameData_223cdf8;
extern __int64 GameData_223ce10;
extern __int64 GameData_223ce18;
extern __int64 GameData_223ce20;
extern __int64 GameData_223ce28;
extern __int64 GameData_223ce30;
extern __int64 GameData_223ce38;
extern __int64 GameData_223ce50;
extern __int64 GameData_223ce58;
extern __int64 GameData_223ce60;
extern __int64 GameData_223ce68;
extern __int64 GameData_223ce70;
extern __int64 GameData_223ce78;
extern __int64 GameData_223ce90;
extern __int64 GameData_223ce98;
extern __int64 GameData_223cea0;
extern __int64 GameData_223cea8;
extern __int64 GameData_223ceb0;
extern __int64 GameData_223ceb8;
extern __int64 GameData_223ced0;
extern __int64 GameData_223ced8;
extern __int64 GameData_223cee0;
extern __int64 GameData_223cee8;
extern __int64 GameData_223cef0;
extern __int64 GameData_223cef8;
extern __int64 GameData_223cf10;
extern __int64 GameData_223cf18;
extern __int64 GameData_223cf20;
extern __int64 GameData_223cf28;
extern __int64 GameData_223cf30;
extern __int64 GameData_223cf38;
extern __int64 GameData_223cf50;
extern __int64 GameData_223cf58;
extern __int64 GameData_223cf60;
extern __int64 GameData_223cf68;
extern __int64 GameData_223cf70;
extern __int64 GameData_223cf78;
extern __int64 GameData_223cf90;
extern __int64 GameData_223cf98;
extern __int64 GameData_223cfa0;
extern __int64 GameData_223cfa8;
extern __int64 GameData_223cfb0;
extern __int64 GameData_223cfb8;
extern __int64 GameData_223cfd0;
extern __int64 GameData_223cfd8;
extern __int64 GameData_223cfe0;
extern __int64 GameData_223cfe8;
extern __int64 GameData_223cff0;
extern __int64 GameData_223cff8;
extern __int64 GameData_223d010;
extern __int64 GameData_223d018;
extern __int64 GameData_223d020;
extern __int64 GameData_223d028;
extern __int64 GameData_223d030;
extern __int64 GameData_223d038;
extern __int64 GameData_223d050;
extern __int64 GameData_223d058;
extern __int64 GameData_223d060;
extern __int64 GameData_223d068;
extern __int64 GameData_223d070;
extern __int64 GameData_223d078;
extern __int64 GameData_223d080;
extern __int64 GameData_223d088;
extern __int64 GameData_223d090;
extern __int64 GameData_223d098;
extern __int64 GameData_223d0a0;
extern __int64 GameData_223d0a8;
extern __int64 GameData_223d0b0;
extern __int64 GameData_223d0b8;
extern __int64 GameData_223d0c0;
extern __int64 GameData_223d0c8;
extern __int64 GameData_223d0d0;
extern __int64 GameData_223d0d8;
extern __int64 GameData_223d0f0;
extern __int64 GameData_223d0f8;
extern __int64 GameData_223d100;
extern __int64 GameData_223d108;
extern __int64 GameData_223d110;
extern __int64 GameData_223d118;
extern __int64 GameData_223d120;
extern __int64 GameData_223d128;
extern __int64 GameData_223d130;
extern __int64 GameData_223d138;
extern __int64 GameData_223d140;
extern __int64 GameData_223d148;
extern __int64 GameData_223d150;
extern __int64 GameData_223d158;
extern __int64 GameData_223d160;
extern __int64 GameData_223d168;
extern __int64 GameData_223d170;
extern __int64 GameData_223d178;
extern __int64 GameData_223d180;
extern __int64 GameData_223d188;
extern __int64 GameData_223d190;
extern __int64 GameData_223d198;
extern __int64 GameData_223d1b0;
extern __int64 GameData_223d1b8;
extern __int64 GameData_223d1c0;
extern __int64 GameData_223d1c8;
extern __int64 GameData_223d1d0;
extern __int64 GameData_223d1d8;
extern __int64 GameData_223d1f0;
extern __int64 GameData_223d1f8;
extern __int64 GameData_223d200;
extern __int64 GameData_223d208;
extern __int64 GameData_223d210;
extern __int64 GameData_223d218;
extern __int64 GameData_223d230;
extern __int64 GameData_223d238;
extern __int64 GameData_223d240;
extern __int64 GameData_223d248;
extern __int64 GameData_223d250;
extern __int64 GameData_223d258;
extern __int64 GameData_223d270;
extern __int64 GameData_223d278;
extern __int64 GameData_223d280;
extern __int64 GameData_223d288;
extern __int64 GameData_223d290;
extern __int64 GameData_223d298;
extern __int64 GameData_223d2b0;
extern __int64 GameData_223d2b8;
extern __int64 GameData_223d2c0;
extern __int64 GameData_223d2c8;
extern __int64 GameData_223d2d0;
extern __int64 GameData_223d2d8;
extern __int64 GameData_223d2f0;
extern __int64 GameData_223d2f8;
extern __int64 GameData_223d300;
extern __int64 GameData_223d308;
extern __int64 GameData_223d310;
extern __int64 GameData_223d318;
extern __int64 GameData_223d330;
extern __int64 GameData_223d338;
extern __int64 GameData_223d340;
extern __int64 GameData_223d348;
extern __int64 GameData_223d350;
extern __int64 GameData_223d358;
extern __int64 GameData_223d370;
extern __int64 GameData_223d378;
extern __int64 GameData_223d380;
extern __int64 GameData_223d388;
extern __int64 GameData_223d390;
extern __int64 GameData_223d398;
extern __int64 GameData_223d3b0;
extern __int64 GameData_223d3b8;
extern __int64 GameData_223d3c0;
extern __int64 GameData_223d3c8;
extern __int64 GameData_223d3d0;
extern __int64 GameData_223d3d8;
extern __int64 GameData_223d3f0;
extern __int64 GameData_223d3f8;
extern __int64 GameData_223d400;
extern __int64 GameData_223d408;
extern __int64 GameData_223d410;
extern __int64 GameData_223d418;
extern __int64 GameData_223d430;
extern __int64 GameData_223d438;
extern __int64 GameData_223d440;
extern __int64 GameData_223d448;
extern __int64 GameData_223d450;
extern __int64 GameData_223d458;
extern __int64 GameData_223d470;
extern __int64 GameData_223d478;
extern __int64 GameData_223d480;
extern __int64 GameData_223d488;
extern __int64 GameData_223d490;
extern __int64 GameData_223d498;
extern __int64 GameData_223d4b0;
extern __int64 GameData_223d4b8;
extern __int64 GameData_223d4c0;
extern __int64 GameData_223d4c8;
extern __int64 GameData_223d4d0;
extern __int64 GameData_223d4d8;
extern __int64 GameData_223d4f0;
extern __int64 GameData_223d4f8;
extern __int64 GameData_223d500;
extern __int64 GameData_223d508;
extern __int64 GameData_223d510;
extern __int64 GameData_223d518;
extern __int64 GameData_223d530;
extern __int64 GameData_223d538;
extern __int64 GameData_223d540;
extern __int64 GameData_223d548;
extern __int64 GameData_223d550;
extern __int64 GameData_223d558;
extern __int64 GameData_223d570;
extern __int64 GameData_223d578;
extern __int64 GameData_223d580;
extern __int64 GameData_223d588;
extern __int64 GameData_223d590;
extern __int64 GameData_223d598;
extern __int64 GameData_223d5b0;
extern __int64 GameData_223d5b8;
extern __int64 GameData_223d5c0;
extern __int64 GameData_223d5c8;
extern __int64 GameData_223d5d0;
extern __int64 GameData_223d5d8;
extern __int64 GameData_223d5f0;
extern __int64 GameData_223d5f8;
extern __int64 GameData_223d600;
extern __int64 GameData_223d608;
extern __int64 GameData_223d610;
extern __int64 GameData_223d618;
extern __int64 GameData_223d630;
extern __int64 GameData_223d638;
extern __int64 GameData_223d640;
extern __int64 GameData_223d648;
extern __int64 GameData_223d650;
extern __int64 GameData_223d658;
extern __int64 GameData_223d670;
extern __int64 GameData_223d678;
extern __int64 GameData_223d680;
extern __int64 GameData_223d688;
extern __int64 GameData_223d690;
extern __int64 GameData_223d698;
extern __int64 GameData_223d6b0;
extern __int64 GameData_223d6b8;
extern __int64 GameData_223d6c0;
extern __int64 GameData_223d6c8;
extern __int64 GameData_223d6d0;
extern __int64 GameData_223d6d8;
extern __int64 GameData_223d6f0;
extern __int64 GameData_223d6f8;
extern __int64 GameData_223d700;
extern __int64 GameData_223d708;
extern __int64 GameData_223d710;
extern __int64 GameData_223d718;
extern __int64 GameData_223d730;
extern __int64 GameData_223d738;
extern __int64 GameData_223d740;
extern __int64 GameData_223d748;
extern __int64 GameData_223d750;
extern __int64 GameData_223d758;
extern __int64 GameData_223d770;
extern __int64 GameData_223d778;
extern __int64 GameData_223d780;
extern __int64 GameData_223d788;
extern __int64 GameData_223d790;
extern __int64 GameData_223d798;
extern __int64 GameData_223d7b0;
extern __int64 GameData_223d7b8;
extern __int64 GameData_223d7c0;
extern __int64 GameData_223d7c8;
extern __int64 GameData_223d7d0;
extern __int64 GameData_223d7d8;
extern __int64 GameData_223d7f0;
extern __int64 GameData_223d7f8;
extern __int64 GameData_223d800;
extern __int64 GameData_223d808;
extern __int64 GameData_223d810;
extern __int64 GameData_223d818;
extern __int64 GameData_223d830;
extern __int64 GameData_223d838;
extern __int64 GameData_223d840;
extern __int64 GameData_223d848;
extern __int64 GameData_223d850;
extern __int64 GameData_223d858;
extern __int64 GameData_223d870;
extern __int64 GameData_223d878;
extern __int64 GameData_223d880;
extern __int64 GameData_223d888;
extern __int64 GameData_223d890;
extern __int64 GameData_223d898;
extern __int64 GameData_223d8b0;
extern __int64 GameData_223d8b8;
extern __int64 GameData_223d8c0;
extern __int64 GameData_223d8c8;
extern __int64 GameData_223d8d0;
extern __int64 GameData_223d8d8;
extern __int64 GameData_223d8f0;
extern __int64 GameData_223d8f8;
extern __int64 GameData_223d900;
extern __int64 GameData_223d908;
extern __int64 GameData_223d910;
extern __int64 GameData_223d918;
extern __int64 GameData_223d930;
extern __int64 GameData_223d938;
extern __int64 GameData_2240f00;
extern __int64 GameData_2258fb8;
extern __int64 GameData_2258fc0;
extern __int64 GameData_2258fd8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_Dir_offsets_;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_1a9f09e;
extern char GameData_1afb680[24];
extern char GameData_21ca4ae;
extern char GameData_21ed5c2;
extern char GameData_21ed5c5;
extern char GameData_21eea6c;
extern char GameData_21eeaac;
extern char GameData_21eeac8;
extern char GameData_21f53f8;
extern char GameData_21f5438;
extern char GameData_21f5478;
extern char GameData_21f54b8;
extern char GameData_21f54f8;
extern char GameData_21f5538;
extern char GameData_21f5578;
extern char GameData_21f55b8;
extern char GameData_21f55f8;
extern char GameData_21f5638;
extern char GameData_21f5678;
extern char GameData_21f56b8;
extern char GameData_21f56f8;
extern char GameData_21f5738;
extern char GameData_21f5778;
extern char GameData_21f57b8;
extern char GameData_21f57f8;
extern char GameData_21f5838;
extern char GameData_21f5878;
extern char GameData_21f58b8;
extern char GameData_21f58f8;
extern char GameData_21f5938;
extern char GameData_21f5978;
extern char GameData_21f59b8;
extern char GameData_21f59f8;
extern char GameData_21f5a38;
extern char GameData_21f5a78;
extern char GameData_21f5ab8;
extern char GameData_21f5af8;
extern char GameData_21f5b38;
extern char GameData_21f5b78;
extern char GameData_21f5bb8;
extern char GameData_21f5bf8;
extern char GameData_21f5c38;
extern char GameData_21f5c78;
extern char GameData_21f5cb8;
extern char GameData_21f5cf8;
extern char GameData_21f5d38;
extern char GameData_21f5d78;
extern char GameData_21f5db8;
extern char GameData_21f5df8;
extern char GameData_21f5e38;
extern char GameData_21f5e78;
extern char GameData_21f5eb8;
extern char GameData_21f5ef8;
extern char GameData_21f5f38;
extern char GameData_21f5f78;
extern char GameData_2226620;
extern char GameData_2234630;
extern char GameData_2236570;
extern char GameData_2236b68;
extern char GameData_22371c0;
extern char GameData_22371c8;
extern char GameData_2237200;
extern char GameData_2237208;
extern char GameData_2237240;
extern char GameData_2237248;
extern char GameData_2237280;
extern char GameData_2237288;
extern char GameData_22372c0;
extern char GameData_22372c8;
extern char GameData_2237300;
extern char GameData_2237308;
extern char GameData_2237340;
extern char GameData_2237348;
extern char GameData_2237380;
extern char GameData_2237388;
extern char GameData_22373c0;
extern char GameData_22373c8;
extern char GameData_2237400;
extern char GameData_2237408;
extern char GameData_2237440;
extern char GameData_2237448;
extern char GameData_2237480;
extern char GameData_2237488;
extern char GameData_22374c0;
extern char GameData_22374c8;
extern char GameData_2237500;
extern char GameData_2237508;
extern char GameData_2237540;
extern char GameData_2237548;
extern char GameData_2237580;
extern char GameData_2237588;
extern char GameData_22375c0;
extern char GameData_22375c8;
extern char GameData_2237600;
extern char GameData_2237608;
extern char GameData_2237640;
extern char GameData_2237648;
extern char GameData_2237680;
extern char GameData_2237688;
extern char GameData_22376c0;
extern char GameData_22376c8;
extern char GameData_2237700;
extern char GameData_2237708;
extern char GameData_2237740;
extern char GameData_2237748;
extern char GameData_2237780;
extern char GameData_2237788;
extern char GameData_22377c0;
extern char GameData_22377c8;
extern char GameData_2237800;
extern char GameData_2237808;
extern char GameData_2237840;
extern char GameData_2237848;
extern char GameData_2237880;
extern char GameData_2237888;
extern char GameData_22378c0;
extern char GameData_22378c8;
extern char GameData_2237900;
extern char GameData_2237908;
extern char GameData_2237940;
extern char GameData_2237948;
extern char GameData_2237980;
extern char GameData_2237988;
extern char GameData_22379c0;
extern char GameData_22379c8;
extern char GameData_2237a00;
extern char GameData_2237a08;
extern char GameData_2237a40;
extern char GameData_2237a48;
extern char GameData_2237a80;
extern char GameData_2237a88;
extern char GameData_2237ac0;
extern char GameData_2237ac8;
extern char GameData_2237b00;
extern char GameData_2237b08;
extern char GameData_2237b40;
extern char GameData_2237b48;
extern char GameData_2237b80;
extern char GameData_2237b88;
extern char GameData_2237bc0;
extern char GameData_2237bc8;
extern char GameData_2237c00;
extern char GameData_2237c08;
extern char GameData_2237c40;
extern char GameData_2237c48;
extern char GameData_2237c80;
extern char GameData_2237c88;
extern char GameData_2237cc0;
extern char GameData_2237cc8;
extern char GameData_2237d00;
extern char GameData_2237d08;
extern char GameData_2237d40;
extern char GameData_2237d48;
extern char GameData_2237d80;
extern char GameData_2237d88;
extern char GameData_2237dc0;
extern char GameData_2237dc8;
extern char GameData_2237e00;
extern char GameData_2237e08;
extern char GameData_2237e40;
extern char GameData_2237e48;
extern char GameData_2237e80;
extern char GameData_2237e88;
extern char GameData_2237ec0;
extern char GameData_2237ec8;
extern char GameData_2237f00;
extern char GameData_2237f08;
extern char GameData_2237f40;
extern char GameData_2237f48;
extern char GameData_2237f80;
extern char GameData_2237f88;
extern char GameData_2237fc0;
extern char GameData_2237fc8;
extern char GameData_2238000;
extern char GameData_2238008;
extern char GameData_2238040;
extern char GameData_2238048;
extern char GameData_2238080;
extern char GameData_2238088;
extern char GameData_22380c0;
extern char GameData_22380c8;
extern char GameData_2238100;
extern char GameData_2238108;
extern char GameData_2238140;
extern char GameData_2238148;
extern char GameData_2238180;
extern char GameData_2238188;
extern char GameData_22381c0;
extern char GameData_22381c8;
extern char GameData_2238200;
extern char GameData_2238208;
extern char GameData_2238240;
extern char GameData_2238248;
extern char GameData_2238280;
extern char GameData_2238288;
extern char GameData_22382c0;
extern char GameData_22382c8;
extern char GameData_2238300;
extern char GameData_2238308;
extern char GameData_2238340;
extern char GameData_2238348;
extern char GameData_2238380;
extern char GameData_2238388;
extern char GameData_22383c0;
extern char GameData_22383c8;
extern char GameData_2238400;
extern char GameData_2238408;
extern char GameData_2238440;
extern char GameData_2238448;
extern char GameData_2238480;
extern char GameData_2238488;
extern char GameData_2238600;
extern char GameData_2238608;
extern char GameData_2238640;
extern char GameData_2238648;
extern char GameData_2238680;
extern char GameData_2238688;
extern char GameData_22386c0;
extern char GameData_22386c8;
extern char GameData_2238700;
extern char GameData_2238708;
extern char GameData_2238740;
extern char GameData_2238748;
extern char GameData_2238780;
extern char GameData_2238788;
extern char GameData_22387c0;
extern char GameData_22387c8;
extern char GameData_2238800;
extern char GameData_2238808;
extern char GameData_2238840;
extern char GameData_2238848;
extern char GameData_2238880;
extern char GameData_2238888;
extern char GameData_22388c0;
extern char GameData_22388c8;
extern char GameData_2238900;
extern char GameData_2238908;
extern char GameData_2238940;
extern char GameData_2238948;
extern char GameData_2238980;
extern char GameData_2238988;
extern char GameData_22389c0;
extern char GameData_22389c8;
extern char GameData_2238a00;
extern char GameData_2238a08;
extern char GameData_2238a40;
extern char GameData_2238a48;
extern char GameData_2238a80;
extern char GameData_2238a88;
extern char GameData_2238ac0;
extern char GameData_2238ac8;
extern char GameData_2238b00;
extern char GameData_2238b08;
extern char GameData_2238b40;
extern char GameData_2238b48;
extern char GameData_2238b80;
extern char GameData_2238b88;
extern char GameData_2238bc0;
extern char GameData_2238bc8;
extern char GameData_2238c00;
extern char GameData_2238c08;
extern char GameData_2238c40;
extern char GameData_2238c48;
extern char GameData_2238c80;
extern char GameData_2238c88;
extern char GameData_2238cc0;
extern char GameData_2238cc8;
extern char GameData_2238d00;
extern char GameData_2238d08;
extern char GameData_2238d40;
extern char GameData_2238d48;
extern char GameData_2238d80;
extern char GameData_2238d88;
extern char GameData_2238dc0;
extern char GameData_2238dc8;
extern char GameData_2238e00;
extern char GameData_2238e08;
extern char GameData_2238e40;
extern char GameData_2238e48;
extern char GameData_2238e80;
extern char GameData_2238e88;
extern char GameData_2238ec0;
extern char GameData_2238ec8;
extern char GameData_2238f00;
extern char GameData_2238f08;
extern char GameData_2238f40;
extern char GameData_2238f48;
extern char GameData_2238f80;
extern char GameData_2238f88;
extern char GameData_2238fc0;
extern char GameData_2238fc8;
extern char GameData_2239000;
extern char GameData_2239008;
extern char GameData_2239040;
extern char GameData_2239048;
extern char GameData_2239080;
extern char GameData_2239088;
extern char GameData_22390c0;
extern char GameData_22390c8;
extern char GameData_2239100;
extern char GameData_2239108;
extern char GameData_2239140;
extern char GameData_2239148;
extern char GameData_2239180;
extern char GameData_2239188;
extern char GameData_22391c0;
extern char GameData_22391c8;
extern char GameData_2239200;
extern char GameData_2239208;
extern char GameData_2239240;
extern char GameData_2239248;
extern char GameData_2239280;
extern char GameData_2239288;
extern char GameData_22392c0;
extern char GameData_22392c8;
extern char GameData_2239300;
extern char GameData_2239308;
extern char GameData_2239340;
extern char GameData_2239348;
extern char GameData_2239380;
extern char GameData_2239388;
extern char GameData_22393c0;
extern char GameData_22393c8;
extern char GameData_2239400;
extern char GameData_2239408;
extern char GameData_2239440;
extern char GameData_2239448;
extern char GameData_2239480;
extern char GameData_2239488;
extern char GameData_22394c0;
extern char GameData_22394c8;
extern char GameData_2239500;
extern char GameData_2239508;
extern char GameData_2239540;
extern char GameData_2239548;
extern char GameData_2239580;
extern char GameData_2239588;
extern char GameData_22395c0;
extern char GameData_22395c8;
extern char GameData_2239600;
extern char GameData_2239608;
extern char GameData_2239640;
extern char GameData_2239648;
extern char GameData_2239680;
extern char GameData_2239688;
extern char GameData_22396c0;
extern char GameData_22396c8;
extern char GameData_2239700;
extern char GameData_2239708;
extern char GameData_2239740;
extern char GameData_2239748;
extern char GameData_2239780;
extern char GameData_2239788;
extern char GameData_22397c0;
extern char GameData_22397c8;
extern char GameData_2239800;
extern char GameData_2239808;
extern char GameData_2239840;
extern char GameData_2239848;
extern char GameData_2239880;
extern char GameData_2239888;
extern char GameData_22398c0;
extern char GameData_22398c8;
extern char GameData_2239900;
extern char GameData_2239908;
extern char GameData_2239940;
extern char GameData_2239948;
extern char GameData_2239980;
extern char GameData_2239988;
extern char GameData_22399c0;
extern char GameData_22399c8;
extern char GameData_2239a00;
extern char GameData_2239a08;
extern char GameData_2239a40;
extern char GameData_2239a48;
extern char GameData_2239a80;
extern char GameData_2239a88;
extern char GameData_2239ac0;
extern char GameData_2239ac8;
extern char GameData_2239b00;
extern char GameData_2239b08;
extern char GameData_2239b40;
extern char GameData_2239b48;
extern char GameData_2239b80;
extern char GameData_2239b88;
extern char GameData_2239bc0;
extern char GameData_2239bc8;
extern char GameData_2239c00;
extern char GameData_2239c08;
extern char GameData_2239c40;
extern char GameData_2239c48;
extern char GameData_2239c80;
extern char GameData_2239c88;
extern char GameData_2239cc0;
extern char GameData_2239cc8;
extern char GameData_2239d00;
extern char GameData_2239d08;
extern char GameData_2239d40;
extern char GameData_2239d48;
extern char GameData_2239d80;
extern char GameData_2239d88;
extern char GameData_2239dc0;
extern char GameData_2239dc8;
extern char GameData_2239ea8;
extern char GameData_2239f40;
extern char GameData_2239f48;
extern char GameData_2239f80;
extern char GameData_2239f88;
extern char GameData_2239fc0;
extern char GameData_2239fc8;
extern char GameData_223a000;
extern char GameData_223a008;
extern char GameData_223a040;
extern char GameData_223a048;
extern char GameData_223a080;
extern char GameData_223a088;
extern char GameData_223a0c0;
extern char GameData_223a0c8;
extern char GameData_223a100;
extern char GameData_223a108;
extern char GameData_223a140;
extern char GameData_223a148;
extern char GameData_223a180;
extern char GameData_223a188;
extern char GameData_223a1c0;
extern char GameData_223a1c8;
extern char GameData_223a200;
extern char GameData_223a208;
extern char GameData_223a240;
extern char GameData_223a248;
extern char GameData_223a280;
extern char GameData_223a288;
extern char GameData_223a2c0;
extern char GameData_223a2c8;
extern char GameData_223a300;
extern char GameData_223a308;
extern char GameData_223a340;
extern char GameData_223a348;
extern char GameData_223a380;
extern char GameData_223a388;
extern char GameData_223a3c0;
extern char GameData_223a3c8;
extern char GameData_223a400;
extern char GameData_223a408;
extern char GameData_223a440;
extern char GameData_223a448;
extern char GameData_223a480;
extern char GameData_223a488;
extern char GameData_223a4c0;
extern char GameData_223a4c8;
extern char GameData_223a500;
extern char GameData_223a508;
extern char GameData_223a620;
extern char GameData_223a628;
extern char GameData_223a660;
extern char GameData_223a668;
extern char GameData_223a6a0;
extern char GameData_223a6a8;
extern char GameData_223a6e0;
extern char GameData_223a6e8;
extern char GameData_223a720;
extern char GameData_223a728;
extern char GameData_223a760;
extern char GameData_223a768;
extern char GameData_223a7a0;
extern char GameData_223a7a8;
extern char GameData_223a7e0;
extern char GameData_223a7e8;
extern char GameData_223a820;
extern char GameData_223a828;
extern char GameData_223a860;
extern char GameData_223a868;
extern char GameData_223a8a0;
extern char GameData_223a8a8;
extern char GameData_223a8e0;
extern char GameData_223a8e8;
extern char GameData_223a920;
extern char GameData_223a928;
extern char GameData_223a960;
extern char GameData_223a968;
extern char GameData_223a9a0;
extern char GameData_223a9a8;
extern char GameData_223a9e0;
extern char GameData_223a9e8;
extern char GameData_223aa20;
extern char GameData_223aa28;
extern char GameData_223aa60;
extern char GameData_223aa68;
extern char GameData_223aaa0;
extern char GameData_223aaa8;
extern char GameData_223aae0;
extern char GameData_223aae8;
extern char GameData_223ab20;
extern char GameData_223ab28;
extern char GameData_223ab60;
extern char GameData_223ab68;
extern char GameData_223aba0;
extern char GameData_223aba8;
extern char GameData_223abe0;
extern char GameData_223abe8;
extern char GameData_223ac20;
extern char GameData_223ac28;
extern char GameData_223ac60;
extern char GameData_223ac68;
extern char GameData_223aca0;
extern char GameData_223aca8;
extern char GameData_223ace0;
extern char GameData_223ace8;
extern char GameData_223ad20;
extern char GameData_223ad28;
extern char GameData_223ad60;
extern char GameData_223ad68;
extern char GameData_223ada0;
extern char GameData_223ada8;
extern char GameData_223ade0;
extern char GameData_223ade8;
extern char GameData_223ae20;
extern char GameData_223ae28;
extern char GameData_223ae60;
extern char GameData_223ae68;
extern char GameData_223aea0;
extern char GameData_223aea8;
extern char GameData_223aee0;
extern char GameData_223aee8;
extern char GameData_223af20;
extern char GameData_223af28;
extern char GameData_223af60;
extern char GameData_223af68;
extern char GameData_223afa0;
extern char GameData_223afa8;
extern char GameData_223afe0;
extern char GameData_223afe8;
extern char GameData_223b020;
extern char GameData_223b028;
extern char GameData_223b060;
extern char GameData_223b068;
extern char GameData_223b0c0;
extern char GameData_223b0c8;
extern char GameData_223b100;
extern char GameData_223b108;
extern char GameData_223b140;
extern char GameData_223b148;
extern char GameData_223b180;
extern char GameData_223b188;
extern char GameData_223b1c0;
extern char GameData_223b1c8;
extern char GameData_223b200;
extern char GameData_223b208;
extern char GameData_223b240;
extern char GameData_223b248;
extern char GameData_223b280;
extern char GameData_223b288;
extern char GameData_223b2c0;
extern char GameData_223b2c8;
extern char GameData_223b300;
extern char GameData_223b308;
extern char GameData_223b340;
extern char GameData_223b348;
extern char GameData_223b380;
extern char GameData_223b388;
extern char GameData_223b3c0;
extern char GameData_223b3c8;
extern char GameData_223b400;
extern char GameData_223b408;
extern char GameData_223b440;
extern char GameData_223b448;
extern char GameData_223b480;
extern char GameData_223b488;
extern char GameData_223b4c0;
extern char GameData_223b4c8;
extern char GameData_223b500;
extern char GameData_223b508;
extern char GameData_223b540;
extern char GameData_223b548;
extern char GameData_223b580;
extern char GameData_223b588;
extern char GameData_223b700;
extern char GameData_223b708;
extern char GameData_223b740;
extern char GameData_223b748;
extern char GameData_223b780;
extern char GameData_223b788;
extern char GameData_223b7c0;
extern char GameData_223b7c8;
extern char GameData_223b800;
extern char GameData_223b808;
extern char GameData_223b840;
extern char GameData_223b848;
extern char GameData_223b880;
extern char GameData_223b888;
extern char GameData_223b8c0;
extern char GameData_223b8c8;
extern char GameData_223b900;
extern char GameData_223b908;
extern char GameData_223b940;
extern char GameData_223b948;
extern char GameData_223b980;
extern char GameData_223b988;
extern char GameData_223b9c0;
extern char GameData_223b9c8;
extern char GameData_223ba00;
extern char GameData_223ba08;
extern char GameData_223ba40;
extern char GameData_223ba48;
extern char GameData_223ba80;
extern char GameData_223ba88;
extern char GameData_223bac0;
extern char GameData_223bac8;
extern char GameData_223bb00;
extern char GameData_223bb08;
extern char GameData_223bb40;
extern char GameData_223bb48;
extern char GameData_223bb80;
extern char GameData_223bb88;
extern char GameData_223bbc0;
extern char GameData_223bbc8;
extern char GameData_223bc00;
extern char GameData_223bc08;
extern char GameData_223bc40;
extern char GameData_223bc48;
extern char GameData_223bc80;
extern char GameData_223bc88;
extern char GameData_223bcc0;
extern char GameData_223bcc8;
extern char GameData_223bd00;
extern char GameData_223bd08;
extern char GameData_223bd40;
extern char GameData_223bd48;
extern char GameData_223bd80;
extern char GameData_223bd88;
extern char GameData_223bdc0;
extern char GameData_223bdc8;
extern char GameData_223be00;
extern char GameData_223be08;
extern char GameData_223be40;
extern char GameData_223be48;
extern char GameData_223be80;
extern char GameData_223be88;
extern char GameData_223bec0;
extern char GameData_223bec8;
extern char GameData_223bf00;
extern char GameData_223bf08;
extern char GameData_223bf40;
extern char GameData_223bf48;
extern char GameData_223bf80;
extern char GameData_223bf88;
extern char GameData_223bfc0;
extern char GameData_223bfc8;
extern char GameData_223c000;
extern char GameData_223c008;
extern char GameData_223c040;
extern char GameData_223c048;
extern char GameData_223c080;
extern char GameData_223c088;
extern char GameData_223c0c0;
extern char GameData_223c0c8;
extern char GameData_223c100;
extern char GameData_223c108;
extern char GameData_223c140;
extern char GameData_223c148;
extern char GameData_223c180;
extern char GameData_223c188;
extern char GameData_223c1c0;
extern char GameData_223c1c8;
extern char GameData_223c200;
extern char GameData_223c208;
extern char GameData_223c240;
extern char GameData_223c248;
extern char GameData_223c280;
extern char GameData_223c288;
extern char GameData_223c2c0;
extern char GameData_223c2c8;
extern char GameData_223c300;
extern char GameData_223c308;
extern char GameData_223c340;
extern char GameData_223c348;
extern char GameData_223c380;
extern char GameData_223c388;
extern char GameData_223c3c0;
extern char GameData_223c3c8;
extern char GameData_223c400;
extern char GameData_223c408;
extern char GameData_223c440;
extern char GameData_223c448;
extern char GameData_223c480;
extern char GameData_223c488;
extern char GameData_223c600;
extern char GameData_223c608;
extern char GameData_223c640;
extern char GameData_223c648;
extern char GameData_223c680;
extern char GameData_223c688;
extern char GameData_223c6c0;
extern char GameData_223c6c8;
extern char GameData_223c700;
extern char GameData_223c708;
extern char GameData_223c740;
extern char GameData_223c748;
extern char GameData_223c780;
extern char GameData_223c788;
extern char GameData_223c7c0;
extern char GameData_223c7c8;
extern char GameData_223c800;
extern char GameData_223c808;
extern char GameData_223c840;
extern char GameData_223c848;
extern char GameData_223c880;
extern char GameData_223c888;
extern char GameData_223c8c0;
extern char GameData_223c8c8;
extern char GameData_223c900;
extern char GameData_223c908;
extern char GameData_223c940;
extern char GameData_223c948;
extern char GameData_223c980;
extern char GameData_223c988;
extern char GameData_223c9c0;
extern char GameData_223c9c8;
extern char GameData_223ca00;
extern char GameData_223ca08;
extern char GameData_223ca40;
extern char GameData_223ca48;
extern char GameData_223ca80;
extern char GameData_223ca88;
extern char GameData_223cac0;
extern char GameData_223cac8;
extern char GameData_223cb00;
extern char GameData_223cb08;
extern char GameData_223cb40;
extern char GameData_223cb48;
extern char GameData_223cb80;
extern char GameData_223cb88;
extern char GameData_223cbc0;
extern char GameData_223cbc8;
extern char GameData_223cc00;
extern char GameData_223cc08;
extern char GameData_223cc40;
extern char GameData_223cc48;
extern char GameData_223cc80;
extern char GameData_223cc88;
extern char GameData_223ccc0;
extern char GameData_223ccc8;
extern char GameData_223cd00;
extern char GameData_223cd08;
extern char GameData_223cd40;
extern char GameData_223cd48;
extern char GameData_223cd80;
extern char GameData_223cd88;
extern char GameData_223cdc0;
extern char GameData_223cdc8;
extern char GameData_223ce00;
extern char GameData_223ce08;
extern char GameData_223ce40;
extern char GameData_223ce48;
extern char GameData_223ce80;
extern char GameData_223ce88;
extern char GameData_223cec0;
extern char GameData_223cec8;
extern char GameData_223cf00;
extern char GameData_223cf08;
extern char GameData_223cf40;
extern char GameData_223cf48;
extern char GameData_223cf80;
extern char GameData_223cf88;
extern char GameData_223cfc0;
extern char GameData_223cfc8;
extern char GameData_223d000;
extern char GameData_223d008;
extern char GameData_223d040;
extern char GameData_223d048;
extern char GameData_223d0e0;
extern char GameData_223d0e8;
extern char GameData_223d1a0;
extern char GameData_223d1a8;
extern char GameData_223d1e0;
extern char GameData_223d1e8;
extern char GameData_223d220;
extern char GameData_223d228;
extern char GameData_223d260;
extern char GameData_223d268;
extern char GameData_223d2a0;
extern char GameData_223d2a8;
extern char GameData_223d2e0;
extern char GameData_223d2e8;
extern char GameData_223d320;
extern char GameData_223d328;
extern char GameData_223d360;
extern char GameData_223d368;
extern char GameData_223d3a0;
extern char GameData_223d3a8;
extern char GameData_223d3e0;
extern char GameData_223d3e8;
extern char GameData_223d420;
extern char GameData_223d428;
extern char GameData_223d460;
extern char GameData_223d468;
extern char GameData_223d4a0;
extern char GameData_223d4a8;
extern char GameData_223d4e0;
extern char GameData_223d4e8;
extern char GameData_223d520;
extern char GameData_223d528;
extern char GameData_223d560;
extern char GameData_223d568;
extern char GameData_223d5a0;
extern char GameData_223d5a8;
extern char GameData_223d5e0;
extern char GameData_223d5e8;
extern char GameData_223d620;
extern char GameData_223d628;
extern char GameData_223d660;
extern char GameData_223d668;
extern char GameData_223d6a0;
extern char GameData_223d6a8;
extern char GameData_223d6e0;
extern char GameData_223d6e8;
extern char GameData_223d720;
extern char GameData_223d728;
extern char GameData_223d760;
extern char GameData_223d768;
extern char GameData_223d7a0;
extern char GameData_223d7a8;
extern char GameData_223d7e0;
extern char GameData_223d7e8;
extern char GameData_223d820;
extern char GameData_223d828;
extern char GameData_223d860;
extern char GameData_223d868;
extern char GameData_223d8a0;
extern char GameData_223d8a8;
extern char GameData_223d8e0;
extern char GameData_223d8e8;
extern char GameData_223d920;
extern char GameData_223d928;
extern char GameData_2258fc8;
extern char GameData_2258fd4;
extern char game_hub_g_no_map;
extern int GameData_21668c8;
extern int GameData_21675c0;
extern int GameData_21675c4;
extern int GameData_21675cc;
extern int GameData_21ca4e4;
extern int GameData_21ca9f8;
extern int GameData_21caa04;
extern int GameData_21caa10;
extern int GameData_21caa1c;
extern int GameData_21caa28;
extern int GameData_21ed5c8;
extern int GameData_21eeaa8;
extern int GameData_21eeab4;
extern int GameData_21f5418;
extern int GameData_21f5428;
extern int GameData_21f5458;
extern int GameData_21f5468;
extern int GameData_21f5498;
extern int GameData_21f54a8;
extern int GameData_21f54d8;
extern int GameData_21f54e8;
extern int GameData_21f5518;
extern int GameData_21f5528;
extern int GameData_21f5558;
extern int GameData_21f5568;
extern int GameData_21f5598;
extern int GameData_21f55a8;
extern int GameData_21f55d8;
extern int GameData_21f55e8;
extern int GameData_21f5618;
extern int GameData_21f5628;
extern int GameData_21f5658;
extern int GameData_21f5668;
extern int GameData_21f5698;
extern int GameData_21f56a8;
extern int GameData_21f56d8;
extern int GameData_21f56e8;
extern int GameData_21f5718;
extern int GameData_21f5728;
extern int GameData_21f5758;
extern int GameData_21f5768;
extern int GameData_21f5798;
extern int GameData_21f57a8;
extern int GameData_21f57d8;
extern int GameData_21f57e8;
extern int GameData_21f5818;
extern int GameData_21f5828;
extern int GameData_21f5858;
extern int GameData_21f5868;
extern int GameData_21f5898;
extern int GameData_21f58a8;
extern int GameData_21f58d8;
extern int GameData_21f58e8;
extern int GameData_21f5918;
extern int GameData_21f5928;
extern int GameData_21f5958;
extern int GameData_21f5968;
extern int GameData_21f5998;
extern int GameData_21f59a8;
extern int GameData_21f59d8;
extern int GameData_21f59e8;
extern int GameData_21f5a18;
extern int GameData_21f5a28;
extern int GameData_21f5a58;
extern int GameData_21f5a68;
extern int GameData_21f5a98;
extern int GameData_21f5aa8;
extern int GameData_21f5ad8;
extern int GameData_21f5ae8;
extern int GameData_21f5b18;
extern int GameData_21f5b28;
extern int GameData_21f5b58;
extern int GameData_21f5b68;
extern int GameData_21f5b98;
extern int GameData_21f5ba8;
extern int GameData_21f5bd8;
extern int GameData_21f5be8;
extern int GameData_21f5c18;
extern int GameData_21f5c28;
extern int GameData_21f5c58;
extern int GameData_21f5c68;
extern int GameData_21f5c98;
extern int GameData_21f5ca8;
extern int GameData_21f5cd8;
extern int GameData_21f5ce8;
extern int GameData_21f5d18;
extern int GameData_21f5d28;
extern int GameData_21f5d58;
extern int GameData_21f5d68;
extern int GameData_21f5d98;
extern int GameData_21f5da8;
extern int GameData_21f5dd8;
extern int GameData_21f5de8;
extern int GameData_21f5e18;
extern int GameData_21f5e28;
extern int GameData_21f5e58;
extern int GameData_21f5e68;
extern int GameData_21f5e98;
extern int GameData_21f5ea8;
extern int GameData_21f5ed8;
extern int GameData_21f5ee8;
extern int GameData_21f5f18;
extern int GameData_21f5f28;
extern int GameData_21f5f58;
extern int GameData_21f5f68;
extern int GameData_21f5f98;
extern int GameData_21f5fa8;
extern int GameData_21f61c8;
extern int GameData_2226638;
extern int GameData_2226644;
extern int GameData_2226650;
extern int GameData_222665c;
extern int GameData_2226668;
extern int GameData_2226674;
extern int GameData_2234648;
extern int GameData_2234654;
extern int GameData_2234660;
extern int GameData_223466c;
extern int GameData_2234678;
extern int GameData_2234684;
extern int GameData_2236528;
extern int GameData_2236534;
extern int GameData_223657c;
extern int GameData_2236b80;
extern int GameData_2236b8c;
extern int GameData_2236b98;
extern int GameData_2236ba4;
extern int GameData_2236bb0;
extern int GameData_2236bbc;
extern int GameData_2239ec0;
extern int GameData_2239ecc;
extern int GameData_2239ed8;
extern int GameData_2239ee4;
extern int GameData_2239ef0;
extern int GameData_2239efc;
extern int GameData_2265aa8;
extern int GameData_2265ad4;
extern int GameData_2265ad8;
float GameRoutine_10be300(__int64, __int64);
float exp2f(float);
int __cxa_guard_acquire(__int64);
typedef __int16 GameAlign_21ed5c3 __attribute__((aligned(1)));
extern GameAlign_21ed5c3 GameData_21ed5c3;
typedef __int64 GameAlign_21ca4a6 __attribute__((aligned(2)));
extern GameAlign_21ca4a6 GameData_21ca4a6;
typedef __int64 GameAlign_21ca4c4 __attribute__((aligned(4)));
extern GameAlign_21ca4c4 GameData_21ca4c4;
typedef __int64 GameAlign_21ca4cc __attribute__((aligned(4)));
extern GameAlign_21ca4cc GameData_21ca4cc;
typedef __int64 GameAlign_21ca4d4 __attribute__((aligned(4)));
extern GameAlign_21ca4d4 GameData_21ca4d4;
typedef __int64 GameAlign_21ca4dc __attribute__((aligned(4)));
extern GameAlign_21ca4dc GameData_21ca4dc;
typedef __int64 GameAlign_21ca9fc __attribute__((aligned(4)));
extern GameAlign_21ca9fc game_gmap_GmapClock_kDefaultTime;
typedef __int64 GameAlign_21caa14 __attribute__((aligned(4)));
extern GameAlign_21caa14 GameData_21caa14;
typedef __int64 GameAlign_21eea64 __attribute__((aligned(4)));
extern GameAlign_21eea64 GameData_21eea64;
typedef __int64 GameAlign_21eea6e __attribute__((aligned(2)));
extern GameAlign_21eea6e GameData_21eea6e;
typedef __int64 GameAlign_21eea76 __attribute__((aligned(2)));
extern GameAlign_21eea76 GameData_21eea76;
typedef __int64 GameAlign_21eea7e __attribute__((aligned(2)));
extern GameAlign_21eea7e GameData_21eea7e;
typedef __int64 GameAlign_21eea8a __attribute__((aligned(2)));
extern GameAlign_21eea8a GameData_21eea8a;
typedef __int64 GameAlign_222663c __attribute__((aligned(4)));
extern GameAlign_222663c GameData_222663c;
typedef __int64 GameAlign_2226654 __attribute__((aligned(4)));
extern GameAlign_2226654 GameData_2226654;
typedef __int64 GameAlign_222666c __attribute__((aligned(4)));
extern GameAlign_222666c GameData_222666c;
typedef __int64 GameAlign_223464c __attribute__((aligned(4)));
extern GameAlign_223464c GameData_223464c;
typedef __int64 GameAlign_2234664 __attribute__((aligned(4)));
extern GameAlign_2234664 GameData_2234664;
typedef __int64 GameAlign_223467c __attribute__((aligned(4)));
extern GameAlign_223467c GameData_223467c;
typedef __int64 GameAlign_223652c __attribute__((aligned(4)));
extern GameAlign_223652c GameData_223652c;
typedef __int64 GameAlign_2236574 __attribute__((aligned(4)));
extern GameAlign_2236574 GameData_2236574;
typedef __int64 GameAlign_2236b84 __attribute__((aligned(4)));
extern GameAlign_2236b84 GameData_2236b84;
typedef __int64 GameAlign_2236b9c __attribute__((aligned(4)));
extern GameAlign_2236b9c GameData_2236b9c;
typedef __int64 GameAlign_2236bb4 __attribute__((aligned(4)));
extern GameAlign_2236bb4 GameData_2236bb4;
typedef __int64 GameAlign_2239ec4 __attribute__((aligned(4)));
extern GameAlign_2239ec4 GameData_2239ec4;
typedef __int64 GameAlign_2239edc __attribute__((aligned(4)));
extern GameAlign_2239edc GameData_2239edc;
typedef __int64 GameAlign_2239ef4 __attribute__((aligned(4)));
extern GameAlign_2239ef4 GameData_2239ef4;
typedef __int64 GameAlign_2258fcc __attribute__((aligned(4)));
extern GameAlign_2258fcc GameData_2258fcc;
typedef int GameAlign_21eea92 __attribute__((aligned(2)));
extern GameAlign_21eea92 GameData_21eea92;
typedef int GameAlign_21eeaae __attribute__((aligned(2)));
extern GameAlign_21eeaae GameData_21eeaae;
typedef int GameAlign_2226621 __attribute__((aligned(1)));
extern GameAlign_2226621 GameData_2226621;
typedef int GameAlign_2234631 __attribute__((aligned(1)));
extern GameAlign_2234631 GameData_2234631;
typedef int GameAlign_2236b69 __attribute__((aligned(1)));
extern GameAlign_2236b69 GameData_2236b69;
typedef int GameAlign_2239ea9 __attribute__((aligned(1)));
extern GameAlign_2239ea9 GameData_2239ea9;
unsigned __int64 GameRoutine_117c190(int, __int64);
unsigned __int64 strlen(const char*);
void AnimCtrlModule_a78450(__int64*, _DWORD*);
void GameHr_17ccc20(__int64, char, char);
void GameHr_89b900(__int64);
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameHr_d82e50(__int64, __int64);
void GameHr_d8d760(__int64);
void GameHr_e08260(__int64, __int64*, unsigned __int16*);
void GameHr_ffc180(_QWORD*, _QWORD*, __int64);
void GameRoutine_111d7a0(__int64, int);
void GameRoutine_117bd00(__int64, __int64);
void GameRoutine_117c200(__int64, __int64);
void GameRoutine_716420(__int64, unsigned __int8);
void GameRoutine_71e8e0(__int64*);
void GameRoutine_71fb20(__int64*);
void GameRoutine_82f300(__int64*, unsigned __int64);
void GameRoutine_d98e20(__int64);
void GameRoutine_d99480(_QWORD*, const char*, char);
void GameRoutine_ffbe20(__int64*, _QWORD*);
void HubScript_d98960(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_11216d0();
void __attribute__((noreturn)) GameRoutine_1309e40();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_943410();
void __attribute__((noreturn)) GameRoutine_ca7de0();
void __attribute__((noreturn)) GameRoutine_ca7e00();
void __attribute__((noreturn)) GameRoutine_ca7e40();
void __attribute__((noreturn)) GameRoutine_ebfd20();
void __attribute__((noreturn)) GameRoutine_ffc160();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_HubDisposFileReader_CalcGroupNames(unsigned __int64, const char*,
                                             __int64*, char);
void game_d8e140(__int64);
void game_d8ec60(__int64);
void game_hub_e08150(__int64, __int64, const char**);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_1b0(unsigned __int64 a1);
float game_55c300(__int64 a1, __int64 a2, float a3, double a4, float a5,
                  double a6, float a7);
__int64 game_70efc0();
float game_7c2010(float a1);
void game_821570();
__int16* game_8450e0(__int64 a1, __int16 a2, __int16 a3);
__int64 game_87ddf0();
__int64 game_942180();
__int64 game_9aaec0(__int64 a1);
__int64 game_ebf9c0(__int64 result, __int64* a2, __int64* a3,
                    unsigned __int64 a4);
__int64 game_f86330();
void game_ffa3e0(_QWORD* a1, _QWORD* a2, _DWORD* a3);
__int64 game_103d970();
__int64 game_1096780(__int64 a1, float* a2, char a3);
__int64 game_10e8630();
__attribute__((swiftcall)) void game_111d920(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2);
float game_1120420(__int64 a1, char a2, float a3, double a4, double a5,
                   float a6);
char* game_1175070();
__int64* game_118a810();
__int64 game_11cbe80(__int64 a1, __int64 a2, int a3, __int64 a4);
__int64 game_11fc720(__int64 result, signed int a2, unsigned int a3, int a4,
                     float a5);
void game_1308480();
char* game_1603a50(float a1);
__int64 game_1824950(_QWORD* a1);
unsigned int game_195b260(__int64 a1, unsigned __int8 a2, int a3);

__int64 game_1b0(unsigned __int64 a1)
{
  if (a1 < 0x1F50000 || a1 >= (unsigned __int64)&GameData_1f50948 ||
      (a1 & 7) != 0) {
    __udf(0x8003u);
  }
  return ((__typeof__((*(__int64 (**)(void))a1)()) (*)())(
      *(__int64 (**)(void))a1))(a1);
}

float game_55c300(__int64 a1, __int64 a2, float a3, double a4, float a5,
                  double a6, float a7)
{
  float v8;
  float v9;
  float v10;

  {

    __typeof__(a3) z_ = (__typeof__(a3)){0};

    LOWORD(z_) = *(_WORD*)(a2 + 12);

    a3 = z_;
  }
  if (*(_BYTE*)(a1 + 56) == 1) {
    v8 = *(float*)(a1 + 32);
    a5 = (float)*(__int16*)(a2 + 8);
    v9 = (float)(PSEUDO_UNFUSED(
             (float)(v8 - (float)((float)LODWORD(a3) * *(float*)(a1 + 12))) *
             0x1.0000000000000p-1f)) +
         (float)(a5 * *(float*)(a1 + 12));
  }
  else {
    v10 = *(float*)(a1 + 12);
    v8 = v10 * (float)LODWORD(a3);
    v9 = v10 * (float)*(__int16*)(a2 + 8);
  }
  {
    __typeof__(a4) z_ = (__typeof__(a4)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 20);
    a4 = z_;
  }
  game_55c3a0(a1, a2, v9 + *(float*)&a4, a4, a5, a6, a7);
  *(float*)(a1 + 20) = v8 + *(float*)(a1 + 20);
  return v8;
}

__int64 game_70efc0()
{
  int v0;
  char* v1;
  __int64 v2;
  char v3;
  char v4;
  char v5;
  char v6;
  char v7;
  char v8;
  char v9;
  int v10;
  char v11;
  __int64 result;
  char v13;
  char v14;

  v0 = 0;
  GameData_21ca4ae = 0;
  GameData_21ca4a6 = 0;
  GameData_21ca4b0 = 0;
  GameData_21ca4b8 = 0;
  GameData_21ca4e4 = 1065353216;
  GameData_21ca4c0 = 0;
  GameData_21ca4c4 = 0x3F8000003F800000LL;
  GameData_21ca4cc = 0x3F8000003F800000LL;
  GameData_21ca4d4 = 0x3F8000003F800000LL;
  GameData_21ca4dc = 0x3F8000003F800000LL;
  v1 = (char*)&GameData_21ca4e8;
  v2 = 512;
  do {
    v3 = v2++;
    if ((v3 & 1) != 0) {
      v4 = 4;
    }
    else {
      v4 = 0;
    }
    if ((v3 & 2) != 0) {
      v4 |= 8u;
    }
    v5 = v4 | ((v3 & 4) != 0);
    if ((v3 & 8) != 0) {
      v5 |= 2u;
    }
    if ((v3 & 0x40) != 0) {
      v5 |= 0x10u;
    }
    if (v3 <= -1) {
      v5 |= 0x20u;
    }
    v6 = v0 & 0x40;
    v0 += 4;
    v7 = v5 | v6;
    if ((v3 & 0x20) != 0) {
      v7 |= 0x80u;
    }
    v8 = ((v3 & 0x10) != 0) | 2;
    v1[512] = v7;
    if ((v3 & 0x20) == 0) {
      v8 = (v3 & 0x10) != 0;
    }
    if ((v3 & 0x40) != 0) {
      v8 |= 4u;
    }
    v9 = v8 | 8;
    if (v3 > -1) {
      v9 = v8;
    }
    if ((v3 & 1) != 0) {
      v10 = 16;
    }
    else {
      v10 = 0;
    }
    if ((v3 & 1) != 0) {
      v11 = -1;
    }
    else {
      v11 = 0;
    }
    v1[1024] = v9;
    if ((v3 & 2) != 0) {
      v10 |= 0x20u;
    }
    if ((v3 & 4) != 0) {
      v11 = 1;
      v10 |= 0x40u;
    }
    v1[256] = v11;
    result = v10 | 0x80u;
    if ((v3 & 8) != 0) {
      LOBYTE(v10) = v10 | 0x80;
    }
    if ((v3 & 2) != 0) {
      v13 = -1;
    }
    else {
      v13 = 0;
    }
    v1[768] = v10;
    if ((v3 & 8) != 0) {
      v14 = 1;
    }
    else {
      v14 = v13;
    }
    *v1++ = v14;
  } while (v2 != 768);
  game_Dir_offsets_ = 0x100FF0100FF00LL;
  GameData_21caa10 = 0;
  GameData_21caa08 = 0x100010000LL;
  GameData_21caa1c = 0;
  GameData_21caa14 = 0x100012710LL;
  game_gmap_GmapClock_kDefaultTime = 0;
  GameData_21caa04 = 0;
  GameData_21caa20 = 0x7000100010001LL;
  GameData_21caa28 = 0;
  GameData_21ca9f8 = 0;
  GameData_21ca9f0 = 0x16000305A9LL;
  return result;
}

float game_7c2010(float a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v2;
  float v3;
  float v4;
  __int64 v5;

  if (game_GameModeData_instance_ != 0 &&
      (v1 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
    {
      __typeof__(a1) z_ = (__typeof__(a1)){0};
      LOBYTE(z_) = *(_BYTE*)(v1 + 129);
      a1 = z_;
    }
    v2 = (float)LODWORD(a1);
    {
      __typeof__(a1) z_ = (__typeof__(a1)){0};
      LOBYTE(z_) = *(_BYTE*)(v1 + 130);
      a1 = z_;
    }
    v3 = (float)LODWORD(a1);
  }
  else {
    v2 = 0x1.6800000000000p+6f;
    v3 = 0x1.6800000000000p+6f;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d91a8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d91a8) != 0) {
    GameData_21d91a0 = (__int64)&GameData_1ae94c2;
    GameData_21d9198 = game_HashString((__int64)&GameData_1ae94c2);
    __cxa_guard_release((__int64)&GameData_21d91a8);
  }
  v4 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d9198);
    if (v5 != 0) {
      v4 = (float)*(int*)(v5 + 32);
    }
  }
  return v3 + (float)((float)((float)(v3 - v2) * v4) / -0x1.9000000000000p+6f);
}

void game_821570()
{

#pragma clang fp contract(off)
  __int64* v0;
  unsigned int v1;
  float v2;
  float v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;

  if (GameData_21668c8 == 0) {
    v0 = game_8224a0(0x1Cu);
    v2 = 0x0.0p+0f;
    v3 = 0x0.0p+0f;
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v0);
      v3 = 0x0.0p+0f;
      if (v4 != 0) {
        v3 = (float)*(int*)(v4 + 32) + (float)*(int*)(v4 + 32);
      }
    }
    {
      __typeof__(v1) z_ = (__typeof__(v1)){0};
      LOWORD(z_) = GameData_2265aca;
      v1 = z_;
    }
    v5 = (float)v1;
    v6 = (float)(v3 / 0x1.9000000000000p+6f) + -0x1.0000000000000p+0f;
    if (v6 <= 0x1.0000000000000p+0f) {
      v7 = v6;
    }
    else {
      v7 = 0x1.0000000000000p+0f;
    }
    if (v6 >= -0x1.0000000000000p+0f) {
      v8 = v7;
    }
    else {
      v8 = -0x1.0000000000000p+0f;
    }
    GameData_2265ad4 = LODWORD(v8);
    v9 = v8 * 0x1.0000000000000p-1f;
    if (HIBYTE(GameData_2265aa8) != 0) {
      v10 = *(float*)&GameData_2265ad8 * 0x1.0000000000000p-1f;
    }
    else {
      v10 = 0x0.0p+0f;
    }
    if (HIBYTE(GameData_2265aa8) != 0) {
      v11 = v5;
    }
    else {
      v11 = 0x1.2c00000000000p+8f;
    }
    v12 = exp2f(v9) * 0x1.8000000000000p-1f;
    *(float*)&GameData_21675cc = v11 * exp2f(v10);
    GameData_21675c4 = GameData_21675cc;
    GameData_21675c0 = COERCE_UNSIGNED_INT((float)(ceilf(v11 * v12)));
    v13 = game_8224a0(0x1Du);
    if (game_GameModeData_instance_ != 0) {
      v15 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v13);
      if (v15 != 0) {
        v2 = (float)*(int*)(v15 + 32) + (float)*(int*)(v15 + 32);
      }
    }
    {
      __typeof__(v14) z_ = (__typeof__(v14)){0};
      LOWORD(z_) = GameData_2265aca;
      v14 = z_;
    }
    v16 = (float)v14;
    v17 = (float)(v2 / 0x1.9000000000000p+6f) + -0x1.0000000000000p+0f;
    if (v17 <= 0x1.0000000000000p+0f) {
      v18 = (float)(v2 / 0x1.9000000000000p+6f) + -0x1.0000000000000p+0f;
    }
    else {
      v18 = 0x1.0000000000000p+0f;
    }
    if (v17 >= -0x1.0000000000000p+0f) {
      v19 = v18;
    }
    else {
      v19 = -0x1.0000000000000p+0f;
    }
    GameData_2265ad8 = LODWORD(v19);
    v20 = v19 * 0x1.0000000000000p-1f;
    if (HIBYTE(GameData_2265aa8) != 0) {
      v21 = v20;
    }
    else {
      v21 = 0x0.0p+0f;
    }
    if (HIBYTE(GameData_2265aa8) != 0) {
      v22 = v16;
    }
    else {
      v22 = 0x1.2c00000000000p+8f;
    }
    v23 = exp2f(*(float*)&GameData_2265ad4 * 0x1.0000000000000p-1f) *
          0x1.8000000000000p-1f;
    *(float*)&GameData_21675cc = v22 * exp2f(v21);
    GameData_21675c4 = GameData_21675cc;
    GameData_21675c0 = COERCE_UNSIGNED_INT((float)(ceilf(v22 * v23)));
    GameHr_1552260();
  }
}

__int16* game_8450e0(__int64 a1, __int16 a2, __int16 a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int16 v4;
  unsigned int v6;
  unsigned __int64 v8;
  __int64 v9;
  __int64*** v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64* v13;
  int v14;
  __int64 v15;
  __int16* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64*** v24;
  __int64** v25;
  unsigned __int64 v26;
  __int64* v27;
  float v28;
  float v29;
  float v30;
  _BOOL8 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 primeEm;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  unsigned __int64 v45;

  v3 = *(_QWORD*)(a1 + 12304);
  v4 = a2 | (a3 << 8);
  v6 = v4;
  if (v3 != 0 && *(_QWORD*)(a1 + 12320) != 0) {
    v8 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v9 = (unsigned __int16)(a2 | (a3 << 8));
      if (v3 <= v4) {
        v9 = v4 % (unsigned int)v3;
      }
    }
    else {
      v9 = ((int)v3 - 1) & (unsigned int)v4;
    }
    v10 = *(__int64****)(*(_QWORD*)(a1 + 12296) + 8 * v9);
    if (v10 != nullptr) {
      v11 = *v10;
      if (v11 != nullptr) {
        if ((v3 & v8) == 0) {
          while (1) {
            v13 = v11[1];
            if (v13 == (__int64*)v4) {
              if (*((unsigned __int16*)v11 + 8) == v4) {
                return (__int16*)(a1 + 12LL * *((unsigned __int16*)v11 + 9) +
                                  4);
              }
            }
            else if (((unsigned __int64)v13 & v8) != v9) {
              goto LABEL_24;
            }
            v11 = (__int64**)*v11;
            if (v11 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v12 = (unsigned __int64)v11[1];
          if (v12 == v4) {
            if (*((unsigned __int16*)v11 + 8) == v4) {
              return (__int16*)(a1 + 12LL * *((unsigned __int16*)v11 + 9) + 4);
            }
          }
          else {
            if (v12 >= v3) {
              v12 %= v3;
            }
            if (v12 != v9) {
              break;
            }
          }
          v11 = (__int64**)*v11;
        } while (v11 != nullptr);
      }
    }
  }
LABEL_24:
  v14 = *(_DWORD*)(a1 + 12292);
  if (v14 < 1024) {
    v15 = a1 + 12LL * v14;
    *(_DWORD*)(a1 + 12292) = v14 + 1;
    *(_BYTE*)(v15 + 4) = v14;
    v16 = (__int16*)(v15 + 4);
    *((_BYTE*)v16 + 3) = 9;
    *((_BYTE*)v16 + 1) = a2;
    *((_BYTE*)v16 + 2) = a3;
    *(_QWORD*)(v16 + 2) = 4294901760LL;
    v17 = fw_memory_g_heap_manager_ptr;
    v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24, 16, 0);
    v19 = v4;
    v20 = *(_QWORD*)(a1 + 12304);
    v21 = (_QWORD*)v18;
    *(_WORD*)(v18 + 16) = v6;
    *(_WORD*)(v18 + 18) = v14;
    *(_QWORD*)v18 = 0;
    *(_QWORD*)(v18 + 8) = v19;
    if (v20 == 0) {
      goto LABEL_47;
    }
    v22 = v20 - 1;
    if ((v20 & (v20 - 1)) != 0) {
      v23 = v19;
      if (v20 <= v19) {
        v23 = v6 % (unsigned int)v20;
      }
    }
    else {
      v23 = ((int)v20 - 1) & (unsigned int)v19;
    }
    v24 = *(__int64****)(*(_QWORD*)(a1 + 12296) + 8 * v23);
    if (v24 == nullptr || (v25 = *v24) == nullptr) {
    LABEL_47:
      v28 = *(float*)(a1 + 12328);
      v29 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 12320) + 1LL);
      if (v20 == 0 || (float)(v28 * (float)v20) < v29) {
        v30 = v29 / v28;
        v31 = true;
        if (v20 >= 3) {
          v31 = (v20 & (v20 - 1)) != 0;
        }
        v32 = v31 | (2 * v20);
        v33 = vcvtps_u64_f32(v30);
        if (v32 <= v33) {
          v34 = v33;
        }
        else {
          v34 = v32;
        }
        if (v34 == 1) {
          v34 = 2;
        }
        else if ((v34 & (v34 - 1)) != 0) {
          primeEm = std___1___next_prime(v34);
          v20 = *(_QWORD*)(a1 + 12304);
          v34 = primeEm;
        }
        if (v34 > v20) {
          goto LABEL_59;
        }
        if (v34 < v20) {
          v36 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 12320) /
                               *(float*)(a1 + 12328));
          if (v20 < 3 || (v20 & (v20 - 1)) != 0) {
            v36 = std___1___next_prime(v36);
          }
          else {
            v37 = 1LL << -(char)__clz((unsigned long long)(v36 - 1));
            if (v36 >= 2) {
              v36 = v37;
            }
          }
          if (v34 <= v36) {
            v34 = v36;
          }
          if (v34 < v20) {
          LABEL_59:
            GameRoutine_82f300((__int64*)(a1 + 12296), v34);
          }
        }
      }
      v39 = *(_QWORD*)(a1 + 12304);
      v40 = v21[1];
      v41 = v39 - 1;
      if ((v39 & (v39 - 1)) != 0) {
        if (v40 >= v39) {
          v40 %= v39;
        }
      }
      else {
        v40 &= v41;
      }
      v42 = *(_QWORD*)(a1 + 12296);
      v43 = *(_QWORD**)(v42 + 8 * v40);
      if (v43 != nullptr) {
        *v21 = *v43;
        *v43 = v21;
      }
      else {
        v44 = *(_QWORD*)(a1 + 12312);
        *(_QWORD*)(a1 + 12312) = v21;
        *v21 = v44;
        *(_QWORD*)(v42 + 8 * v40) = a1 + 12312;
        if (*v21 != 0) {
          v45 = *(_QWORD*)(*v21 + 8LL);
          if ((v39 & v41) != 0) {
            if (v45 >= v39) {
              v45 %= v39;
            }
          }
          else {
            v45 &= v41;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 12296) + 8 * v45) = v21;
        }
      }
      ++*(_QWORD*)(a1 + 12320);
      return v16;
    }
    if ((v20 & v22) == 0) {
      while (1) {
        v27 = v25[1];
        if (v27 == (__int64*)v19) {
          if (*((unsigned __int16*)v25 + 8) == v6) {
            goto LABEL_67;
          }
        }
        else if (((unsigned __int64)v27 & v22) != v23) {
          goto LABEL_47;
        }
        v25 = (__int64**)*v25;
        if (v25 == nullptr) {
          goto LABEL_47;
        }
      }
    }
    while (1) {
      v26 = (unsigned __int64)v25[1];
      if (v26 == v19) {
        if (*((unsigned __int16*)v25 + 8) == v6) {
        LABEL_67:
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v38, v18);
          return v16;
        }
      }
      else {
        if (v26 >= v20) {
          v26 %= v20;
        }
        if (v26 != v23) {
          goto LABEL_47;
        }
      }
      v25 = (__int64**)*v25;
      if (v25 == nullptr) {
        goto LABEL_47;
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed5d0,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21ed5c0;
  }
  v16 = &GameData_21ed5c0;
  if (__cxa_guard_acquire((__int64)&GameData_21ed5d0) != 0) {
    GameData_21ed5c8 = 0;
    GameData_21ed5c5 = 0;
    GameData_21ed5c0 = -256;
    GameData_21ed5c2 = -1;
    GameData_21ed5c6 = -1;
    GameData_21ed5c3 = 9;
    __cxa_guard_release((__int64)&GameData_21ed5d0);
  }
  return v16;
}

__int64 game_87ddf0()
{
  __int64 result;

  GameData_21eea40 = (__int64)&GameData_21eea40;
  GameData_21eea48 = (__int64)&GameData_21eea40;
  GameData_21eea50 = 0;
  result = GameRoutine_2b0();
  GameData_21eea60 = 0;
  GameData_21eea64 = 0x10000000000LL;
  GameData_21eea6c = 0;
  GameData_21eea6e = 0;
  GameData_21eea76 = 0;
  GameData_21eea7e = 0;
  *(_DWORD*)((char*)&GameData_21eea7e + 7) = 0;
  GameData_21eea8a = 0;
  GameData_21eea92 = 0;
  GameData_21eeaa8 = 0;
  GameData_21eeaac = 0;
  GameData_21eeaae = 0;
  GameData_21eeab4 = 0;
  GameData_21eeab8 = 0;
  GameData_21eeac0 = 0;
  GameData_21eeac8 = 0;
  *(__int64*)((char*)&GameData_21eea98 + 7) = 0;
  GameData_21eea98 = 0;
  return result;
}

__int64 game_942180()
{

#pragma clang fp contract(off)
  __int16* v0;
  double v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  double v7;
  unsigned int v8;
  double v9;
  double v10;
  double v11;
  unsigned int v12;
  __int64 v13;
  __int64 v15[3];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_941ce0((void*)(v15), (__int64)v0);
  v2 = v15[0];
  v3 = v15[1];
  v4 = 0x7FFFFFFF;
  if (v15[0] != v15[1]) {
    v5 = (__int64*)v15[0];
    do {
      v6 = *v5++;
      {
        __typeof__(v1) z_ = (__typeof__(v1)){0};
        LOWORD(z_) = *(_WORD*)(v6 + 88);
        v1 = z_;
      }
      v7 = (double)*(unsigned __int64*)&v1;
      v8 = VolunteerArgs_948220(v0);
      v9 = (double)v8 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
      if (v9 <= 0x1.0000000000000p+0) {
        v10 = (double)v8 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
      }
      else {
        v10 = 0x1.0000000000000p+0;
      }
      if (v9 >= 0x1.47ae147ae147bp-7) {
        v11 = v10;
      }
      else {
        v11 = 0x1.47ae147ae147bp-7;
      }
      v1 = v11 * v7;
      v12 = (int)v1;
      if ((int)v1 <= 1) {
        v12 = 1;
      }
      if (v12 < v4) {
        v4 = v12;
      }
    } while (v5 != (__int64*)v3);
  }
  if (v2 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v2);
  }
  return v4;
}

__int64 game_9aaec0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 v6;
  int v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f5fb8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21f5fb8) != 0) {
    GameData_21f5440 = 0;
    GameData_21f5448 = (__int64)GameRoutine_9ab6d0;
    GameData_21f53f8 = 2;
    GameData_21f5400 = 0;
    GameData_21f5408 = 0;
    GameData_21f5410 = 0;
    GameData_21f5418 = 1;
    GameData_21f5420 = 0;
    GameData_21f5428 = 0;
    GameData_21f5430 = 0;
    GameData_21f5500 = 0;
    GameData_21f5508 = (__int64)GameRoutine_9ab8e0;
    GameData_21f5438 = 13;
    GameData_21f5450 = 0;
    GameData_21f5458 = 0;
    GameData_21f5460 = 0;
    GameData_21f5468 = 0;
    GameData_21f5470 = 0;
    GameData_21f5478 = 13;
    GameData_21f5480 = 0;
    GameData_21f5488 = (__int64)GameRoutine_9ab760;
    GameData_21f5490 = 0;
    GameData_21f5498 = 0;
    GameData_21f54a0 = 0;
    GameData_21f54a8 = 0;
    GameData_21f54b0 = 0;
    GameData_21f54b8 = 2;
    GameData_21f54c8 = 0;
    GameData_21f54d0 = 0;
    GameData_21f54c0 = 0;
    GameData_21f54d8 = 2;
    GameData_21f54e0 = 0;
    GameData_21f54e8 = 0;
    GameData_21f54f0 = 0;
    GameData_21f54f8 = 13;
    GameData_21f5510 = 0;
    GameData_21f5518 = 0;
    GameData_21f5520 = 0;
    GameData_21f5528 = 0;
    GameData_21f5530 = 0;
    GameData_21f5538 = 19;
    GameData_21f5558 = 500;
    GameData_21f5560 = 0;
    GameData_21f5568 = 0;
    GameData_21f5570 = 0;
    GameData_21f5578 = 10;
    GameData_21f5540 = 0;
    GameData_21f5548 = (__int64)game_80a680_ptr[0];
    GameData_21f5658 = 3;
    GameData_21f5598 = 0;
    GameData_21f55a0 = 0;
    GameData_21f55a8 = 0;
    GameData_21f55b0 = 0;
    GameData_21f55b8 = 4;
    GameData_21f55c8 = 0;
    GameData_21f55d0 = 0;
    GameData_21f55c0 = 0;
    GameData_21f55d8 = 1;
    GameData_21f55e0 = 0;
    GameData_21f55e8 = 500;
    GameData_21f55f0 = 0;
    GameData_21f55f8 = 12;
    GameData_21f5600 = 0;
    GameData_21f5608 = 0;
    GameData_21f5610 = 0;
    GameData_21f5618 = 9;
    GameData_21f5620 = 0;
    GameData_21f5628 = 0;
    GameData_21f5630 = 0;
    GameData_21f5638 = 2;
    GameData_21f5650 = 0;
    GameData_21f5648 = 0;
    GameData_21f5640 = 0;
    GameData_21f5660 = 0;
    GameData_21f5668 = 0;
    GameData_21f5670 = 0;
    GameData_21f5678 = 13;
    GameData_21f5680 = 0;
    GameData_21f5690 = 0;
    GameData_21f5698 = 0;
    GameData_21f56a0 = 0;
    GameData_21f56a8 = 0;
    GameData_21f56b0 = 0;
    GameData_21f56b8 = 14;
    GameData_21f56c0 = 0;
    GameData_21f56d0 = 0;
    GameData_21f56d8 = 0;
    GameData_21f56e0 = 0;
    GameData_21f56e8 = 0;
    GameData_21f56f0 = 0;
    GameData_21f56f8 = 13;
    GameData_21f5700 = 0;
    GameData_21f5710 = 0;
    GameData_21f5718 = 0;
    GameData_21f5720 = 0;
    GameData_21f5728 = 0;
    GameData_21f5730 = 0;
    GameData_21f5738 = 19;
    GameData_21f5740 = 0;
    GameData_21f5688 = (__int64)ProcTitleSeq_9ab8f0;
    GameData_21f56c8 = (__int64)GameHr_9aba50;
    GameData_21f5708 = (__int64)GameRoutine_9abcf0;
    GameData_21f5580 = 0;
    GameData_21f5588 = (__int64)GameData_212c720;
    GameData_21f57f8 = 14;
    GameData_21f5878 = 14;
    GameData_21f58f8 = 14;
    GameData_21f57c8 = (__int64)GameRoutine_9abd80;
    GameData_21f5a48 = (__int64)GameRoutine_9ab760;
    GameData_21f5c58 = 500;
    GameData_21f57b8 = 13;
    GameData_21f58b8 = 13;
    GameData_21f59b8 = 13;
    GameData_21f59f8 = 13;
    GameData_21f5a38 = 13;
    GameData_21f5ab8 = 13;
    GameData_21f5bf8 = 13;
    GameData_21f5cb8 = 13;
    GameData_21f5d18 = 1;
    GameData_21f5e38 = 13;
    GameData_21f5760 = 0;
    GameData_21f5768 = 0;
    GameData_21f5770 = 0;
    GameData_21f5778 = 2;
    GameData_21f5790 = 0;
    GameData_21f5788 = 0;
    GameData_21f5780 = 0;
    GameData_21f5798 = 4;
    GameData_21f57a0 = 0;
    GameData_21f57a8 = 0;
    GameData_21f57b0 = 0;
    GameData_21f57c0 = 0;
    GameData_21f57d0 = 0;
    GameData_21f57d8 = 0;
    GameData_21f57e0 = 0;
    GameData_21f57e8 = 0;
    GameData_21f57f0 = 0;
    GameData_21f5800 = 0;
    GameData_21f5810 = 0;
    GameData_21f5818 = 0;
    GameData_21f5820 = 0;
    GameData_21f5828 = 0;
    GameData_21f5830 = 0;
    GameData_21f5838 = 10;
    GameData_21f5840 = 0;
    GameData_21f5908 = (__int64)GameRoutine_9abf20;
    GameData_21f5808 = (__int64)GameRoutine_9abda0;
    GameData_21f5a98 = 7;
    GameData_21f5cc8 = (__int64)ProcTitleSeq_9ac160;
    GameData_21f5848 = (__int64)GameData_212c720;
    GameData_21f5858 = 0;
    GameData_21f5958 = 5;
    GameData_21f5998 = 5;
    GameData_21f5888 = (__int64)GameRoutine_9abe30;
    GameData_21f5860 = 0;
    GameData_21f5868 = 0;
    GameData_21f5870 = 0;
    GameData_21f5880 = 0;
    GameData_21f5890 = 0;
    GameData_21f59c8 = (__int64)game_anonymous_ProcTitleSeq_CreateMenu;
    GameData_21f58c8 = (__int64)GameRoutine_9abea0;
    GameData_21f5898 = 0;
    GameData_21f58a0 = 0;
    GameData_21f58a8 = 0;
    GameData_21f58b0 = 0;
    GameData_21f58c0 = 0;
    GameData_21f58d0 = 0;
    GameData_21f58d8 = 0;
    GameData_21f5748 = (__int64)GameData_212d060[0];
    GameData_21f5a08 = (__int64)GameRoutine_9ac060;
    GameData_21f58e0 = 0;
    GameData_21f58e8 = 0;
    GameData_21f58f0 = 0;
    GameData_21f5900 = 0;
    GameData_21f5910 = 0;
    GameData_21f5918 = 0;
    GameData_21f5920 = 0;
    GameData_21f5758 = 1000;
    GameData_21f5928 = 0;
    GameData_21f5930 = 0;
    GameData_21f5938 = 12;
    GameData_21f5950 = 0;
    GameData_21f5948 = 0;
    GameData_21f5940 = 0;
    GameData_21f5960 = 0;
    GameData_21f5968 = 0;
    GameData_21f5970 = 0;
    GameData_21f5978 = 2;
    GameData_21f5980 = 0;
    GameData_21f5988 = 0;
    GameData_21f5990 = 0;
    GameData_21f59a0 = 0;
    GameData_21f59a8 = 0;
    GameData_21f59b0 = 0;
    GameData_21f59c0 = 0;
    GameData_21f59d0 = 0;
    GameData_21f59d8 = 0;
    GameData_21f59e0 = 0;
    GameData_21f59e8 = 0;
    GameData_21f59f0 = 0;
    GameData_21f5a00 = 0;
    GameData_21f5a10 = 0;
    GameData_21f5a18 = 0;
    GameData_21f5a20 = 0;
    GameData_21f5a28 = 0;
    GameData_21f5a30 = 0;
    GameData_21f5a40 = 0;
    GameData_21f5a50 = 0;
    GameData_21f5a58 = 0;
    GameData_21f5a60 = 0;
    GameData_21f5a68 = 0;
    GameData_21f5a70 = 0;
    GameData_21f5a78 = 2;
    GameData_21f5a90 = 0;
    GameData_21f5a88 = 0;
    GameData_21f5a80 = 0;
    GameData_21f5aa0 = 0;
    GameData_21f5aa8 = 0;
    GameData_21f5ab0 = 0;
    GameData_21f5ac0 = 0;
    GameData_21f5ac8 = (__int64)ProcTitleSeq_9ac0d0;
    GameData_21f5ad0 = 0;
    GameData_21f5ad8 = 0;
    GameData_21f5ae0 = 0;
    GameData_21f5ae8 = 0;
    GameData_21f5af0 = 0;
    GameData_21f5af8 = 19;
    GameData_21f5b00 = 0;
    GameData_21f5b08 = (__int64)game_80a680_ptr[0];
    GameData_21f5b18 = 250;
    GameData_21f5b20 = 0;
    GameData_21f5b28 = 0;
    GameData_21f5b30 = 0;
    GameData_21f5b38 = 10;
    GameData_21f5b40 = 0;
    GameData_21f5b48 = (__int64)GameData_212c720;
    GameData_21f5b58 = 0;
    GameData_21f5b60 = 0;
    GameData_21f5b68 = 0;
    GameData_21f5b70 = 0;
    GameData_21f5b78 = 12;
    GameData_21f5b90 = 0;
    GameData_21f5b88 = 0;
    GameData_21f5b80 = 0;
    GameData_21f5b98 = 9;
    GameData_21f5ba0 = 0;
    GameData_21f5ba8 = 0;
    GameData_21f5bb0 = 0;
    GameData_21f5bb8 = 2;
    GameData_21f5bc0 = 0;
    GameData_21f5bc8 = 0;
    GameData_21f5bd0 = 0;
    GameData_21f5bd8 = 6;
    GameData_21f5be0 = 0;
    GameData_21f5be8 = 0;
    GameData_21f5bf0 = 0;
    GameData_21f5c00 = 0;
    GameData_21f5c08 = (__int64)ProcTitleSeq_9ac0d0;
    GameData_21f5c10 = 0;
    GameData_21f5c18 = 0;
    GameData_21f5c20 = 0;
    GameData_21f5c28 = 0;
    GameData_21f5c30 = 0;
    GameData_21f5c38 = 19;
    GameData_21f5c40 = 0;
    GameData_21f5c48 = (__int64)game_80a680_ptr[0];
    GameData_21f5c60 = 0;
    GameData_21f5c68 = 0;
    GameData_21f5c70 = 0;
    GameData_21f5c78 = 10;
    GameData_21f5c80 = 0;
    GameData_21f5c88 = (__int64)GameData_212c720;
    GameData_21f5c98 = 0;
    GameData_21f5ca0 = 0;
    GameData_21f5ca8 = 0;
    GameData_21f5cb0 = 0;
    GameData_21f5cc0 = 0;
    GameData_21f5cd0 = 0;
    GameData_21f5cd8 = 0;
    GameData_21f5ce0 = 0;
    GameData_21f5ce8 = 0;
    GameData_21f5cf0 = 0;
    GameData_21f5cf8 = 4;
    GameData_21f5d10 = 0;
    GameData_21f5d08 = 0;
    GameData_21f5d00 = 0;
    GameData_21f5d20 = 0;
    GameData_21f5d28 = 1000;
    GameData_21f5d30 = 0;
    GameData_21f5d38 = 12;
    GameData_21f5d40 = 0;
    GameData_21f5d48 = 0;
    GameData_21f5d50 = 0;
    GameData_21f5d58 = 9;
    GameData_21f5d60 = 0;
    GameData_21f5d68 = 0;
    GameData_21f5d70 = 0;
    GameData_21f5d78 = 2;
    GameData_21f5d90 = 0;
    GameData_21f5d88 = 0;
    GameData_21f5d80 = 0;
    GameData_21f5d98 = 8;
    GameData_21f5da0 = 0;
    GameData_21f5da8 = 0;
    GameData_21f5db0 = 0;
    GameData_21f5db8 = 19;
    GameData_21f5dc0 = 0;
    GameData_21f5dc8 = (__int64)game_80a680_ptr[0];
    GameData_21f5dd8 = 1000;
    GameData_21f5de0 = 0;
    GameData_21f5de8 = 0;
    GameData_21f5df0 = 0;
    GameData_21f5df8 = 10;
    GameData_21f5e00 = 0;
    GameData_21f5e08 = (__int64)GameData_212c720;
    GameData_21f5e18 = 0;
    GameData_21f5e20 = 0;
    GameData_21f5e28 = 0;
    GameData_21f5e30 = 0;
    GameData_21f5e40 = 0;
    GameData_21f5e48 = (__int64)ProcTitleSeq_9ac250;
    GameData_21f5e50 = 0;
    GameData_21f5e58 = 0;
    GameData_21f5e60 = 0;
    GameData_21f5e68 = 0;
    GameData_21f5e70 = 0;
    GameData_21f5e78 = 12;
    GameData_21f5e90 = 0;
    GameData_21f5e88 = 0;
    GameData_21f5e80 = 0;
    GameData_21f5e98 = 9;
    GameData_21f5ea0 = 0;
    GameData_21f5ea8 = 0;
    GameData_21f5eb0 = 0;
    GameData_21f5eb8 = 2;
    GameData_21f5ec0 = 0;
    GameData_21f5ec8 = 0;
    GameData_21f5ed0 = 0;
    GameData_21f5ed8 = 9;
    GameData_21f5ee0 = 0;
    GameData_21f5ee8 = 0;
    GameData_21f5ef0 = 0;
    GameData_21f5ef8 = 19;
    GameData_21f5f00 = 0;
    GameData_21f5f08 = (__int64)game_80a680_ptr[0];
    GameData_21f5f18 = 250;
    GameData_21f5f20 = 0;
    GameData_21f5f28 = 0;
    GameData_21f5f30 = 0;
    GameData_21f5f38 = 10;
    GameData_21f5f40 = 0;
    GameData_21f5f48 = (__int64)GameData_212c720;
    GameData_21f5f58 = 0;
    GameData_21f5f60 = 0;
    GameData_21f5f68 = 0;
    GameData_21f5f70 = 0;
    GameData_21f5f78 = 0;
    GameData_21f5fa0 = 0;
    GameData_21f5fa8 = 0;
    GameData_21f5fb0 = 0;
    GameData_21f5f98 = 0;
    GameData_21f5f90 = 0;
    GameData_21f5f88 = 0;
    GameData_21f5f80 = 0;
    __cxa_guard_release((__int64)&GameData_21f5fb8);
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
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
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 256) = 0;
  *(_QWORD*)(v2 + 264) = 0;
  *(_QWORD*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  *(_QWORD*)(v2 + 224) = 0;
  *(_QWORD*)(v2 + 232) = 0;
  *(_QWORD*)(v2 + 272) = 0;
  *(_QWORD*)(v2 + 280) = 0;
  *(_QWORD*)(v2 + 288) = 0;
  *(_QWORD*)(v2 + 296) = 0;
  GameData_21f5fc0 = v2;
  *(_QWORD*)v2 = game_anonymous_ProcTitleSeq_vtable;
  *(_QWORD*)(v2 + 240) = 0;
  *(_QWORD*)(v2 + 248) = v2 + 256;
  *(_DWORD*)(v2 + 304) = 1065353216;
  *(_DWORD*)(v2 + 327) = 0;
  v4 = GameData_21f61c8;
  *(_QWORD*)(v2 + 312) = 0;
  *(_QWORD*)(v2 + 320) = 0;
  GameData_21f61c8 = v4 + 1;
  if (v4 == 0) {
    (*(void (**)(__int64))GameData_21f61c0)((__int64)&GameData_21f61c0);
  }
  v5 = (__int64*)GameData_2130f48;
  v6 = *(_QWORD*)GameData_2130f48;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    v7 = *(_DWORD*)(v6 + 1736);
    *(_DWORD*)(v6 + 1736) = v7 + 1;
    if (v7 != 0 ||
        ((**(void (***)(__int64))(v6 + 1728))(v6 + 1728), v6 = *v5, *v5 != 0)) {
      GameHr_17ccc20(v6, 1, 0);
    }
  }
  return ProcInst_657850(v2, (__int64)&GameData_21f53f8,
                         (__int64)"ProcTitleSeq", 1, a1);
}

__int64 game_ebf9c0(__int64 result, __int64* a2, __int64* a3,
                    unsigned __int64 a4)
{
  __int64 v4;
  char* v5;
  __int64* v8;
  char** v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  __int64 v27;
  __int64 v28;

  v4 = *(_QWORD*)(result + 16);
  v5 = *(char**)result;
  v8 = a2;
  v9 = (char**)result;
  if (a4 <= (v4 - *(_QWORD*)result) >> 4) {
    v12 = *(char**)(result + 8);
    if (a4 <= (v12 - v5) >> 4) {
      if (a2 != a3) {
        do {
          v18 = *v8;
          v17 = v8[1];
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                      memory_order_relaxed);
          }
          v19 = *((_QWORD*)v5 + 1);
          *(_QWORD*)v5 = v18;
          *((_QWORD*)v5 + 1) = v17;
          if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = std___1___shared_weak_count___release_weak(v19);
          }
          v8 += 2;
          v5 += 16;
        } while (v8 != a3);
        v12 = v9[1];
      }
      for (; v12 != v5; v12 -= 16) {
        v28 = *((_QWORD*)v12 - 1);
        if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          result = std___1___shared_weak_count___release_weak(v28);
        }
      }
      v9[1] = v5;
    }
    else {
      v13 = (__int64*)((char*)a2 + ((char*)v12 - (char*)v5));
      if (v12 != v5) {
        do {
          v15 = *v8;
          v14 = v8[1];
          if (v14 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                      memory_order_relaxed);
          }
          v16 = *((_QWORD*)v5 + 1);
          *(_QWORD*)v5 = v15;
          *((_QWORD*)v5 + 1) = v14;
          if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            result = std___1___shared_weak_count___release_weak(v16);
          }
          v8 += 2;
          v5 += 16;
        } while (v8 != v13);
        v12 = v9[1];
      }
      v25 = v12;
      if (v13 != a3) {
        v25 = v12;
        v26 = v12;
        do {
          *(_QWORD*)v26 = *v13;
          v27 = v13[1];
          *((_QWORD*)v26 + 1) = v27;
          if (v27 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                      memory_order_relaxed);
          }
          v13 += 2;
          v26 += 16;
          v25 += 16;
        } while (v13 != a3);
      }
      v9[1] = v25;
    }
  }
  else {
    if (v5 != nullptr) {
      v10 = *(char**)(result + 8);
      if (v5 == v10) {
        goto LABEL_27;
      }
      do {
        v11 = *((_QWORD*)v10 - 1);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
        v10 -= 16;
      } while (v10 != v5);
      v20 = *v9;
      v9[1] = v5;
      v5 = v20;
      if (v20 != nullptr) {
      LABEL_27:
        v21 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v21,
                                      (__int64)v5);
      }
      v4 = 0;
      v9[1] = nullptr;
      v9[2] = nullptr;
      *v9 = nullptr;
    }
    if (a4 >> 60 != 0) {
      goto LABEL_60;
    }
    v22 = v4 >> 3;
    if (v4 >> 3 <= a4) {
      v22 = a4;
    }
    v23 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                       : v22;
    if (v23 >> 60 != 0) {
    LABEL_60:
      GameRoutine_ebfd20();
    }
    result = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 16 * v23,
                                            16, 0);
    *v9 = (char*)result;
    v9[1] = (char*)result;
    for (v9[2] = (char*)(result + 16 * v23); v8 != a3; result += 16) {
      v24 = v8[1];
      *(_QWORD*)result = *v8;
      *(_QWORD*)(result + 8) = v24;
      if (v24 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                  memory_order_relaxed);
      }
      v8 += 2;
    }
    v9[1] = (char*)result;
  }
  return result;
}

__int64 game_f86330()
{
  _BYTE* v0;

  GameData_22265f8 = 0xFF00000000LL;
  GameData_2226600 = 1;
  GameData_2226620 = 1;
  GameData_2226644 = 1;
  GameData_2226621 = 0;
  *(int*)((char*)&GameData_2226621 + 3) = 0;
  GameData_2226608 = 0x20000FFFFLL;
  GameData_2226610 = 0xFF0000000000LL;
  GameData_2226660 = 0x300000001LL;
  GameData_2226618 = 0x100000003LL;
  GameData_2226628 = 0xFF0100000001LL;
  GameData_2226630 = 0x100000003LL;
  GameData_2226638 = 65280;
  GameData_2226668 = 255;
  GameData_222663c = 0x200000002LL;
  GameData_222666c = 0x300000002LL;
  GameData_2226648 = 0x200000003LL;
  GameData_2226674 = 511;
  GameData_2226650 = 257;
  GameData_2226654 = 0x200000000LL;
  GameData_222665c = 256;
  GameData_2226678 = 0x300000001LL;
  GameData_2226680 = 256;
  GameData_22265e8 = (__int64)&GameData_22265f8;
  GameData_22265f0 = 12;
  v0 = (_BYTE*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 1, 16,
                                              0);
  GameData_2226688 = (__int64)v0;
  *v0 = 13;
  GameData_2226690 = (__int64)(v0 + 1);
  GameData_2226698 = (__int64)(v0 + 1);
  return GameRoutine_2b0();
}

void game_ffa3e0(_QWORD* a1, _QWORD* a2, _DWORD* a3)
{
  char* v5;
  char* v6;
  __int64* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned __int64 v29;
  _BYTE* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  _BYTE* v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD** v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  unsigned __int64 v58;
  __int64* v59;
  unsigned __int64 v60;
  char* v61;
  _DWORD* v62;
  __int64* v63;
  int v64;
  char v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int8* v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v81;
  unsigned __int64 v82;
  _QWORD* v83;
  _QWORD* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  __int64 v94;
  unsigned __int64 v95;
  char* v96;
  __int64 v97;
  __int64 v98;
  char v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  _QWORD* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  _QWORD* v128;
  _QWORD* v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  __int64* v145;
  __int64 v146;
  int v147;
  __int64 v148;
  unsigned __int64 v149;
  int v150;
  char* v151;
  unsigned __int64 v152;
  char v153;
  __int64 v154;
  _QWORD* v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  unsigned __int64* v169;
  unsigned __int64* v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  _QWORD* v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  unsigned __int64 v183;
  unsigned __int64 v184;
  _QWORD* v185;
  _QWORD* v186;
  unsigned __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  __int64 v193;
  char* v194;
  unsigned __int64 v195;
  char v196;
  __int64 v197;
  char v198;
  __int64 v199;
  char* v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  char* v203;
  __int64 v204;
  char v205;
  char* v206;
  __int64* v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  char v210;
  __int64 v211;
  __int64 v212;
  bool v213;
  _QWORD* v214;
  _BYTE* v215;
  char* v216;
  __int64 v217;
  bool v218;
  __int64 v219;
  __int64 v220;
  int v221;
  unsigned __int64 v222;
  unsigned __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  unsigned __int64 v227;
  unsigned __int64 v228;
  unsigned __int64 v229;
  __int64 v230;
  __int64 v231;
  unsigned __int64 v232;
  char* v233;
  char* v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  _QWORD** v246;
  __int64 v247;
  __int64* v248;
  _QWORD** v249;
  _QWORD* v250;
  __int64 v251;
  unsigned __int64 v252;
  _QWORD* v253;
  unsigned __int8* v254;
  __int64 v255;
  __int64 v256;
  __int64* v257;
  __int64 v258;
  __int64* v259;
  __int64 v260;
  atomic_ullong* v261;
  __int128 v262;
  __int64 v263;
  _QWORD* v264;
  _QWORD* v265;
  unsigned __int64 v266;
  _QWORD* v267;
  _QWORD* v268;
  unsigned __int64 v269;
  struct {
    __int64 v270;
    __int64 v271;
    char* v272;
    char v273;
    char gap233_[15];
    __int64 v274;
  } v270_;
  unsigned __int64 v275[2];
  struct {
    __int64 v276;
    unsigned __int64 v277;
    char* v278;
    char gap296_[17];
    _BYTE _139[7];
  } v276_;

  if (a2[1] != *a2 && (*(_QWORD*)GameData_212dbb8[0] == 0 ||
                       *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 288LL) ==
                           *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 280LL))) {
    v6 = (char*)a1[1];
    v5 = (char*)a1[2];
    game_hub_g_no_map = 1;
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v250 = a1;
    v8 = v6;
    if (v6 != v5) {
      do {
        v9 = *((_QWORD*)v5 - 3);
        if (v9 != 0) {
          *((_QWORD*)v5 - 2) = v9;
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v10, v9);
        }
        v11 = *((_QWORD*)v5 - 6);
        if (v11 != 0) {
          *((_QWORD*)v5 - 5) = v11;
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v12, v11);
        }
        v5 -= 72;
      } while (v5 != v6);
      a1 = v250;
      v8 = (char*)v250[1];
    }
    a1[2] = v6;
    v13 = a1;
    v14 = (__int64)(a2[1] - *a2) >> 3;
    if (v14 > 0x8E38E38E38E38E39LL * ((__int64)(a1[3] - (_QWORD)v8) >> 3)) {
      if (v14 > 0x38E38E38E38E38ELL) {
      LABEL_448:
        GameRoutine_ffc160();
      }
      v15 = 9 * v14;
      v16 = fw_memory_HeapManager_Allocate(*v7, 72 * v14, 16, 0);
      v17 = v16 + v6 - v8;
      v18 = v16 + 8 * v15;
      GameHr_ffc180(v8, v6, v16);
      v19 = v250[1];
      v250[1] = v16;
      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      v250[2] = v17;
      v250[3] = v18;
      v13 = v250;
      if (v19 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*v7 + 200) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v20, v19);
      }
    }
    v21 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 296, 16, 0);
    v21[2] = 0;
    v22 = GameData_212eb88;
    v23 = v13[5];
    v21[4] = 0;
    v21[5] = 0;
    v21[6] = 0;
    v21[7] = 0;
    *v21 = GameData_1fffd38;
    v21[1] = 0;
    v21[8] = 0;
    v21[9] = 0;
    v21[8] = 0;
    v21[9] = 0;
    v21[10] = 0;
    v21[11] = 0;
    v21[10] = 0;
    v21[11] = 0;
    v21[12] = 0;
    v21[13] = 0;
    v21[12] = 0;
    v21[13] = 0;
    v21[14] = 0;
    v21[15] = 0;
    v21[14] = 0;
    v21[15] = 0;
    v21[16] = 0;
    v21[17] = 0;
    v21[16] = 0;
    v21[17] = 0;
    v21[18] = 0;
    v21[19] = 0;
    v21[18] = 0;
    v21[19] = 0;
    v21[20] = 0;
    v21[21] = 0;
    v21[20] = 0;
    v21[21] = 0;
    v21[22] = 0;
    v21[23] = 0;
    v21[22] = 0;
    v21[23] = 0;
    v21[24] = 0;
    v21[25] = 0;
    v21[24] = 0;
    v21[25] = 0;
    v21[26] = 0;
    v21[27] = 0;
    v21[26] = 0;
    v21[27] = 0;
    v21[28] = 0;
    v21[29] = 0;
    v21[28] = 0;
    v21[29] = 0;
    v21[30] = 0;
    v21[31] = 0;
    v21[30] = 0;
    *((_BYTE*)v21 + 248) = 0;
    v21[35] = 0;
    v21[36] = 0;
    v21[33] = 0;
    v21[34] = 0;
    v21[32] = 0;
    v13[5] = v21;
    v21[7] = v22 + 2;
    v21[3] = 0;
    v13[4] = v21 + 3;
    if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
    }
    *(_DWORD*)v13[4] = *(_DWORD*)a3;
    v24 = v13[4];
    if ((*(_BYTE*)v24 & 2) != 0) {
      v28 = 1;
      v247 = 0;
      v29 = 0;
      v30 = nullptr;
      do {
        *(_QWORD*)((char*)&v262 + 4) = 0;
        HIDWORD(v262) = 0;
        v31 = v250[4];
        LOBYTE(v262) = v28;
        GameRoutine_ffbe20((__int64*)(v31 + 8), &v262);
        if ((unsigned __int64)v30 < v29) {
          *v30++ = v28;
        }
        else {
          v32 = (unsigned __int64)&v30[-v247];
          v33 = (__int64)&v30[-v247 + 1];
          if (v33 < 0) {
            GameRoutine_943410();
          }
          v34 = v29 - v247;
          if (2 * (v29 - v247) > v33) {
            v33 = 2 * v34;
          }
          if (v34 >= 0x3FFFFFFFFFFFFFFFLL) {
            v35 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else {
            v35 = v33;
          }
          if (v35 != 0) {
            v36 = fw_memory_HeapManager_Allocate(*v7, v35, 16, 0);
          }
          else {
            v36 = 0;
          }
          v29 = v36 + v35;
          *(_BYTE*)(v36 + v32) = v28;
          v30 = (_BYTE*)(v36 + v32 + 1);
          memcpy(v36, v247, v32);
          if (v247 != 0) {
            v37 = fw_memory_g_heap_manager_ptr;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v38 = 128;
            }
            else {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v247);
            v247 = v36;
            v7 = (__int64*)v37;
          }
          else {
            v247 = v36;
            v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
        }
        ++v28;
      } while (v28 != 10);
    }
    else {
      v25 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v26 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        v27 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        v25 = *(_DWORD*)(game_GameModeData_instance_ + 64);
      }
      else {
        v26 = 0;
        v27 = 0;
      }
      *(_QWORD*)((char*)&v262 + 4) = __PAIR64__(v25, v27);
      LOBYTE(v262) = v26;
      v39 = game_gmap_GmapClock_instance_;
      if (game_gmap_GmapClock_instance_ != 0) {
        v39 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
      }
      HIDWORD(v262) = v39;
      GameRoutine_ffbe20((__int64*)(v24 + 8), &v262);
      if (v26 != 0) {
        v40 = (_BYTE*)fw_memory_HeapManager_Allocate(*v7, 1, 16, 0);
        *v40 = v26;
        v30 = v40 + 1;
        v247 = (__int64)v40;
      }
      else {
        v247 = 0;
        v30 = nullptr;
      }
    }
    if (v30 == (_BYTE*)v247) {
      GameData_22127a8 = 0;
      v241 = v250[5];
      v250[4] = 0;
      v250[5] = 0;
    }
    else {
      v41 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 504, 16, 0);
      v42 = v41 + 3;
      v43 = v41;
      v41[1] = 0;
      v41[2] = 0;
      *v41 = GameData_1fffd88;
      GameRoutine_d97ff0((__int64)(v41 + 3));
      v44 = v250;
      v45 = v250[4];
      v46 = *(_QWORD*)(v45 + 240);
      *(_QWORD*)(v45 + 232) = v42;
      *(_QWORD*)(v45 + 240) = v43;
      if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
        std___1___shared_weak_count___release_weak(v46);
      }
      GameRoutine_d9d750((__int64*)(*(_QWORD*)(v250[4] + 232LL) + 136LL), v247,
                         (__int64)v30, (unsigned __int64)&v30[-v247]);
      v47 = *(_QWORD**)(v250[4] + 232LL);
      GameRoutine_d98e20((__int64)v47);
      GameRoutine_d99480(v47, "HubXml_Common", 0);
      GameRoutine_d99480(v47, "HubXml_Character", 0);
      GameRoutine_d99480(v47, "HubXml_Conditions", 0);
      GameRoutine_d99480(v47, "HubXml_Timeline", 0);
      GameData_22127a8 = *(_QWORD*)(v250[4] + 232LL);
      v48 = (_QWORD**)*a2;
      v246 = (_QWORD**)a2[1];
      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      if ((_QWORD**)*a2 != v246) {
        v245 = GameData_212ef60 + 16;
        v248 = GameData_212f290[0] + 2;
        v257 = GameData_212fbc8 + 2;
        while (1) {
          v249 = v48;
          v268 = nullptr;
          v269 = 0;
          v266 = 0;
          v267 = nullptr;
          v264 = nullptr;
          v265 = nullptr;
          v263 = 0;
          v49 = (*v48)[1];
          v50 = (const char*)(*v48)[11];
          *(_QWORD*)&v262 = **v48;
          *((_QWORD*)&v262 + 1) = v49;
          v51 = strlen(v50);
          if (v51 >= 0xFFFFFFFFFFFFFFF7LL) {
          LABEL_445:
            String_60a1d0();
          }
          v52 = v51;
          if (v51 >= 0x17) {
            break;
          }
          v53 = (char*)&v276_.v276 + 1;
          LOBYTE(v276_.v276) = 2 * v51;
          if (v51 != 0) {
            goto LABEL_70;
          }
        LABEL_71:
          v53[v52] = 0;
          LocatorDispos_db1ce0((void*)((unsigned __int8*)&v270_.v270),
                               (unsigned __int8*)&v276_.v276);
          if ((v276_.v276 & 1) != 0 && v276_.v278 != nullptr) {
            v56 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v56 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v56, (__int64)v276_.v278);
          }
          if ((v270_.v270 & 1) != 0) {
            fw_text_String_CopyTerminated(&v276_.v276, (__int64)v270_.v272,
                                          v270_.v271);
          }
          else {
            v276_.v276 = v270_.v270;
            v276_.v277 = v270_.v271;
            v276_.v278 = v270_.v272;
          }
          v57 = v276_.v276 & 1;
          v58 = (unsigned __int64)(unsigned __int8)v276_.v276 >> 1;
          if (v57 != 0) {
            v58 = v276_.v277;
          }
          if (v58 != 0) {
            v59 = (__int64*)(v44[4] + 248LL);
            if (v59 != &v276_.v276) {
              if ((*(_BYTE*)v59 & 1) != 0) {
                if (v57 != 0) {
                  v61 = v276_.v278;
                }
                else {
                  v61 = (char*)&v276_.v276 + 1;
                }
                SpineModel_64dde0(v59, (__int64)v61, v58);
              }
              else if (v57 != 0) {
                GameRoutine_64df20(v59, (__int64)v276_.v278, v276_.v277);
              }
              else {
                v60 = v276_.v277;
                *v59 = v276_.v276;
                v59[1] = v60;
                v59[2] = (__int64)v276_.v278;
              }
            }
            HubScript_d98960(*(_QWORD**)(v44[4] + 232LL), (__int64)&v276_.v276);
            v62 = (_DWORD*)v44[4];
            v64 = *(_DWORD*)v62;
            v63 = (__int64*)(v62 + 2);
            v65 = (v64 & 2) != 0;
            if ((v276_.v276 & 1) != 0) {
              v66 = v276_.v278;
            }
            else {
              v66 = (char*)&v276_.v276 + 1;
            }
            game_HubDisposFileReader_CalcGroupNames(v44[4] + 32LL, v66, v63,
                                                    v65);
            v57 = v276_.v276 & 1;
          }
          if (v57 != 0 && v276_.v278 != nullptr) {
            v67 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v67, (__int64)v276_.v278);
          }
          if ((v270_.v273 & 1) != 0 && v270_.v274 != 0) {
            v68 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v68 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v68, v270_.v274);
          }
          if ((v270_.v270 & 1) != 0 && v270_.v272 != nullptr) {
            v69 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v69, (__int64)v270_.v272);
          }
          v70 = (unsigned __int8*)v44[4];
          v265 = v264;
          v268 = v267;
          HubDisposFileReader_c98880((void*)(&v270_.v270), (_QWORD*)v70 + 4);
          v72 = *((_QWORD*)v70 + 10);
          v71 = *((_QWORD*)v70 + 11);
          v254 = v70;
          v255 = v71;
          while (v72 != v71) {
            if (*(_BYTE*)v72 != 0) {
              LocatorDispos_db2180((void*)(&v276_.v276), v254 + 248,
                                   (unsigned __int8*)(v72 + 56));
              v73 = (_QWORD*)v270_.v270;
              v74 = v270_.v271;
              if (v270_.v270 != v270_.v271) {
                v75 = v72 + 9;
                while (1) {
                  v76 = (_QWORD*)*v73;
                  v77 = (*(_BYTE*)(v72 + 8) & 1) != 0 ? *(_QWORD*)(v72 + 24)
                                                      : v75;
                  v78 = game_HashString(v77);
                  if (v78 != 0) {
                    v79 = v76[11];
                    if (v79 != 0 && v76[13] != 0) {
                      v81 = v79 - 1;
                      if ((v79 & (v79 - 1)) != 0) {
                        v82 = v78;
                        if (v78 >= v79) {
                          v82 = v78 % v79;
                        }
                      }
                      else {
                        v82 = v81 & v78;
                      }
                      v83 = *(_QWORD**)(v76[10] + 8 * v82);
                      if (v83 != nullptr) {
                        v84 = (_QWORD*)*v83;
                        if (v84 != nullptr) {
                          if ((v79 & v81) == 0) {
                            while (1) {
                              v86 = v84[1];
                              if (v86 == v78) {
                                if (v84[2] == v78) {
                                  goto LABEL_145;
                                }
                              }
                              else if ((v86 & v81) != v82) {
                                goto LABEL_116;
                              }
                              v84 = (_QWORD*)*v84;
                              if (v84 == nullptr) {
                                goto LABEL_116;
                              }
                            }
                          }
                          while (1) {
                            v85 = v84[1];
                            if (v85 == v78) {
                              break;
                            }
                            if (v85 >= v79) {
                              v85 %= v79;
                            }
                            if (v85 != v82) {
                              goto LABEL_116;
                            }
                          LABEL_134:
                            v84 = (_QWORD*)*v84;
                            if (v84 == nullptr) {
                              goto LABEL_116;
                            }
                          }
                          if (v84[2] != v78) {
                            goto LABEL_134;
                          }
                        LABEL_145:
                          v87 = v84[3];
                          if (v87 != 0) {
                            v88 = **(_QWORD**)(v87 + 40);
                            v89 = *(_QWORD*)(*(_QWORD*)(v87 + 40) + 8LL) - v88;
                            if ((int)((unsigned __int64)v89 >> 3) >= 1) {
                              break;
                            }
                          }
                        }
                      }
                    }
                  }
                LABEL_116:
                  if (++v73 == (_QWORD*)v74) {
                    goto LABEL_191;
                  }
                }
                v90 = 0;
                v258 = v84[3];
                v260 = v75;
                while (2) {
                  if (v90 >= v89 >> 3) {
                    GameRoutine_ca7de0();
                  }
                  v92 = *(_QWORD*)(v88 + 8 * v90);
                  v93 = *(_BYTE**)(v92 + 248);
                  if (v93 != nullptr && *v93 != 0) {
                    v94 = fw_memory_HeapManager_Allocate(*v7, 872, 16, 0);
                    *(_QWORD*)(v94 + 16) = 0;
                    *(_QWORD*)(v94 + 8) = 0;
                    *(_QWORD*)v94 = v257;
                    GameHr_ff7060(v94 + 24, v92);
                    if ((v276_.v276 & 1) != 0) {
                      v95 = v276_.v277;
                    }
                    else {
                      v95 = (unsigned __int64)(unsigned __int8)v276_.v276 >> 1;
                    }
                    if ((v276_.v276 & 1) != 0) {
                      v96 = v276_.v278;
                    }
                    else {
                      v96 = (char*)&v276_.v276 + 1;
                    }
                    GameRoutine_60a060((char*)(v94 + 848), (__int64)v96, v95);
                    GameHr_d8d760(v94 + 24);
                    GameRoutine_e07e20((unsigned __int8*)(v94 + 24));
                    game_d8e140(v94 + 24);
                    game_d8ec60(v94 + 24);
                    if (*(_QWORD*)(v94 + 616) != 0) {
                      goto LABEL_173;
                    }
                    v97 = *(_QWORD*)(v94 + 576);
                    v98 = *(_QWORD*)(v94 + 584);
                    if (v98 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v98 + 8), 1u,
                          memory_order_relaxed);
                    }
                    if (v97 != 0 && *(_BYTE*)(v97 + 224) == 1 &&
                        *(_DWORD*)(v97 + 144) == 31) {
                      v99 = 0;
                      if (v98 == 0) {
                      LABEL_172:
                        if ((v99 & 1) == 0) {
                          goto LABEL_173;
                        }
                        goto LABEL_150;
                      }
                    }
                    else {
                      v99 = 1;
                      if (v98 == 0) {
                        goto LABEL_172;
                      }
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) != 0) {
                      goto LABEL_172;
                    }
                    (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
                    std___1___shared_weak_count___release_weak(v98);
                    if ((v99 & 1) == 0) {
                    LABEL_173:
                      if ((GameRoutine_d90760(v94 + 24) & 1) != 0) {
                        v100 = *(_QWORD*)(v94 + 80);
                        v101 = v265;
                        if ((unsigned __int64)v265 < v266) {
                          *v265 = v100;
                          v91 = (__int64)(v101 + 1);
                        }
                        else {
                          v102 = (__int64)v264;
                          v103 = (char*)v265 - (char*)v264;
                          v104 = v265 - v264;
                          v105 = v104 + 1;
                          if ((unsigned __int64)(v104 + 1) >> 61 != 0) {
                            goto LABEL_442;
                          }
                          v106 = v266 - (_QWORD)v264;
                          if ((__int64)(v266 - (_QWORD)v264) >> 2 > v105) {
                            v105 = v106 >> 2;
                          }
                          if ((unsigned __int64)v106 >= 0x7FFFFFFFFFFFFFF8LL) {
                            v107 = 0x1FFFFFFFFFFFFFFFLL;
                          }
                          else {
                            v107 = v105;
                          }
                          if (v107 != 0) {
                            v251 = v265 - v264;
                            if (v107 >> 61 != 0) {
                              goto LABEL_443;
                            }
                            v108 = *(_QWORD*)(v94 + 80);
                            v109 = fw_memory_HeapManager_Allocate(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                8 * v107, 16, 0);
                            v104 = v251;
                            v100 = v108;
                          }
                          else {
                            v109 = 0;
                          }
                          v110 = v109 + 8 * v107;
                          v111 = v109 + v103 - 8 * v104;
                          v252 = v110;
                          *(_QWORD*)(v109 + v103) = v100;
                          v91 = v109 + v103 + 8;
                          memcpy(v111, v102, v103);
                          v264 = (_QWORD*)v111;
                          v266 = v252;
                          v7 = (__int64*)fw_memory_g_heap_manager_ptr;
                          if (v102 != 0) {
                            v112 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v112 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v112,
                                v102);
                          }
                        }
                        v265 = (_QWORD*)v91;
                      }
                    }
                  LABEL_150:
                    v87 = v258;
                    v75 = v260;
                    if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
                      std___1___shared_weak_count___release_weak(v94);
                    }
                  }
                  ++v90;
                  v88 = **(_QWORD**)(v87 + 40);
                  v89 = *(_QWORD*)(*(_QWORD*)(v87 + 40) + 8LL) - v88;
                  if ((__int64)v90 >= (int)((unsigned __int64)v89 >> 3)) {
                    goto LABEL_116;
                  }
                  continue;
                }
              }
            LABEL_191:
              if ((v276_.v276 & 1) != 0 && v276_.v278 != nullptr) {
                v113 = 128;
                if (*(_QWORD*)(*v7 + 200) == 0) {
                  v113 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v113, (__int64)v276_.v278);
              }
            }
            v71 = v255;
            v72 += 144;
          }
          if (v270_.v270 != 0) {
            v114 = *v7;
            v270_.v271 = v270_.v270;
            v115 = 128;
            if (*(_QWORD*)(v114 + 200) == 0) {
              v115 = 56;
            }
            nn_mem_StandardAllocator_Free(v114 + v115, v270_.v270);
          }
          v116 = *((_QWORD*)v254 + 6);
          if (v116 == 0 ||
              (v117 = std___1___shared_weak_count_lock(v116)) == 0) {
          LABEL_206:
            v119 = nullptr;
            goto LABEL_207;
          }
          v118 = *((_QWORD*)v254 + 5);
          if (atomic_fetch_add((atomic_ullong* volatile)(v117 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v118 == 0) {
              goto LABEL_206;
            }
          }
          else {
            v120 = v117;
            (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117);
            std___1___shared_weak_count___release_weak(v120);
            if (v118 == 0) {
              goto LABEL_206;
            }
          }
          v119 = (_QWORD*)(v118 + 608);
        LABEL_207:
          v121 = *((_QWORD*)v254 + 19);
          v122 = *((_QWORD*)v254 + 20);
          while (v121 != v122) {
            if (*(_BYTE*)v121 == 0) {
              goto LABEL_209;
            }
            v123 = (*(_BYTE*)(v121 + 8) & 1) != 0 ? *(_QWORD*)(v121 + 24)
                                                  : v121 + 9;
            v124 = game_HashString(v123);
            if (v124 == 0) {
              goto LABEL_209;
            }
            v125 = v119[11];
            if (v125 == 0 || v119[13] == 0) {
              goto LABEL_209;
            }
            v126 = v125 - 1;
            if ((v125 & (v125 - 1)) != 0) {
              v127 = v124;
              if (v124 >= v125) {
                v127 = v124 % v125;
              }
            }
            else {
              v127 = v126 & v124;
            }
            v128 = *(_QWORD**)(v119[10] + 8 * v127);
            if (v128 == nullptr) {
              goto LABEL_209;
            }
            v129 = (_QWORD*)*v128;
            if (v129 == nullptr) {
              goto LABEL_209;
            }
            if ((v125 & v126) == 0) {
              while (1) {
                v131 = v129[1];
                if (v131 == v124) {
                  if (v129[2] == v124) {
                    goto LABEL_238;
                  }
                }
                else if ((v131 & v126) != v127) {
                  goto LABEL_209;
                }
                v129 = (_QWORD*)*v129;
                if (v129 == nullptr) {
                  goto LABEL_209;
                }
              }
            }
            while (1) {
              v130 = v129[1];
              if (v130 == v124) {
                break;
              }
              if (v130 >= v125) {
                v130 %= v125;
              }
              if (v130 != v127) {
                goto LABEL_209;
              }
            LABEL_227:
              v129 = (_QWORD*)*v129;
              if (v129 == nullptr) {
                goto LABEL_209;
              }
            }
            if (v129[2] != v124) {
              goto LABEL_227;
            }
          LABEL_238:
            v132 = v129[3];
            if (v132 != 0) {
              v244 = v122;
              v253 = v119;
              LocatorDispos_db2180((void*)(&v270_.v270), v254 + 248,
                                   (unsigned __int8*)(v121 + 56));
              v133 = **(_QWORD**)(v132 + 40);
              v134 = *(_QWORD*)(*(_QWORD*)(v132 + 40) + 8LL) - v133;
              if ((int)((unsigned __int64)v134 >> 3) >= 1) {
                v135 = 0;
                v256 = v132;
                do {
                  if (v135 >= v134 >> 3) {
                    GameRoutine_ca7e40();
                  }
                  v137 = *(_QWORD*)(v133 + 8 * v135);
                  if (*(_BYTE*)(v137 + 88) == 1) {
                    v138 = fw_memory_HeapManager_Allocate(*v7, 712, 16, 0);
                    *(_QWORD*)(v138 + 8) = 0;
                    *(_QWORD*)(v138 + 24) = 0;
                    v139 = v138 + 24;
                    v140 = v138;
                    *(_QWORD*)(v138 + 16) = 0;
                    *(_QWORD*)(v138 + 32) = 0;
                    *(_QWORD*)(v138 + 40) = 0;
                    *(_QWORD*)(v138 + 48) = 0;
                    *(_QWORD*)(v138 + 56) = 0;
                    *(_QWORD*)(v138 + 64) = 0;
                    *(_BYTE*)(v138 + 72) = 0;
                    *(_BYTE*)(v138 + 512) = 0;
                    *(_BYTE*)(v138 + 520) = 0;
                    *(_BYTE*)(v138 + 584) = 0;
                    *(_BYTE*)(v138 + 592) = 0;
                    *(_BYTE*)(v138 + 656) = 0;
                    *(_QWORD*)(v138 + 88) = 0;
                    *(_QWORD*)(v138 + 96) = 0;
                    *(_QWORD*)(v138 + 104) = 0;
                    *(_QWORD*)(v138 + 120) = 0;
                    *(_QWORD*)(v138 + 128) = 0;
                    *(_QWORD*)(v138 + 144) = 0;
                    *(_QWORD*)(v138 + 152) = 0;
                    *(_QWORD*)(v138 + 168) = 0;
                    *(_QWORD*)(v138 + 176) = 0;
                    *(_QWORD*)(v138 + 184) = 0;
                    *(_DWORD*)(v138 + 192) = 0;
                    *(_QWORD*)(v138 + 160) = 0;
                    v141 = v138 + 160;
                    *(_QWORD*)(v138 + 136) = 0;
                    v142 = v138 + 136;
                    *(_DWORD*)(v138 + 224) = 0;
                    *(_QWORD*)(v138 + 112) = 0;
                    v143 = v138 + 112;
                    *(_QWORD*)(v138 + 200) = 0;
                    v144 = (__int64*)(v138 + 200);
                    *(_QWORD*)(v138 + 232) = 0;
                    v145 = (__int64*)(v138 + 232);
                    *(_QWORD*)(v138 + 208) = 0;
                    *(_QWORD*)(v138 + 216) = 0;
                    *(_QWORD*)(v138 + 240) = 0;
                    *(_QWORD*)(v138 + 248) = 0;
                    *(_QWORD*)(v138 + 256) = 0;
                    *(_QWORD*)(v138 + 264) = 0;
                    *(_QWORD*)(v138 + 272) = 0;
                    *(_QWORD*)(v138 + 280) = 0;
                    *(_QWORD*)(v138 + 288) = 0;
                    *(_QWORD*)(v138 + 296) = 0;
                    *(_QWORD*)(v138 + 304) = 0;
                    *(_QWORD*)(v138 + 312) = 0;
                    *(_QWORD*)v138 = v248;
                    *(_QWORD*)(v138 + 80) = 0;
                    *(_QWORD*)(v138 + 320) = 0;
                    *(_QWORD*)(v138 + 328) = 0;
                    *(_QWORD*)(v138 + 336) = 0;
                    *(_QWORD*)(v138 + 344) = 0;
                    *(_QWORD*)(v138 + 352) = 0;
                    *(_QWORD*)(v138 + 360) = 0;
                    *(_QWORD*)(v138 + 368) = 0;
                    *(_QWORD*)(v138 + 376) = 0;
                    *(_QWORD*)(v138 + 384) = 0;
                    *(_QWORD*)(v138 + 392) = 0;
                    *(_QWORD*)(v138 + 400) = 0;
                    *(_QWORD*)(v138 + 408) = 0;
                    *(_QWORD*)(v138 + 416) = 0;
                    *(_QWORD*)(v138 + 424) = 0;
                    *(_QWORD*)(v138 + 432) = 0;
                    *(_QWORD*)(v138 + 440) = 0;
                    v259 = (__int64*)(v138 + 80);
                    v261 = (atomic_ullong*)(v138 + 8);
                    *(_BYTE*)(v138 + 448) = 0;
                    *(_QWORD*)(v138 + 704) = 0;
                    *(_QWORD*)(v138 + 696) = 0;
                    *(_QWORD*)(v138 + 688) = 0;
                    *(_QWORD*)(v138 + 680) = 0;
                    *(_QWORD*)(v138 + 672) = 0;
                    *(_QWORD*)(v138 + 664) = 0;
                    GameRoutine_e08050((__int64*)(v138 + 24), v137);
                    game_hub_e08150(v139, v143, (const char**)(v137 + 32));
                    game_hub_e08150(v139, v142, (const char**)(v137 + 40));
                    game_hub_e08150(v139, v141, (const char**)(v137 + 48));
                    v146 = *v144;
                    *(_DWORD*)(v140 + 184) = *(_DWORD*)(v137 + 56);
                    *(_DWORD*)(v140 + 188) = *(_DWORD*)(v137 + 60);
                    v147 = *(_DWORD*)(v137 + 64);
                    *(_QWORD*)(v140 + 208) = v146;
                    *(_DWORD*)(v140 + 192) = v147;
                    if (*(_WORD*)(v137 + 72) != 0) {
                      v148 = 0;
                      v149 = 0;
                      do {
                        AnimCtrlModule_a78450(
                            v144, (_DWORD*)(*(_QWORD*)(v137 + 80) + v148));
                        ++v149;
                        v148 += 4;
                      } while (v149 < *(unsigned __int16*)(v137 + 72));
                    }
                    if (((*(_BYTE*)(v137 + 88) - 1) & 0xF8) != 0) {
                      v150 = 0;
                    }
                    else {
                      v150 = (unsigned __int8)(*(_BYTE*)(v137 + 88) - 1) + 1;
                    }
                    *(_DWORD*)(v140 + 224) = v150;
                    GameHr_e08260(v139, v145, (unsigned __int16*)(v137 + 96));
                    game_hub_e08150(v139, v140 + 256,
                                    (const char**)(v137 + 112));
                    GameHr_e08260(v139, (__int64*)(v140 + 280),
                                  (unsigned __int16*)(v137 + 120));
                    game_hub_e08150(v139, v140 + 304,
                                    (const char**)(v137 + 136));
                    GameHr_e08260(v139, (__int64*)(v140 + 328),
                                  (unsigned __int16*)(v137 + 144));
                    game_hub_e08150(v139, v140 + 352,
                                    (const char**)(v137 + 160));
                    GameHr_e08260(v139, (__int64*)(v140 + 376),
                                  (unsigned __int16*)(v137 + 168));
                    game_hub_e08150(v139, v140 + 400,
                                    (const char**)(v137 + 184));
                    GameHr_e08260(v139, (__int64*)(v140 + 424),
                                  (unsigned __int16*)(v137 + 192));
                    if ((v270_.v270 & 1) != 0) {
                      v151 = v270_.v272;
                    }
                    else {
                      v151 = (char*)&v270_.v270 + 1;
                    }
                    if ((v270_.v270 & 1) != 0) {
                      v152 = v270_.v271;
                    }
                    else {
                      v152 = (unsigned __int64)(unsigned __int8)v270_.v270 >> 1;
                    }
                    game_hub_e023c0(v139, (__int64)v151, v152);
                    v153 = GameRoutine_e02840(v139);
                    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
                    if ((v153 & 1) != 0) {
                      v154 = *v259;
                      v155 = v268;
                      if ((unsigned __int64)v268 < v269) {
                        *v268 = v154;
                        v136 = (__int64)(v155 + 1);
                      }
                      else {
                        v156 = (__int64)v267;
                        v157 = (char*)v268 - (char*)v267;
                        v158 = v268 - v267;
                        v159 = v158 + 1;
                        if ((unsigned __int64)(v158 + 1) >> 61 != 0) {
                        LABEL_442:
                          GameRoutine_65c760();
                        }
                        v160 = v269 - (_QWORD)v267;
                        if ((__int64)(v269 - (_QWORD)v267) >> 2 > v159) {
                          v159 = v160 >> 2;
                        }
                        if ((unsigned __int64)v160 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v161 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v161 = v159;
                        }
                        if (v161 != 0) {
                          if (v161 >> 61 != 0) {
                            goto LABEL_443;
                          }
                          v162 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v161,
                              16, 0);
                        }
                        else {
                          v162 = 0;
                        }
                        v163 = v162 + 8 * v161;
                        v164 = v162 + v157 - 8 * v158;
                        *(_QWORD*)(v162 + v157) = v154;
                        v136 = v162 + v157 + 8;
                        memcpy(v164, v156, v157);
                        v267 = (_QWORD*)v164;
                        v269 = v163;
                        v7 = (__int64*)fw_memory_g_heap_manager_ptr;
                        if (v156 != 0) {
                          v165 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v165 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v165,
                              v156);
                        }
                      }
                      v268 = (_QWORD*)v136;
                    }
                    v132 = v256;
                    if (atomic_fetch_add(v261, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140);
                      std___1___shared_weak_count___release_weak(v140);
                    }
                  }
                  ++v135;
                  v133 = **(_QWORD**)(v132 + 40);
                  v134 = *(_QWORD*)(*(_QWORD*)(v132 + 40) + 8LL) - v133;
                } while ((__int64)v135 < (int)((unsigned __int64)v134 >> 3));
              }
              if ((v270_.v270 & 1) != 0 && v270_.v272 != nullptr) {
                v166 = 128;
                if (*(_QWORD*)(*v7 + 200) == 0) {
                  v166 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v166, (__int64)v270_.v272);
              }
              v119 = v253;
              v122 = v244;
            }
          LABEL_209:
            v121 += 144;
          }
          v167 = (__int64)*v249;
          v168 = (*v249)[3];
          v170 = *(unsigned __int64**)(v168 + 72);
          v169 = *(unsigned __int64**)(v168 + 80);
          if (v169 == v170) {
            goto LABEL_406;
          }
          while (1) {
            if (game_GameModeData_instance_ != 0 &&
                (GameRoutine_65c660(
                     *(_QWORD**)(game_GameModeData_instance_ + 48), v170) &
                 1) != 0) {
              if (game_GameModeData_instance_ == 0) {
                break;
              }
              v171 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48), v170);
              if (v171 == 0 || *(_DWORD*)(v171 + 32) == 0) {
                break;
              }
            }
            v170 += 2;
            if (v170 == v169) {
              goto LABEL_406;
            }
          }
          v172 = v250[4];
          v173 = *(_QWORD*)(v172 + 48);
          if (v173 == 0) {
            goto LABEL_296;
          }
          v174 = std___1___shared_weak_count_lock(v173);
          if (v174 == 0) {
            goto LABEL_296;
          }
          v175 = *(_QWORD*)(v172 + 40);
          if (atomic_fetch_add((atomic_ullong* volatile)(v174 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v175 != 0) {
              goto LABEL_294;
            }
          LABEL_296:
            v176 = nullptr;
          }
          else {
            v177 = v174;
            (*(void (**)(__int64))(*(_QWORD*)v174 + 16LL))(v174);
            std___1___shared_weak_count___release_weak(v177);
            if (v175 == 0) {
              goto LABEL_296;
            }
          LABEL_294:
            v176 = (_QWORD*)(v175 + 96);
          }
          v178 = *(_QWORD*)(v172 + 104);
          v179 = *(_QWORD*)(v172 + 112);
        LABEL_300:
          if (v178 != v179) {
            if (*(_BYTE*)v178 == 0) {
              goto LABEL_299;
            }
            v180 = (*(_BYTE*)(v178 + 8) & 1) != 0 ? *(_QWORD*)(v178 + 24)
                                                  : v178 + 9;
            v181 = game_HashString(v180);
            if (v181 == 0) {
              goto LABEL_299;
            }
            v182 = v176[11];
            if (v182 == 0 || v176[13] == 0) {
              goto LABEL_299;
            }
            v183 = v182 - 1;
            if ((v182 & (v182 - 1)) != 0) {
              v184 = v181;
              if (v181 >= v182) {
                v184 = v181 % v182;
              }
            }
            else {
              v184 = v183 & v181;
            }
            v185 = *(_QWORD**)(v176[10] + 8 * v184);
            if (v185 == nullptr) {
              goto LABEL_299;
            }
            v186 = (_QWORD*)*v185;
            if (v186 == nullptr) {
              goto LABEL_299;
            }
            if ((v182 & v183) == 0) {
              while (1) {
                v188 = v186[1];
                if (v188 == v181) {
                  if (v186[2] == v181) {
                    goto LABEL_328;
                  }
                }
                else if ((v188 & v183) != v184) {
                  goto LABEL_299;
                }
                v186 = (_QWORD*)*v186;
                if (v186 == nullptr) {
                  goto LABEL_299;
                }
              }
            }
            while (1) {
              v187 = v186[1];
              if (v187 == v181) {
                if (v186[2] == v181) {
                LABEL_328:
                  v189 = v186[3];
                  if (v189 != 0) {
                    LocatorDispos_db2180((void*)(&v270_.v270),
                                         (unsigned __int8*)(v172 + 248),
                                         (unsigned __int8*)(v178 + 56));
                    v190 = **(_QWORD**)(v189 + 40);
                    v191 = *(_QWORD*)(*(_QWORD*)(v189 + 40) + 8LL) - v190;
                    if ((int)((unsigned __int64)v191 >> 3) < 1) {
                      v198 = 0;
                      if ((v270_.v270 & 1) != 0) {
                        goto LABEL_350;
                      }
                    }
                    else {
                      v192 = 0;
                      do {
                        if (v192 >= v191 >> 3) {
                          GameRoutine_ca7e00();
                        }
                        v197 = *(_QWORD*)(v190 + 8 * v192);
                        if (game_ffbf60(*(const char**)(v197 + 152)) ||
                            game_ffbf60(*(const char**)(v197 + 176))) {
                          v193 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 1040, 16,
                              0);
                          *(_QWORD*)(v193 + 16) = 0;
                          *(_QWORD*)(v193 + 8) = 0;
                          *(_QWORD*)v193 = v245;
                          GameHr_d82e50(v193 + 24, v197);
                          if ((v270_.v270 & 1) != 0) {
                            v194 = v270_.v272;
                          }
                          else {
                            v194 = (char*)&v270_.v270 + 1;
                          }
                          if ((v270_.v270 & 1) != 0) {
                            v195 = v270_.v271;
                          }
                          else {
                            v195 =
                                (unsigned __int64)(unsigned __int8)v270_.v270 >>
                                1;
                          }
                          GameRoutine_e149a0(v193 + 24, (__int64)v194, v195);
                          v196 = GameHr_e152d0((_BYTE*)(v193 + 24));
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v193 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
                            if ((v196 & 1) != 0) {
                              goto LABEL_345;
                            }
                          }
                          else {
                            (*(void (**)(__int64))(*(_QWORD*)v193 + 16LL))(
                                v193);
                            std___1___shared_weak_count___release_weak(v193);
                            if ((v196 & 1) != 0) {
                            LABEL_345:
                              v198 = 1;
                              goto LABEL_349;
                            }
                          }
                        }
                        ++v192;
                        v190 = **(_QWORD**)(v189 + 40);
                        v191 = *(_QWORD*)(*(_QWORD*)(v189 + 40) + 8LL) - v190;
                      } while ((__int64)v192 <
                               (int)((unsigned __int64)v191 >> 3));
                      v198 = 0;
                    LABEL_349:
                      if ((v270_.v270 & 1) != 0) {
                      LABEL_350:
                        if (v270_.v272 != nullptr) {
                          v199 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v199 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v199,
                              (__int64)v270_.v272);
                        }
                      }
                    }
                    if ((v198 & 1) != 0) {
                      v221 = 2;
                      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
                    LABEL_405:
                      HIDWORD(v263) |= v221;
                      LODWORD(v263) = 1;
                      goto LABEL_406;
                    }
                  }
                LABEL_299:
                  v178 += 144;
                  goto LABEL_300;
                }
              }
              else {
                if (v187 >= v182) {
                  v187 %= v182;
                }
                if (v187 != v184) {
                  goto LABEL_299;
                }
              }
              v186 = (_QWORD*)*v186;
              if (v186 == nullptr) {
                goto LABEL_299;
              }
            }
          }
          v200 = *(const char**)(v167 + 8);
          v201 = strlen(v200);
          if (v201 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_445;
          }
          v202 = v201;
          if (v201 >= 0x17) {
            if ((v201 | 7) == 0x17) {
              v204 = 26;
            }
            else {
              v204 = (v201 | 7) + 1;
            }
            v203 = (const char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v204, 16, 0);
            v270_.v271 = v202;
            v270_.v272 = v203;
            v270_.v270 = v204 | 1;
          LABEL_362:
            memmove((__int64)v203, (__int64)v200, v202);
            goto LABEL_363;
          }
          v203 = (char*)&v270_.v270 + 1;
          LOBYTE(v270_.v270) = 2 * v201;
          if (v201 != 0) {
            goto LABEL_362;
          }
        LABEL_363:
          v203[v202] = 0;
          v205 = v270_.v270;
          v206 = v270_.v272;
          v207 = (v270_.v270 & 1) != 0 ? (__int64*)v270_.v272
                                       : (__int64*)((char*)&v270_.v270 + 1);
          v208 = (v270_.v270 & 1) != 0
                     ? v270_.v271
                     : (unsigned __int64)(unsigned __int8)v270_.v270 >> 1;
          v209 = v208 + 40;
          if (v208 + 40 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_445;
          }
          if (v209 > 0x16) {
            if ((v209 | 7) == 0x17) {
              v212 = 26;
            }
            else {
              v212 = (v209 | 7) + 1;
            }
            v211 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v212, 16, 0);
            v276_.v277 = v208 + 40;
            v276_.v278 = (const char*)v211;
            v276_.v276 = v212 | 1;
            v210 = v212 | 1;
          }
          else {
            v210 = 2 * v209;
            v211 = 0;
            v276_.v277 = 0;
            v276_.v278 = nullptr;
            v276_.v276 = (unsigned __int8)(2 * v209);
          }
          v213 = (v210 & 1) == 0;
          if ((v210 & 1) != 0) {
            v214 = (_QWORD*)v211;
          }
          else {
            v214 = (__int64*)((char*)&v276_.v276 + 1);
          }
          v214[2] = 0x8FB8E8B383E3A783LL;
          v214[3] = 0x83E8AF8FE5B4A0E7LL;
          v214[4] = 0x5FBAA4E7A8A1E8BDLL;
          *v214 = 0x83E3B688E5B7BCE5LL;
          v214[1] = 0xE3B882E3B383E380LL;
          if (v213) {
            v215 = v276_._139;
          }
          else {
            v215 = (_BYTE*)(v211 + 40);
          }
          if (v208 != 0) {
            memmove((__int64)v215, (__int64)v207, v208);
          }
          v215[v208] = 0;
          if ((v276_.v276 & 1) != 0) {
            v216 = v276_.v278;
          }
          else {
            v216 = (char*)&v276_.v276 + 1;
          }
          v275[1] = (unsigned __int64)v216;
          v275[0] = game_HashString((__int64)v216);
          if (game_GameModeData_instance_ == 0) {
            v218 = true;
            v7 = (__int64*)fw_memory_g_heap_manager_ptr;
            if ((v276_.v276 & 1) == 0) {
              goto LABEL_398;
            }
            goto LABEL_394;
          }
          v217 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48), v275);
          v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v217 != 0) {
            v218 = (signed __int32)*(_DWORD*)(v217 + 32) < 1;
            if ((v276_.v276 & 1) == 0) {
              goto LABEL_398;
            }
          LABEL_394:
            if (v276_.v278 != nullptr) {
              v219 = 128;
              if (*(_QWORD*)(*v7 + 200) == 0) {
                v219 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v219, (__int64)v276_.v278);
            }
          }
          else {
            v218 = true;
            if ((v276_.v276 & 1) != 0) {
              goto LABEL_394;
            }
          }
        LABEL_398:
          if ((v205 & 1) != 0 && v206 != nullptr) {
            v220 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v220 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v220, (__int64)v206);
          }
          if (!v218) {
            v221 = 4;
            goto LABEL_405;
          }
        LABEL_406:
          v222 = v250[2];
          v223 = v250[3];
          if (v222 < v223) {
            v224 = GameRoutine_ffc2b0(v222, (__int64)&v262) + 72;
            goto LABEL_422;
          }
          v225 = v250[1];
          v226 = v222 - v225;
          v227 = 1 - 0x71C71C71C71C71C7LL * ((__int64)(v222 - v225) >> 3);
          if (v227 > 0x38E38E38E38E38ELL) {
            goto LABEL_448;
          }
          v228 = 0x8E38E38E38E38E39LL * ((__int64)(v223 - v225) >> 3);
          if (2 * v228 > v227) {
            v227 = 2 * v228;
          }
          if (v228 >= 0x1C71C71C71C71C7LL) {
            v229 = 0x38E38E38E38E38ELL;
          }
          else {
            v229 = v227;
          }
          if (v229 != 0) {
            if (v229 > 0x38E38E38E38E38ELL) {
            LABEL_443:
              GameRoutine_60a210();
            }
            v230 = fw_memory_HeapManager_Allocate(*v7, 72 * v229, 16, 0);
          }
          else {
            v230 = 0;
          }
          v231 = v230 + v226;
          v232 = v230 + 72 * v229;
          GameRoutine_ffc2b0(v230 + v226, (__int64)&v262);
          v224 = v231 + 72;
          v233 = (char*)v250[1];
          v234 = (char*)v250[2];
          v235 = v231 + v233 - v234;
          GameHr_ffc180(v233, v234, v235);
          v236 = v250[1];
          v250[1] = v235;
          v250[2] = v224;
          v250[3] = v232;
          if (v236 != 0) {
            v237 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v237 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v237, v236);
          }
        LABEL_422:
          v238 = (__int64)v267;
          v250[2] = v224;
          v44 = v250;
          if (v238 != 0) {
            v239 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v239 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v239, v238);
          }
          if (v264 != nullptr) {
            v240 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v240 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v240, (__int64)v264);
          }
          v48 = v249 + 1;
          if (v249 + 1 == v246) {
            goto LABEL_431;
          }
        }
        if ((v51 | 7) == 0x17) {
          v54 = 26;
        }
        else {
          v54 = (v51 | 7) + 1;
        }
        v276_.v278 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v54, 16, 0);
        v55 = v54 | 1;
        v53 = v276_.v278;
        v7 = (__int64*)fw_memory_g_heap_manager_ptr;
        v276_.v276 = v55;
        v276_.v277 = v52;
      LABEL_70:
        memmove((__int64)v53, (__int64)v50, v52);
        goto LABEL_71;
      }
    LABEL_431:
      v241 = v44[5];
      v44[4] = 0;
      v44[5] = 0;
      GameData_22127a8 = 0;
    }
    v242 = v247;
    if (v241 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v241 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v241 + 16LL))(v241);
      std___1___shared_weak_count___release_weak(v241);
      v242 = v247;
    }
    game_hub_g_no_map = 0;
    if (v242 != 0) {
      v243 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v243 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v243, v242);
    }
  }
}

__int64 game_103d970()
{
  _BYTE* v0;

  GameData_2234608 = 0xFF00000000LL;
  GameData_2234610 = 1;
  GameData_2234678 = 255;
  GameData_2234630 = 1;
  GameData_2234631 = 0;
  *(int*)((char*)&GameData_2234631 + 3) = 0;
  GameData_2234654 = 1;
  GameData_2234618 = 0x20000FFFFLL;
  GameData_2234620 = 0xFF0000000000LL;
  GameData_223467c = 0x300000002LL;
  GameData_2234684 = 511;
  GameData_2234628 = 0x100000003LL;
  GameData_2234638 = 0xFF0100000001LL;
  GameData_2234640 = 0x100000003LL;
  GameData_2234648 = 65280;
  GameData_223464c = 0x200000002LL;
  GameData_2234670 = 0x300000001LL;
  GameData_2234658 = 0x200000003LL;
  GameData_2234660 = 257;
  GameData_2234664 = 0x200000000LL;
  GameData_223466c = 256;
  GameData_2234688 = 0x300000001LL;
  GameData_2234690 = 256;
  GameData_22345f8 = (__int64)&GameData_2234608;
  GameData_2234600 = 12;
  v0 = (_BYTE*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 1, 16,
                                              0);
  GameData_2234698 = (__int64)v0;
  *v0 = 1;
  GameData_22346a0 = (__int64)(v0 + 1);
  GameData_22346a8 = (__int64)(v0 + 1);
  return GameRoutine_2b0();
}

__int64 game_1096780(__int64 a1, float* a2, char a3)
{

#pragma clang fp contract(off)
  int v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  int v11;
  int v12;
  bool v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    float32x4_t v28;
    int v29;
    char gap20_[12];
    float32x4_t* v30;
    __int64 v31;
    __int128 v32;
    __int128 v33;
    __int64 v34;
    int v35;
    char gap92_[4];
    __int64 v36;
    __int64 v37;
    int v38;
    char gap116_[12];
    __int128 v39;
    float32x4_t v40;
    char v41;
    char gap161_[3];
    char v42;
    char gap165_[3];
    char v43;
    char gap169_[3];
    char v44;
    char gap173_[3];
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v28_;

  if (a2 == nullptr || a2[14] <= 0x0.0p+0f) {
    return 0;
  }
  v4 = a3 & 1;
  if (a2 != *(float**)(a1 + 176) || *(unsigned __int8*)(a1 + 194) != v4) {
    if ((*(_BYTE*)(a1 + 488) & 1) != 0 || *(float*)(a1 + 464) <= 0x0.0p+0f) {
    LABEL_22:
      if (*((_BYTE*)a2 + 97) == 1) {
        v14 = *(_QWORD*)(a1 + 72);
        v28_.v30 = nullptr;
        v28_.v31 = 0;
        v28_.v28 = (__typeof__(v28_.v28)){0};
        v28_.v29 = 0;
        v28_.v35 = 0;
        v28_.v34 = 1109393408;
        v28_.v36 = 0;
        v28_.v37 = v14;
        v28_.v38 = 257;
        v28_.v32 = GameData_1a83090;
        v28_.v33 = GameData_1a83610;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6170) != 0) {
          v26 = *((_QWORD*)GameData_212c550 + 1);
          *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
          *((_QWORD*)&GameData_21a6160 + 1) = v26;
          __cxa_guard_release((__int64)&GameData_21a6170);
        }
        v28_.v39 = GameData_21a6160;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6170) != 0) {
          v27 = *((_QWORD*)GameData_212c550 + 1);
          *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
          *((_QWORD*)&GameData_21a6160 + 1) = v27;
          __cxa_guard_release((__int64)&GameData_21a6170);
        }
        v28_.v41 = 0;
        v28_.v42 = 0;
        v28_.v43 = 0;
        v28_.v44 = 0;
        v28_.v45 = 0;
        v28_.v46 = 0;
        v28_.v47 = 0;
        v28_.v40 = vsubq_f32(COERCE_AS(float32x4_t, 0),
                             COERCE_AS(float32x4_t, GameData_21a6160));
        GameRoutine_10be300((__int64)&v28_.v28, a1 + 80);
        GameRoutine_10bfee0((__int64)&v28_.v28, (__int64)a2, a3 & 1);
        v15 = GameRoutine_10bfbf0(&v28_.v28);
        if (v15) {
          GameRoutine_10be430(a1 + 80, (__int64)&v28_.v28);
        }
        v16 = v28_.v47;
        v28_.v47 = 0;
        if (v16 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
        }
        if (!v15) {
          return 0;
        }
      }
      else {
        GameRoutine_10bfee0(a1 + 80, (__int64)a2, a3 & 1);
      }
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                 32LL) -
                                      8LL) +
                           40LL) +
                226LL) = 1;
      GameRoutine_1115db0(a1 + 432, (__int64)a2, a3 & 1);
      *(_BYTE*)(a1 + 64) = 1;
      v18 = *(_QWORD*)(a1 + 40);
      v19 = *(_QWORD*)(a1 + 48);
      if (v18 != v19) {
        v20 = a3 & 1;
        do {
          if (*(_DWORD*)v18 != 0) {
            v21 = *(_QWORD*)(v18 + 16);
            if (v21 == 0 || *(_QWORD*)(v21 + 8) == -1) {
              goto LABEL_34;
            }
            LANES128(v28_.v28).n128_u64[0] = (unsigned __int64)a2;
            LANES128(v28_.v28).n128_u64[1] = v20;
            v22 = *(_QWORD*)(v18 + 64);
            if (v22 == 0) {
              GameRoutine_60a310();
            }
            (*(void (**)(__int64, float32x4_t*))(*(_QWORD*)v22 + 48LL))(
                v22, &v28_.v28);
            if ((*(_DWORD*)v18 & 0x80000000) != 0) {
            LABEL_34:
              *(_DWORD*)v18 = 0;
            }
          }
          v18 += 80;
        } while (v18 != v19);
      }
      v23 = *(unsigned __int8*)(a1 + 488);
      *(_BYTE*)(a1 + 64) = 0;
      if (v23 == 1) {
        *(_BYTE*)(a1 + 488) = 0;
        return 1;
      }
      v28_.v30 = &v28_.v28;
      LANES128(v28_.v28).n128_u64[0] = (unsigned __int64)(GameData_21320e8 + 2);
      GameRoutine_18c8060((__int64)&v28_.v28);
      if (v28_.v30 == &v28_.v28) {
        v24 = 32;
      }
      else {
        if (v28_.v30 == nullptr) {
          goto LABEL_49;
        }
        v24 = 40;
      }
      (*(void (**)(void*))(LANES128(*(v28_.v30)).n128_u64[0] + v24))(
          (void*)v28_.v30);
    LABEL_49:
      if (*GameData_212d448[0] != 0) {
        v25 = *(_QWORD*)(*GameData_212d448[0] + 128);
        if (v25 != 0) {
          *(_QWORD*)(v25 + 472) = 0;
          *(_DWORD*)(v25 + 464) = 0;
        }
      }
      return 1;
    }
    if (*((_DWORD*)a2 + 6) != 2052559) {
      v8 = *(unsigned __int8*)a2;
      v9 = *((_QWORD*)a2 + 1);
      if ((v8 & 1) == 0) {
        v9 = v8 >> 1;
      }
      if (v9 <= 5 || ((v8 & 1) == 0 ? (v10 = (unsigned __int8*)a2 + 1)
                                    : (v10 = *((unsigned __int8**)a2 + 2)),
                      (v11 = *(_DWORD*)v10, v12 = *((unsigned __int16*)v10 + 2),
                       v11 == *(_DWORD*)"Behind")
                          ? (v13 = v12 == *(unsigned __int16*)"nd")
                          : (v13 = false),
                      !v13)) {
        *(_QWORD*)(a1 + 472) = 0;
        *(_DWORD*)(a1 + 464) = 0;
        goto LABEL_22;
      }
    }
    *(_QWORD*)(a1 + 472) = a2;
    *(_BYTE*)(a1 + 480) = v4;
  }
  return 1;
}

__int64 game_10e8630()
{
  GameData_2236528 = 0;
  GameData_2236574 = 0;
  GameData_223657c = 0;
  GameData_2236538 = 0;
  GameData_2236540 = 0;
  GameData_2236548 = 0;
  GameData_2236550 = 0;
  GameData_2236558 = 0;
  GameData_2236560 = 0;
  GameData_2236568 = 0;
  GameData_2236570 = 0;
  GameData_2236520 = 1051372203;
  GameData_223652c = 0x4040000000000000LL;
  GameData_2236534 = 1069547520;
  return GameRoutine_2b0();
}

__attribute__((swiftcall)) void game_111d920(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2)
{
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float v7;
  float v8;
  float v9;
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
  int v20;
  float v21;
  int v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
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
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  struct {
    _QWORD v90[2];
    __int64 v91;
    unsigned __int64 v92;
    unsigned __int64 v93;
    unsigned __int64 v94;
    unsigned __int64 v95;
    __int64 v96;
    __int64 v97;
    bool v98;
    char gap89_[3];
    int v99;
  } v90_;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = *(float*)a1;
  v90_.v90[0] = a1;
  v90_.v90[1] = a2;
  v90_.v93 = 0;
  v90_.v94 = 0;
  v90_.v95 = 0;
  v90_.v96 = 0;
  v90_.v99 = 0;
  v90_.v91 = 0x43FA000043FA0000LL;
  v90_.v92 = 0xC3FA0000C3FA0000LL;
  v90_.v97 = 0x3F0000003F000000LL;
  v90_.v98 = (*(_DWORD*)(a2 + 112) & 0x80000) != 0;
  v7 = 0x1.f400000000000p+8f;
  if (v4 < 0x1.f400000000000p+8f) {
    v7 = v4;
    *(float*)&v90_.v91 = v4;
  }
  v8 = -0x1.f400000000000p+8f;
  if (v4 > -0x1.f400000000000p+8f) {
    v8 = v4;
    *(float*)&v90_.v92 = v4;
  }
  v9 = *(float*)(a1 + 4);
  v10 = 0x1.f400000000000p+8f;
  if (v9 < 0x1.f400000000000p+8f) {
    v10 = *(float*)(a1 + 4);
    *((float*)&v90_.v91 + 1) = v10;
  }
  v11 = -0x1.f400000000000p+8f;
  if (v9 > -0x1.f400000000000p+8f) {
    v11 = v9;
    *((float*)&v90_.v92 + 1) = v9;
  }
  v12 = *(float*)(a1 + 8);
  if (v7 > v12) {
    v7 = *(float*)(a1 + 8);
    *(float*)&v90_.v91 = v7;
  }
  if (v8 < v12) {
    v8 = v12;
    *(float*)&v90_.v92 = v12;
  }
  v13 = *(float*)(a1 + 12);
  if (v10 > v13) {
    v10 = *(float*)(a1 + 12);
    *((float*)&v90_.v91 + 1) = v10;
  }
  if (v11 < v13) {
    v11 = v13;
    *((float*)&v90_.v92 + 1) = v13;
  }
  v14 = *(float*)(a1 + 32);
  v15 = *(float*)(a1 + 36);
  v89 = v11;
  v90_.v93 = __PAIR64__(LODWORD(v15), LODWORD(v14));
  GameRoutine_111d7a0(a2, 0),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v17 = *(float*)(a1 + 40);
  v16 = *(float*)(a1 + 44);
  v19 = v18;
  *(float*)&v90_.v97 = v18;
  v20 = 1;
  v90_.v95 = __PAIR64__(LODWORD(v16), LODWORD(v17));
  GameRoutine_111d7a0(a2, 1),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v22 = *(_DWORD*)(a2 + 116);
  *((float*)&v90_.v97 + 1) = v21;
  v90_.v99 = 0;
  if ((v22 & 0x800) != 0) {
    goto LABEL_20;
  }
  if ((v22 & 0x400) != 0) {
    v20 = -1;
  LABEL_20:
    v90_.v99 = v20;
  }
  if (*(int*)(a1 + 48) <= 1 && *(int*)(a1 + 52) <= 1 &&
      v19 <= 0x1.0000000000000p+1f && v21 <= 0x1.0000000000000p+1f) {
    v23 = vabds_f32(v17, v14);
    v24 = vabds_f32(v16, v15);
    v25 = v17 - v14;
    v26 = v16 - v15;
    if (v23 < v24) {
      v27 = v89 - v10;
    LABEL_27:
      if (v27 >= 0x1.e000000000000p+3f &&
          ((float)(v8 - v7) <= 0x1.e000000000000p+3f ||
           v27 > 0x1.e000000000000p+3f)) {
        goto LABEL_43;
      }
      goto LABEL_34;
    }
    if ((float)(v8 - v7) >= 0x1.e000000000000p+3f) {
      v27 = v89 - v10;
      if ((float)(v8 - v7) > 0x1.e000000000000p+3f ||
          v27 <= 0x1.e000000000000p+3f) {
        if (v23 != v24) {
          goto LABEL_43;
        }
        goto LABEL_27;
      }
    }
  }
LABEL_34:
  v28 = (float)(v15 + v16) * 0x1.0000000000000p-1f;
  v29 = vabds_f32(v14, v17) + vabds_f32(v15, v16);
  v30 = 0x0.0p+0f;
  if ((float)(v8 - v7) <= (float)(v89 - v10)) {
    v31 = 0x0.0p+0f;
  }
  else {
    v31 = 0x1.0000000000000p+0f;
  }
  if ((float)(v8 - v7) <= (float)(v89 - v10)) {
    v30 = 0x1.0000000000000p+0f;
  }
  v32 = (float)(v14 + v17) * 0x1.0000000000000p-1f;
  v33 = (float)(v31 * v29) * 0x1.0000000000000p-1f;
  v34 = (float)(v30 * v29) * 0x1.0000000000000p-1f;
  v35 = v28 - v34;
  v36 = v32 - v33;
  v37 = v32 + v33;
  v38 = v28 + v34;
  v90_.v93 = __PAIR64__(COERCE_UNSIGNED_INT((float)(v28 - v34)), LODWORD(v36));
  v90_.v95 = __PAIR64__(COERCE_UNSIGNED_INT((float)(v28 + v34)), LODWORD(v37));
  if ((float)((float)((float)(PSEUDO_UNFUSED(
                          (float)((float)(v28 - v34) - v15) *
                          (float)((float)(v28 - v34) - v15))) +
                      (float)((float)(v36 - v14) * (float)(v36 - v14))) +
              (float)((float)(PSEUDO_UNFUSED((float)(v38 - v16) *
                                             (float)(v38 - v16))) +
                      (float)((float)(v37 - v17) * (float)(v37 - v17)))) <=
      (float)((float)((float)(PSEUDO_UNFUSED((float)(v38 - v15) *
                                             (float)(v38 - v15))) +
                      (float)((float)(v37 - v14) * (float)(v37 - v14))) +
              (float)((float)(PSEUDO_UNFUSED((float)(v35 - v16) *
                                             (float)(v35 - v16))) +
                      (float)((float)(v36 - v17) * (float)(v36 - v17))))) {
    v39 = v28 - v34;
    v35 = v38;
    v40 = v36;
    v36 = v37;
  }
  else {
    *(float*)&v90_.v93 = v37;
    *((float*)&v90_.v93 + 1) = v28 + v34;
    v39 = v28 + v34;
    v40 = v37;
    v90_.v95 = __PAIR64__(LODWORD(v35), LODWORD(v36));
  }
  v25 = v36 - v40;
  v26 = v35 - v39;
LABEL_43:
  v41 = (float)(PSEUDO_UNFUSED(v26 * v26)) + (float)(v25 * v25);
  if (v41 >= 0x1.0000000000000p-23f) {
    v44 = 0x1.0000000000000p+0f / sqrtf(v41);
    v43 = v25 * v44;
    v42 = v26 * v44;
  }
  else {
    v42 = 0x1.0000000000000p+0f;
    v43 = 0x0.0p+0f;
  }
  v90_.v94 = __PAIR64__(LODWORD(v42), LODWORD(v43));
  *(float*)&v90_.v96 = -v43;
  *((float*)&v90_.v96 + 1) = -v42;
  game_111e3c0((__int64)v90_.v90),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v46 = *((float*)&v90_.v93 + 1);
  v45 = *(float*)&v90_.v93;
  v47 = fminf(*(float*)&v90_.v93 - *(float*)&v90_.v97, 0x1.f400000000000p+8f);
  v48 = fmaxf(*(float*)&v90_.v93 - *(float*)&v90_.v97, -0x1.f400000000000p+8f);
  v49 = *(float*)&v90_.v97 + *(float*)&v90_.v93;
  v50 = fminf(*((float*)&v90_.v93 + 1) - *(float*)&v90_.v97,
              0x1.f400000000000p+8f);
  v51 = *(float*)&v90_.v97 + *((float*)&v90_.v93 + 1);
  if (v47 <= (float)(*(float*)&v90_.v97 + *(float*)&v90_.v93)) {
    v52 = v47;
  }
  else {
    v52 = *(float*)&v90_.v97 + *(float*)&v90_.v93;
  }
  if (v48 >= v49) {
    v49 = v48;
  }
  if (v50 <= v51) {
    v53 = v50;
  }
  else {
    v53 = *(float*)&v90_.v97 + *((float*)&v90_.v93 + 1);
  }
  if (v52 < *(float*)&v90_.v91 || v49 > *(float*)&v90_.v92 ||
      v53 < *((float*)&v90_.v91 + 1)) {
    v57 = *((float*)&v90_.v95 + 1);
    v56 = *((float*)&v90_.v92 + 1);
  LABEL_76:
    v66 = *(float*)&v90_.v95;
    v67 = vabds_f32(*((float*)&v90_.v93 + 1), v57);
    v68 = 0x0.0p+0f;
    v69 = 0x1.0000000000000p+0f;
    v70 = (float)(*((float*)&v90_.v93 + 1) + v57) * 0x1.0000000000000p-1f;
    if ((float)(*(float*)&v90_.v92 - *(float*)&v90_.v91) <=
        (float)(v56 - *((float*)&v90_.v91 + 1))) {
      v71 = 0x0.0p+0f;
    }
    else {
      v71 = 0x1.0000000000000p+0f;
    }
    if ((float)(*(float*)&v90_.v92 - *(float*)&v90_.v91) <=
        (float)(v56 - *((float*)&v90_.v91 + 1))) {
      v72 = 0x1.0000000000000p+0f;
    }
    else {
      v72 = 0x0.0p+0f;
    }
    v73 = v67 + vabds_f32(*(float*)&v90_.v93, *(float*)&v90_.v95);
    v74 = v72 * v73;
    v75 = (float)(*(float*)&v90_.v93 + *(float*)&v90_.v95) *
          0x1.0000000000000p-1f;
    v76 = (float)(v71 * v73) * 0x1.0000000000000p-1f;
    v77 = v74 * 0x1.0000000000000p-1f;
    v78 = v75 - v76;
    v79 = v70 - v77;
    v80 = v75 + v76;
    v90_.v93 =
        __PAIR64__(COERCE_UNSIGNED_INT((float)(v70 - v77)), LODWORD(v78));
    *(float*)&v90_.v95 = v80;
    *((float*)&v90_.v95 + 1) = v70 + v77;
    if ((float)((float)((float)(PSEUDO_UNFUSED(
                            (float)((float)(v70 - v77) - v46) *
                            (float)((float)(v70 - v77) - v46))) +
                        (float)((float)(v78 - v45) * (float)(v78 - v45))) +
                (float)((float)(PSEUDO_UNFUSED(
                            (float)(*((float*)&v90_.v95 + 1) - v57) *
                            (float)(*((float*)&v90_.v95 + 1) - v57))) +
                        (float)((float)(v80 - v66) * (float)(v80 - v66)))) <=
        (float)((float)((float)(PSEUDO_UNFUSED(
                            (float)(*((float*)&v90_.v95 + 1) - v46) *
                            (float)(*((float*)&v90_.v95 + 1) - v46))) +
                        (float)((float)(v80 - v45) * (float)(v80 - v45))) +
                (float)((float)(PSEUDO_UNFUSED((float)(v79 - v57) *
                                               (float)(v79 - v57))) +
                        (float)((float)(v78 - v66) * (float)(v78 - v66))))) {
      v81 = v70 - v77;
      v79 = v70 + v77;
      v82 = v78;
      v78 = v80;
    }
    else {
      v81 = v70 + v77;
      v82 = v80;
      *(float*)&v90_.v93 = v80;
      *((float*)&v90_.v93 + 1) = v70 + v77;
      *(float*)&v90_.v95 = v78;
      *((float*)&v90_.v95 + 1) = v70 - v77;
    }
    v83 = v79 - v81;
    v84 = v78 - v82;
    v85 = (float)(PSEUDO_UNFUSED(v83 * v83)) + (float)(v84 * v84);
    if (v85 >= 0x1.0000000000000p-23f) {
      v86 = 0x1.0000000000000p+0f / sqrtf(v85);
      v68 = v84 * v86;
      v69 = v83 * v86;
    }
    v90_.v94 = __PAIR64__(LODWORD(v69), LODWORD(v68));
    *(float*)&v90_.v96 = -v68;
    *((float*)&v90_.v96 + 1) = -v69;
    game_111e3c0((__int64)v90_.v90),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    v45 = *(float*)&v90_.v97 + *(float*)&v90_.v91;
    v87 = *(float*)&v90_.v91 + *((float*)&v90_.v97 + 1);
    if (*(float*)&v90_.v93 >=
        (float)(*(float*)&v90_.v97 + *(float*)&v90_.v91)) {
      v45 = *(float*)&v90_.v93;
    }
    if (v45 > (float)(*(float*)&v90_.v92 - *(float*)&v90_.v97)) {
      v45 = *(float*)&v90_.v92 - *(float*)&v90_.v97;
    }
    v88 = *(float*)&v90_.v97 + *((float*)&v90_.v91 + 1);
    v46 = *((float*)&v90_.v92 + 1) - *(float*)&v90_.v97;
    if (*((float*)&v90_.v93 + 1) >=
        (float)(*(float*)&v90_.v97 + *((float*)&v90_.v91 + 1))) {
      v88 = *((float*)&v90_.v93 + 1);
    }
    if (v88 <= v46) {
      v46 = v88;
    }
    if (*(float*)&v90_.v95 >= v87) {
      v87 = *(float*)&v90_.v95;
    }
    if (v87 <= (float)(*(float*)&v90_.v92 - *((float*)&v90_.v97 + 1))) {
      v58 = v87;
    }
    else {
      v58 = *(float*)&v90_.v92 - *((float*)&v90_.v97 + 1);
    }
    if (*((float*)&v90_.v95 + 1) >=
        (float)(*((float*)&v90_.v91 + 1) + *((float*)&v90_.v97 + 1))) {
      v57 = *((float*)&v90_.v95 + 1);
    }
    else {
      v57 = *((float*)&v90_.v91 + 1) + *((float*)&v90_.v97 + 1);
    }
    if (v57 > (float)(*((float*)&v90_.v92 + 1) - *((float*)&v90_.v97 + 1))) {
      v57 = *((float*)&v90_.v92 + 1) - *((float*)&v90_.v97 + 1);
    }
    goto LABEL_105;
  }
  v54 = fmaxf(*((float*)&v90_.v93 + 1) - *(float*)&v90_.v97,
              -0x1.f400000000000p+8f);
  if (v54 >= v51) {
    v55 = v54;
  }
  else {
    v55 = *(float*)&v90_.v97 + *((float*)&v90_.v93 + 1);
  }
  v56 = *((float*)&v90_.v92 + 1);
  v57 = *((float*)&v90_.v95 + 1);
  if (v55 > *((float*)&v90_.v92 + 1)) {
    goto LABEL_76;
  }
  v58 = *(float*)&v90_.v95;
  v59 = fminf(*(float*)&v90_.v95 - *((float*)&v90_.v97 + 1),
              0x1.f400000000000p+8f);
  v60 = fmaxf(*(float*)&v90_.v95 - *((float*)&v90_.v97 + 1),
              -0x1.f400000000000p+8f);
  v61 = fminf(*((float*)&v90_.v95 + 1) - *((float*)&v90_.v97 + 1),
              0x1.f400000000000p+8f);
  v62 = *((float*)&v90_.v97 + 1) + *(float*)&v90_.v95;
  v63 = *((float*)&v90_.v95 + 1) + *((float*)&v90_.v97 + 1);
  if (v59 > (float)(*((float*)&v90_.v97 + 1) + *(float*)&v90_.v95)) {
    v59 = *((float*)&v90_.v97 + 1) + *(float*)&v90_.v95;
  }
  if (v60 >= v62) {
    v62 = v60;
  }
  v64 = v61 <= v63 ? v61 : *((float*)&v90_.v95 + 1) + *((float*)&v90_.v97 + 1);
  if (v59 < *(float*)&v90_.v91 || v62 > *(float*)&v90_.v92 ||
      v64 < *((float*)&v90_.v91 + 1)) {
    goto LABEL_76;
  }
  v65 = fmaxf(*((float*)&v90_.v95 + 1) - *((float*)&v90_.v97 + 1),
              -0x1.f400000000000p+8f);
  if (v65 < v63) {
    v65 = *((float*)&v90_.v95 + 1) + *((float*)&v90_.v97 + 1);
  }
  if (v65 > *((float*)&v90_.v92 + 1)) {
    goto LABEL_76;
  }
LABEL_105:
  *a3 = v45;
  a3[1] = v46;
  a3[2] = v58;
  a3[3] = v57;
}

float game_1120420(__int64 a1, char a2, float a3, double a4, double a5,
                   float a6)
{

#pragma clang fp contract(off)
  float v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned int v12;
  float v13;
  unsigned __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;

  v6 = 0x0.0p+0f;
  v7 = **(__int64***)(a1 + 40);
  v8 = *(__int64**)(*(_QWORD*)(a1 + 40) + 8LL);
  v9 = (char*)v8 - (char*)v7;
  if ((int)((unsigned __int64)((char*)v8 - (char*)v7) >> 3) >= 1) {
    if (v7 != v8) {
      v10 = **(__int64***)(a1 + 40);
      while (1) {
        v11 = *v10;
        if (a2 == *(_BYTE*)(*v10 + 32)) {
          v12 = *(unsigned __int8*)(v11 + 33);
          v13 = (float)v12;
          if (a3 <= (float)v12) {
            break;
          }
        }
        if (++v10 == v8) {
          goto LABEL_11;
        }
      }
      if (*(_WORD*)(v11 + 16) != 0) {
        v14 = (unsigned int)*(unsigned __int16*)(v11 + 16) - 1;
        if (v14 >= v9 >> 3) {
          GameRoutine_11216d0();
        }
        v15 = v7[v14];
        if (v15 != 0) {
          {
            __typeof__(v13) z_ = (__typeof__(v13)){0};
            LOBYTE(z_) = *(_BYTE*)(v15 + 34);
            v13 = z_;
          }
          {
            __typeof__(a6) z_ = (__typeof__(a6)){0};
            LOBYTE(z_) = *(_BYTE*)(v11 + 34);
            a6 = z_;
          }
          v16 = (float)((float)((float)(a3 -
                                        (float)*(unsigned __int8*)(v15 + 33)) *
                                (float)((float)LODWORD(a6) -
                                        (float)LODWORD(v13))) /
                        (float)(int)(v12 - *(unsigned __int8*)(v15 + 33))) +
                (float)LODWORD(v13);
          return v16 / 0x1.9000000000000p+6f;
        }
      }
      {
        __typeof__(a3) z_ = (__typeof__(a3)){0};
        LOBYTE(z_) = *(_BYTE*)(v11 + 34);
        a3 = z_;
      }
    LABEL_14:
      v16 = (float)LODWORD(a3);
      return v16 / 0x1.9000000000000p+6f;
    }
  LABEL_11:
    v17 = *(v8 - 1);
    if (v17 != 0) {
      {
        __typeof__(a3) z_ = (__typeof__(a3)){0};
        LOBYTE(z_) = *(_BYTE*)(v17 + 34);
        a3 = z_;
      }
      goto LABEL_14;
    }
  }
  return v6;
}

char* game_1175070()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  GameData_2236b40 = 0xFF00000000LL;
  GameData_2236b48 = 1;
  GameData_2236b68 = 1;
  GameData_2236b8c = 1;
  GameData_2236b69 = 0;
  *(int*)((char*)&GameData_2236b69 + 3) = 0;
  GameData_2236b60 = 0x100000003LL;
  GameData_2236b50 = 0x20000FFFFLL;
  GameData_2236b58 = 0xFF0000000000LL;
  GameData_2236ba8 = 0x300000001LL;
  GameData_2236b70 = 0xFF0100000001LL;
  GameData_2236b78 = 0x100000003LL;
  GameData_2236b90 = 0x200000003LL;
  GameData_2236b98 = 257;
  GameData_2236b84 = 0x200000002LL;
  GameData_2236b80 = 65280;
  GameData_2236bb0 = 255;
  GameData_2236b9c = 0x200000000LL;
  GameData_2236ba4 = 256;
  GameData_2236bc0 = 0x300000001LL;
  GameData_2236bc8 = 256;
  GameData_2236bb4 = 0x300000002LL;
  GameData_2236b30 = (__int64)&GameData_2236b40;
  GameData_2236b38 = 12;
  GameData_2236bbc = 511;
  v0 = *(_QWORD*)GameData_212bf40[0];
  GameData_2236bd0 = (__int64)"map::dispos::flag";
  GameData_2236bd8 = (__int64)"const as_s32 Focus";
  GameData_2236be0 = (__int64)&GameData_1bb457c;
  GameData_2236be8 = v0;
  GameData_2236bf0 = (__int64)"map::dispos::flag";
  GameData_2236bf8 = (__int64)"const as_s32 Warp";
  GameData_2236c00 = (__int64)&GameData_1bb4580;
  GameData_2236c08 = (__int64)&GameData_2236bd0;
  GameData_2236c10 = (__int64)"map::dispos::flag";
  GameData_2236c18 = (__int64)"const as_s32 Summon";
  GameData_2236c20 = (__int64)&GameData_1bb4584;
  GameData_2236c28 = (__int64)&GameData_2236bf0;
  GameData_2236c30 = (__int64)"map::dispos::flag";
  GameData_2236c38 = (__int64)"const as_s32 Mesaia";
  GameData_2236c40 = (__int64)&GameData_1bb4588;
  GameData_2236c48 = (__int64)&GameData_2236c10;
  GameData_2236c50 = (__int64)"map::dispos::flag";
  GameData_2236c58 = (__int64)"const as_s32 Conron";
  GameData_2236c60 = (__int64)&GameData_1bb458c;
  GameData_2236c68 = (__int64)&GameData_2236c30;
  GameData_2236c70 = (__int64)"map::dispos::flag";
  GameData_2236c78 = (__int64)"const as_s32 Song";
  GameData_2236c80 = (__int64)&GameData_1bb4590;
  GameData_2236c88 = (__int64)&GameData_2236c50;
  GameData_2236c90 = (__int64)"map::dispos::flag";
  GameData_2236c98 = (__int64)"const as_s32 Phantom";
  GameData_2236ca0 = (__int64)&GameData_1bb4594;
  GameData_2236ca8 = (__int64)&GameData_2236c70;
  GameData_2236cb0 = (__int64)"map::dispos::flag";
  GameData_2236cb8 = (__int64)"const as_s32 Covered";
  GameData_2236cc0 = (__int64)&GameData_1bb4598;
  GameData_2236cc8 = (__int64)&GameData_2236c90;
  GameData_2236cd0 = (__int64)"map::dir";
  GameData_2236cd8 = (__int64)"const as_s32 Up";
  GameData_2236ce0 = (__int64)&GameData_1bb459c;
  GameData_2236ce8 = (__int64)&GameData_2236cb0;
  GameData_2236cf0 = (__int64)"map::dir";
  GameData_2236cf8 = (__int64)"const as_s32 Left";
  GameData_2236d00 = (__int64)&GameData_1bb45a0;
  GameData_2236d08 = (__int64)&GameData_2236cd0;
  GameData_2236d10 = (__int64)"map::dir";
  GameData_2236d18 = (__int64)"const as_s32 Down";
  GameData_2236d20 = (__int64)&GameData_1bb45a4;
  GameData_2236d28 = (__int64)&GameData_2236cf0;
  GameData_2236d30 = (__int64)"map::dir";
  GameData_2236d38 = (__int64)"const as_s32 Right";
  GameData_2236d40 = (__int64)&GameData_1bb45a8;
  GameData_2236d48 = (__int64)&GameData_2236d10;
  GameData_2236d50 = (__int64)"map::dir";
  GameData_2236d58 = (__int64)"const as_s32 UpLeft";
  GameData_2236d60 = (__int64)&GameData_1bb45ac;
  GameData_2236d68 = (__int64)&GameData_2236d30;
  GameData_2236d70 = (__int64)"map::dir";
  GameData_2236d78 = (__int64)"const as_s32 UpRight";
  GameData_2236d80 = (__int64)&GameData_1bb45b0;
  GameData_2236d88 = (__int64)&GameData_2236d50;
  GameData_2236d90 = (__int64)"map::dir";
  GameData_2236d98 = (__int64)"const as_s32 DownLeft";
  GameData_2236da0 = (__int64)&GameData_1bb45b4;
  GameData_2236da8 = (__int64)&GameData_2236d70;
  GameData_2236db0 = (__int64)"map::dir";
  GameData_2236db8 = (__int64)"const as_s32 DownRight";
  GameData_2236dc0 = (__int64)&GameData_1bb45b8;
  GameData_2236dc8 = (__int64)&GameData_2236d90;
  GameData_2236dd0 = (__int64)"move::type";
  GameData_2236dd8 = (__int64)"const as_s32 None";
  GameData_2236de0 = (__int64)&GameData_1bb45bc;
  GameData_2236de8 = (__int64)&GameData_2236db0;
  GameData_2236df0 = (__int64)"move::type";
  GameData_2236df8 = (__int64)"const as_s32 Foot";
  GameData_2236e00 = (__int64)&GameData_1bb45c0;
  GameData_2236e08 = (__int64)&GameData_2236dd0;
  GameData_2236e10 = (__int64)"move::type";
  GameData_2236e18 = (__int64)"const as_s32 FootLight";
  GameData_2236e20 = (__int64)&GameData_1bb45c4;
  GameData_2236e28 = (__int64)&GameData_2236df0;
  GameData_2236e30 = (__int64)"move::type";
  GameData_2236e38 = (__int64)"const as_s32 FootHeavy";
  GameData_2236e40 = (__int64)&GameData_1bb45c8;
  GameData_2236e48 = (__int64)&GameData_2236e10;
  GameData_2236e50 = (__int64)"move::type";
  GameData_2236e58 = (__int64)"const as_s32 FootMagic";
  GameData_2236e60 = (__int64)&GameData_1bb45cc;
  GameData_2236e68 = (__int64)&GameData_2236e30;
  GameData_2236e70 = (__int64)"move::type";
  GameData_2236e78 = (__int64)"const as_s32 Horse";
  GameData_2236e80 = (__int64)&GameData_1bb45d0;
  GameData_2236e88 = (__int64)&GameData_2236e50;
  GameData_2236e90 = (__int64)"move::type";
  GameData_2236e98 = (__int64)"const as_s32 HorseHeavy";
  GameData_2236ea0 = (__int64)&GameData_1bb45d4;
  GameData_2236ea8 = (__int64)&GameData_2236e70;
  GameData_2236eb0 = (__int64)"move::type";
  GameData_2236eb8 = (__int64)"const as_s32 Hop";
  GameData_2236ec0 = (__int64)&GameData_1bb45d8;
  GameData_2236ec8 = (__int64)&GameData_2236e90;
  GameData_2236ed0 = (__int64)"move::type";
  GameData_2236ed8 = (__int64)"const as_s32 Fly";
  GameData_2236ee0 = (__int64)&GameData_1bb45dc;
  GameData_2236ee8 = (__int64)&GameData_2236eb0;
  GameData_2236ef0 = (__int64)"move::type";
  GameData_2236ef8 = (__int64)"const as_s32 Tank";
  GameData_2236f00 = (__int64)&GameData_1bb45e0;
  GameData_2236f08 = (__int64)&GameData_2236ed0;
  GameData_2236f10 = (__int64)"move::type";
  GameData_2236f18 = (__int64)"const as_s32 FootLager";
  GameData_2236f20 = (__int64)&GameData_1bb45e4;
  GameData_2236f28 = (__int64)&GameData_2236ef0;
  GameData_2236f30 = (__int64)"move::type";
  GameData_2236f38 = (__int64)"const as_s32 HorseForest";
  GameData_2236f40 = (__int64)&GameData_1bb45e8;
  GameData_2236f48 = (__int64)&GameData_2236f10;
  GameData_2236f50 = (__int64)"move::type";
  GameData_2236f58 = (__int64)"const as_s32 FootForest";
  GameData_2236f60 = (__int64)&GameData_1bb45ec;
  GameData_2236f68 = (__int64)&GameData_2236f30;
  GameData_2236f70 = (__int64)"move::type";
  GameData_2236f78 = (__int64)"const as_s32 Desert";
  GameData_2236f80 = (__int64)&GameData_1bb45f0;
  GameData_2236f88 = (__int64)&GameData_2236f50;
  GameData_2236f90 = (__int64)"move::type";
  GameData_2236f98 = (__int64)"const as_s32 Water";
  GameData_2236fa0 = (__int64)&GameData_1bb45f4;
  GameData_2236fa8 = (__int64)&GameData_2236f70;
  GameData_2236fb0 = (__int64)"move::type";
  GameData_2236fb8 = (__int64)"const as_s32 FootHuge";
  GameData_2236fc0 = (__int64)&GameData_1bb45f8;
  GameData_2236fc8 = (__int64)&GameData_2236f90;
  GameData_2236fd0 = (__int64)"move::type";
  GameData_2236fd8 = (__int64)"const as_s32 WaterHuge";
  GameData_2236fe0 = (__int64)&GameData_1bb45fc;
  GameData_2236fe8 = (__int64)&GameData_2236fb0;
  GameData_2236ff0 = (__int64)"map::camera::roll";
  GameData_2236ff8 = (__int64)"const as_s32 Deg_0";
  GameData_2237000 = (__int64)&GameData_1bb4600;
  GameData_2237008 = (__int64)&GameData_2236fd0;
  GameData_2237010 = (__int64)"map::camera::roll";
  GameData_2237018 = (__int64)"const as_s32 Deg_30";
  GameData_2237020 = (__int64)&GameData_1bb4604;
  GameData_2237028 = (__int64)&GameData_2236ff0;
  GameData_2237030 = (__int64)"map::camera::roll";
  GameData_2237038 = (__int64)"const as_s32 Deg_60";
  GameData_2237040 = (__int64)&GameData_1bb4608;
  GameData_2237048 = (__int64)&GameData_2237010;
  GameData_2237050 = (__int64)"map::camera::roll";
  GameData_2237058 = (__int64)"const as_s32 Deg_90";
  GameData_2237060 = (__int64)&GameData_1bb460c;
  GameData_2237068 = (__int64)&GameData_2237030;
  GameData_2237070 = (__int64)"map::camera::roll";
  GameData_2237078 = (__int64)"const as_s32 Deg_120";
  GameData_2237080 = (__int64)&GameData_1bb4610;
  GameData_2237088 = (__int64)&GameData_2237050;
  GameData_2237090 = (__int64)"map::camera::roll";
  GameData_2237098 = (__int64)"const as_s32 Deg_150";
  GameData_22370a0 = (__int64)&GameData_1bb4614;
  GameData_22370a8 = (__int64)&GameData_2237070;
  GameData_22370b0 = (__int64)"map::camera::roll";
  GameData_22370b8 = (__int64)"const as_s32 Deg_180";
  GameData_22370c0 = (__int64)&GameData_1bb4618;
  GameData_22370c8 = (__int64)&GameData_2237090;
  GameData_22370d0 = (__int64)"map::camera::roll";
  GameData_22370d8 = (__int64)"const as_s32 Deg_210";
  GameData_22370e0 = (__int64)&GameData_1bb461c;
  GameData_22370e8 = (__int64)&GameData_22370b0;
  GameData_22370f0 = (__int64)"map::camera::roll";
  GameData_22370f8 = (__int64)"const as_s32 Deg_240";
  GameData_2237100 = (__int64)&GameData_1bb4620;
  GameData_2237108 = (__int64)&GameData_22370d0;
  GameData_2237110 = (__int64)"map::camera::roll";
  GameData_2237118 = (__int64)"const as_s32 Deg_270";
  GameData_2237120 = (__int64)&GameData_1bb4624;
  GameData_2237128 = (__int64)&GameData_22370f0;
  GameData_2237130 = (__int64)"map::camera::roll";
  GameData_2237138 = (__int64)"const as_s32 Deg_300";
  GameData_2237140 = (__int64)&GameData_1bb4628;
  GameData_2237148 = (__int64)&GameData_2237110;
  GameData_2237150 = (__int64)"map::camera::roll";
  GameData_2237158 = (__int64)"const as_s32 Deg_330";
  GameData_2237160 = (__int64)&GameData_1bb462c;
  GameData_2237168 = (__int64)&GameData_2237130;
  GameData_2237170 = (__int64)"map::camera::roll";
  GameData_2237178 = (__int64)"const as_s32 Num";
  *(_QWORD*)GameData_212bf40[0] = &GameData_2237170;
  GameData_2237180 = (__int64)&GameData_1bb4630;
  GameData_2237188 = (__int64)&GameData_2237150;
  v1 = *(_QWORD*)GameData_212bf48[0];
  *(_QWORD*)GameData_212bf48[0] = &GameData_2237190;
  GameData_2237190 = (__int64)"map";
  GameData_2237198 = v1;
  GameData_22371a0 = (__int64)"map";
  GameData_22371a8 = (__int64)game_script_map_GetPlayAreaMinX;
  GameData_22371c0 = 0;
  GameData_22371b0 = 0;
  GameData_22371b8 = 0;
  GameData_2237900 = 0;
  GameData_22378f0 = 0;
  GameData_22378f8 = 0;
  GameData_2237d00 = 0;
  GameData_2237cf0 = 0;
  GameData_2237cf8 = 0;
  GameData_22371e0 = (__int64)"map";
  GameData_22371e8 = (__int64)game_script_map_GetPlayAreaMinZ;
  GameData_2237200 = 0;
  GameData_22371f0 = 0;
  GameData_22371f8 = 0;
  GameData_22378c0 = 0;
  GameData_22378b0 = 0;
  GameData_22378b8 = 0;
  GameData_2237a00 = 0;
  GameData_22379f0 = 0;
  GameData_22379f8 = 0;
  GameData_2237980 = 0;
  GameData_2237970 = 0;
  GameData_2237978 = 0;
  GameData_2237a40 = 0;
  GameData_2237a30 = 0;
  GameData_2237a38 = 0;
  GameData_2237b00 = 0;
  GameData_2237af0 = 0;
  GameData_2237af8 = 0;
  GameData_2237cc0 = 0;
  GameData_2237cb0 = 0;
  GameData_2237cb8 = 0;
  GameData_2237c40 = 0;
  GameData_2237c30 = 0;
  GameData_2237c38 = 0;
  GameData_2237b40 = 0;
  GameData_2237b30 = 0;
  GameData_2237b38 = 0;
  GameData_2237ac0 = 0;
  GameData_2237ab0 = 0;
  GameData_2237ab8 = 0;
  GameData_2237b80 = 0;
  GameData_2237b70 = 0;
  GameData_2237b78 = 0;
  GameData_2237c00 = 0;
  GameData_2237bf0 = 0;
  GameData_2237bf8 = 0;
  GameData_2237c80 = 0;
  GameData_2237c70 = 0;
  GameData_2237c78 = 0;
  GameData_2237bc0 = 0;
  GameData_2237bb0 = 0;
  GameData_2237bb8 = 0;
  GameData_2237dc0 = 0;
  GameData_2237db0 = 0;
  GameData_2237db8 = 0;
  GameData_2237d80 = 0;
  GameData_2237d70 = 0;
  GameData_2237d78 = 0;
  GameData_22379c0 = 0;
  GameData_22379b0 = 0;
  GameData_22379b8 = 0;
  GameData_2237940 = 0;
  GameData_2237930 = 0;
  GameData_2237938 = 0;
  GameData_22371c8 = 2;
  GameData_2237908 = 2;
  GameData_2237d08 = 2;
  GameData_2237208 = 2;
  GameData_22378c8 = 2;
  GameData_2237a08 = 2;
  GameData_2237988 = 2;
  GameData_2237a48 = 2;
  GameData_2237b08 = 2;
  GameData_2237cc8 = 2;
  GameData_2237c48 = 2;
  GameData_2237b48 = 2;
  GameData_2237ac8 = 2;
  GameData_2237b88 = 2;
  GameData_2237c10 = (__int64)"string GetOverlapTID(int x, int z)";
  GameData_2237c18 = (__int64)&GameData_2237ba0;
  GameData_2237c08 = 2;
  GameData_2237c88 = 2;
  GameData_2237bc8 = 2;
  GameData_2237dc8 = 2;
  GameData_2237d88 = 2;
  GameData_22379c8 = 2;
  GameData_2237948 = 2;
  v2 = *(_QWORD*)GameData_212bf18[0];
  GameData_2237dd0 = (__int64)"void SetSingle(int x, int z, const string& tid)";
  GameData_2237dd8 = (__int64)&GameData_2237d60;
  GameData_2237d40 = 0;
  GameData_2237d30 = 0;
  GameData_2237d38 = 0;
  GameData_2237d48 = 2;
  GameData_22371d0 = (__int64)"int GetPlayAreaMinX()";
  GameData_22371d8 = v2;
  GameData_2237210 = (__int64)"int GetPlayAreaMinZ()";
  GameData_2237218 = (__int64)&GameData_22371a0;
  GameData_2237b90 = (__int64)"bool IsInTargetPos(int x, int z)";
  GameData_2237b98 = (__int64)&GameData_2237b20;
  GameData_2237220 = (__int64)"map";
  GameData_2237228 = (__int64)game_script_map_GetPlayAreaMaxX;
  GameData_2237c90 = (__int64)"string GetTrickTID(int x, int z)";
  GameData_2237c98 = (__int64)&GameData_2237c20;
  GameData_2237240 = 0;
  GameData_2237230 = 0;
  GameData_2237238 = 0;
  GameData_2237248 = 2;
  GameData_2237910 = (__int64)"void SetPos(int x, int z)";
  GameData_2237918 = (__int64)&GameData_22378a0;
  GameData_2237d10 =
      (__int64)"bool GetTrickPosByTID(const string& tid, int& x, int& z)";
  GameData_2237d18 = (__int64)&GameData_2237ca0;
  GameData_2237990 = (__int64)"int GetUnitIndex()";
  GameData_2237998 = (__int64)&GameData_2237920;
  GameData_2237e18 = (__int64)&GameData_2237da0;
  GameData_2237de8 = (__int64)game_script_map_terrain_SetBegin;
  GameData_2237df0 = 0;
  GameData_2237e00 = 0;
  GameData_2237df8 = 0;
  GameData_2237e08 = 2;
  GameData_2237e10 = (__int64)"void SetBegin()";
  GameData_22379d0 = (__int64)"string GetUnitPID()";
  GameData_22379d8 = (__int64)&GameData_2237960;
  GameData_2237a10 = (__int64)"int GetTargetUnitIndex()";
  GameData_2237a18 = (__int64)&GameData_22379a0;
  GameData_2237a20 = (__int64)"map::mind";
  GameData_2237a28 = (__int64)game_script_map_mind_GetTargetUnitPID;
  GameData_2237b10 = (__int64)"string GetUseItem()";
  GameData_2237b18 = (__int64)&GameData_2237aa0;
  GameData_2237da0 = (__int64)"map::terrain";
  GameData_2237da8 = (__int64)game_script_map_terrain_SetSingle;
  GameData_2237de0 = (__int64)"map::terrain";
  GameData_2237d60 = (__int64)"map::terrain";
  GameData_2237d68 = (__int64)map_terrain_IsCostEnable;
  GameData_2237d90 =
      (__int64)"bool IsCostEnable(const string& costId, int moveType)";
  GameData_2237d98 = (__int64)&GameData_2237d20;
  GameData_2237d20 = (__int64)"map::terrain";
  GameData_2237d28 = (__int64)map_terrain_GetCostId;
  GameData_2237d50 = (__int64)"string GetCostId(int x, int z)";
  GameData_2237d58 = (__int64)&GameData_2237ce0;
  GameData_2237cd0 =
      (__int64)"bool IsTrickExist(int x, int z, const string& tid)";
  GameData_2237cd8 = (__int64)&GameData_2237c60;
  GameData_2237ce0 = (__int64)"map::terrain";
  GameData_2237ce8 = (__int64)map_terrain_GetTrickPosByTID;
  GameData_2237ca0 = (__int64)"map::terrain";
  GameData_2237ca8 = (__int64)map_terrain_IsTrickExist;
  GameData_2237250 = (__int64)"int GetPlayAreaMaxX()";
  GameData_2237258 = (__int64)&GameData_22371e0;
  GameData_2237c50 = (__int64)"string GetCoveredTID(int x, int z)";
  GameData_2237c58 = (__int64)&GameData_2237be0;
  GameData_2237830 = 0;
  GameData_2237838 = 0;
  GameData_2237848 = 2;
  GameData_2237840 = 0;
  GameData_2237280 = 0;
  GameData_2237270 = 0;
  GameData_2237278 = 0;
  GameData_2237288 = 2;
  GameData_2237c60 = (__int64)"map::terrain";
  GameData_2237c68 = (__int64)game_script_map_terrain_GetTrickTID;
  GameData_2237c20 = (__int64)"map::terrain";
  GameData_2237c28 = (__int64)map_terrain_GetCoveredTID;
  GameData_2237260 = (__int64)"map";
  GameData_2237268 = (__int64)game_script_map_GetPlayAreaMaxZ;
  GameData_2237bd0 = (__int64)"string GetTID(int x, int z)";
  GameData_2237bd8 = (__int64)&GameData_2237b60;
  GameData_2237290 = (__int64)"int GetPlayAreaMaxZ()";
  GameData_2237298 = (__int64)&GameData_2237220;
  GameData_2237be0 = (__int64)"map::terrain";
  GameData_2237be8 = (__int64)game_script_map_terrain_GetOverlapTID;
  GameData_2237ba0 = (__int64)"map::terrain";
  GameData_2237ba8 = (__int64)game_script_map_terrain_GetTID;
  GameData_22372c0 = 0;
  GameData_22372b0 = 0;
  GameData_22372b8 = 0;
  GameData_22372c8 = 2;
  GameData_2237b50 = (__int64)"string GetActiveSkill()";
  GameData_2237b58 = (__int64)&GameData_2237ae0;
  GameData_22372a0 = (__int64)"map";
  GameData_22372a8 = (__int64)map_Dispos;
  GameData_2237b60 = (__int64)"map::mind";
  GameData_2237b68 = (__int64)game_script_map_terrain_IsInTargetPos;
  GameData_2237b20 = (__int64)"map::mind";
  GameData_2237b28 = (__int64)game_script_map_mind_GetActiveSkill;
  GameData_2237600 = 0;
  GameData_22375f0 = 0;
  GameData_22375f8 = 0;
  GameData_2237608 = 2;
  GameData_2237aa0 = (__int64)"map::mind";
  GameData_2237aa8 = (__int64)game_script_map_mind_GetTargetPosZ;
  GameData_22376c8 = 2;
  GameData_22376c0 = 0;
  GameData_22376b0 = 0;
  GameData_22376b8 = 0;
  GameData_2237ae0 = (__int64)"map::mind";
  GameData_2237ae8 = (__int64)game_script_map_mind_GetUseItem;
  GameData_2237ad0 = (__int64)"int GetTargetPosZ()";
  GameData_2237ad8 = (__int64)&GameData_2237a60;
  GameData_2237a80 = 0;
  GameData_2237a70 = 0;
  GameData_2237a78 = 0;
  GameData_2237a88 = 2;
  GameData_2237a60 = (__int64)"map::mind";
  GameData_2237a68 = (__int64)game_script_map_mind_GetTargetPosX;
  GameData_2237648 = 2;
  GameData_2237640 = 0;
  GameData_2237630 = 0;
  GameData_2237638 = 0;
  GameData_2237a90 = (__int64)"int GetTargetPosX()";
  GameData_2237a98 = (__int64)&GameData_2237a20;
  GameData_2237a50 = (__int64)"string GetTargetUnitPID()";
  GameData_2237a58 = (__int64)&GameData_22379e0;
  GameData_22379e0 = (__int64)"map::mind";
  GameData_22379e8 = (__int64)game_script_map_mind_GetTargetUnitIndex;
  GameData_2237780 = 0;
  GameData_2237770 = 0;
  GameData_2237778 = 0;
  GameData_2237788 = 2;
  GameData_22379a0 = (__int64)"map::mind";
  GameData_22379a8 = (__int64)game_script_map_mind_GetUnitPID;
  GameData_22377c8 = 2;
  GameData_22377c0 = 0;
  GameData_22377b0 = 0;
  GameData_22377b8 = 0;
  GameData_2237950 = (__int64)"void SetPosByPID(const string& pid)";
  GameData_2237958 = (__int64)&GameData_22378e0;
  GameData_2237960 = (__int64)"map::mind";
  GameData_2237968 = (__int64)game_script_map_mind_GetUnitIndex;
  GameData_2237920 = (__int64)"map::cursor";
  GameData_2237928 = (__int64)game_script_map_cursor_SetPosByPID;
  GameData_22378e0 = (__int64)"map::cursor";
  GameData_22378e8 = (__int64)game_script_map_cursor_SetPos;
  GameData_22378a0 = (__int64)"map::cursor";
  GameData_22378a8 = (__int64)game_script_map_cursor_GetZ;
  GameData_2237880 = 0;
  GameData_2237870 = 0;
  GameData_2237878 = 0;
  GameData_2237888 = 2;
  GameData_22378d0 = (__int64)"int GetZ()";
  GameData_22378d8 = (__int64)&GameData_2237860;
  GameData_2237890 = (__int64)"int GetX()";
  GameData_2237898 = (__int64)&GameData_2237820;
  GameData_2237808 = 2;
  GameData_2237800 = 0;
  GameData_22377f0 = 0;
  GameData_22377f8 = 0;
  GameData_2237850 = (__int64)"void Out()";
  GameData_2237858 = (__int64)&GameData_22377e0;
  GameData_2237860 = (__int64)"map::cursor";
  GameData_2237868 = (__int64)game_script_map_cursor_GetX;
  GameData_2237810 = (__int64)"void In()";
  GameData_2237818 = (__int64)&GameData_22377a0;
  GameData_2237760 = (__int64)"map::camera";
  GameData_2237768 = (__int64)game_script_map_zoom_StopShake;
  GameData_2237820 = (__int64)"map::zoom";
  GameData_2237828 = (__int64)map_zoom_Out;
  GameData_22377d0 = (__int64)"bool IsActive()";
  GameData_22377d8 = (__int64)&GameData_2237760;
  GameData_22377a0 = (__int64)"map::zoom";
  GameData_22377a8 = (__int64)game_script_map_zoom_IsActive;
  GameData_22377e0 = (__int64)"map::zoom";
  GameData_22377e8 = (__int64)map_zoom_In;
  GameData_2237790 = (__int64)"void StopShake()";
  GameData_2237798 = (__int64)&GameData_2237720;
  GameData_2237740 = 0;
  GameData_2237730 = 0;
  GameData_2237738 = 0;
  GameData_2237748 = 2;
  GameData_2237750 = (__int64)"void StartShake(int level)";
  GameData_2237758 = (__int64)&GameData_22376e0;
  GameData_22376f0 = 0;
  GameData_22376f8 = 0;
  GameData_2237708 = 2;
  GameData_2237700 = 0;
  GameData_2237710 = (__int64)"void SetTilt(float tilt)";
  GameData_2237718 = (__int64)&GameData_22376a0;
  GameData_2237720 = (__int64)"map::camera";
  GameData_2237728 = (__int64)map_camera_StartShake;
  GameData_22376d0 = (__int64)"float GetTilt()";
  GameData_22376d8 = (__int64)&GameData_2237660;
  GameData_2237680 = 0;
  GameData_2237670 = 0;
  GameData_2237678 = 0;
  GameData_2237688 = 2;
  GameData_22376e0 = (__int64)"map::camera";
  GameData_22376e8 = (__int64)game_script_map_camera_SetTilt;
  GameData_2237690 = (__int64)"void SetRoll(int rollIndex)";
  GameData_2237698 = (__int64)&GameData_2237620;
  GameData_22376a0 = (__int64)"map::camera";
  GameData_22376a8 = (__int64)map_camera_GetTilt;
  GameData_2237650 = (__int64)"int GetRoll()";
  GameData_2237658 = (__int64)&GameData_22375e0;
  GameData_2237660 = (__int64)"map::camera";
  GameData_2237668 = (__int64)map_camera_SetRoll;
  GameData_22372d0 = (__int64)"void Dispos(const string& disposName, uint "
                              "disposFlag, const string& warpEfffectName)";
  GameData_22372d8 = (__int64)&GameData_2237260;
  GameData_22372e0 = (__int64)"map";
  GameData_22372e8 = (__int64)map_DisposSingle;
  GameData_2237300 = 0;
  GameData_22372f0 = 0;
  GameData_22372f8 = 0;
  GameData_2237308 = 2;
  GameData_2237310 =
      (__int64)"void DisposSingle(const string& disposName, int x, int z, uint "
               "disposFlag, const string& warpEfffectName)";
  GameData_2237318 = (__int64)&GameData_22372a0;
  GameData_2237320 = (__int64)"map";
  GameData_2237328 = (__int64)map_DisposGetDataNum;
  GameData_2237350 = (__int64)"int DisposGetDataNum(const string& disposName)";
  GameData_2237358 = (__int64)&GameData_22372e0;
  GameData_2237340 = 0;
  GameData_2237330 = 0;
  GameData_2237338 = 0;
  GameData_2237348 = 2;
  GameData_2237360 = (__int64)"map";
  GameData_2237368 = (__int64)map_DisposIsEnable;
  GameData_2237380 = 0;
  GameData_2237370 = 0;
  GameData_2237378 = 0;
  GameData_2237388 = 2;
  GameData_2237390 =
      (__int64)"bool DisposIsEnable(const string& disposName, int disposIndex)";
  GameData_2237398 = (__int64)&GameData_2237320;
  GameData_22373a0 = (__int64)"map";
  GameData_22373a8 = (__int64)map_DisposGetPosX;
  GameData_22373d0 =
      (__int64)"int DisposGetPosX(const string& disposName, int disposIndex)";
  GameData_22373d8 = (__int64)&GameData_2237360;
  GameData_22373c0 = 0;
  GameData_22373b0 = 0;
  GameData_22373b8 = 0;
  GameData_22373c8 = 2;
  GameData_2237410 =
      (__int64)"int DisposGetPosZ(const string& disposName, int disposIndex)";
  GameData_2237418 = (__int64)&GameData_22373a0;
  GameData_22373e0 = (__int64)"map";
  GameData_22373e8 = (__int64)map_DisposGetPosZ;
  GameData_2237400 = 0;
  GameData_22373f0 = 0;
  GameData_22373f8 = 0;
  GameData_2237408 = 2;
  GameData_2237440 = 0;
  GameData_2237430 = 0;
  GameData_2237438 = 0;
  GameData_2237448 = 2;
  GameData_2237420 = (__int64)"map";
  GameData_2237428 = (__int64)game_script_map_CanEnter;
  GameData_2237450 = (__int64)"bool CanEnter(int x, int z, int moveType)";
  GameData_2237458 = (__int64)&GameData_22373e0;
  GameData_2237460 = (__int64)"map";
  GameData_2237468 = (__int64)map_SetRainEnable;
  GameData_2237480 = 0;
  GameData_2237470 = 0;
  GameData_2237478 = 0;
  GameData_2237488 = 2;
  GameData_2237490 = (__int64)"void SetRainEnable(bool isEnable)";
  GameData_2237498 = (__int64)&GameData_2237420;
  GameData_22374a0 = (__int64)"map";
  GameData_22374a8 = (__int64)game_script_map_RecoverUnitForContinue;
  GameData_22374d0 = (__int64)"void RecoverUnitForContinue()";
  GameData_22374d8 = (__int64)&GameData_2237460;
  GameData_22374c0 = 0;
  GameData_22374b0 = 0;
  GameData_22374b8 = 0;
  GameData_22374c8 = 2;
  GameData_22374e0 = (__int64)"map";
  GameData_22374e8 = (__int64)game_script_map_UpdateImage;
  GameData_2237500 = 0;
  GameData_22374f0 = 0;
  GameData_22374f8 = 0;
  GameData_2237508 = 2;
  GameData_2237510 = (__int64)"void UpdateImage()";
  GameData_2237518 = (__int64)&GameData_22374a0;
  GameData_2237520 = (__int64)"map";
  GameData_2237528 = (__int64)game_script_map_info_UpdateHeight;
  GameData_2237540 = 0;
  GameData_2237530 = 0;
  GameData_2237538 = 0;
  GameData_2237548 = 2;
  GameData_2237580 = 0;
  GameData_2237570 = 0;
  GameData_2237578 = 0;
  GameData_2237588 = 2;
  GameData_2237550 = (__int64)"void UpdateHeight(int x, int z)";
  GameData_2237558 = (__int64)&GameData_22374e0;
  GameData_2237560 = (__int64)"map::info";
  GameData_2237568 = (__int64)game_script_map_info_PushNoDisp;
  GameData_2237590 = (__int64)"void PushNoDisp()";
  GameData_2237598 = (__int64)&GameData_2237520;
  GameData_22375a0 = (__int64)"map::info";
  GameData_22375a8 = (__int64)game_script_map_camera_Pop;
  GameData_22375c0 = 0;
  GameData_22375b0 = 0;
  GameData_22375b8 = 0;
  GameData_22375c8 = 2;
  GameData_22375d0 = (__int64)"void Pop()";
  GameData_22375d8 = (__int64)&GameData_2237560;
  GameData_22375e0 = (__int64)"map::camera";
  GameData_22375e8 = (__int64)map_camera_MoveWait;
  GameData_2237610 = (__int64)"void MoveWait()";
  GameData_2237618 = (__int64)&GameData_22375a0;
  GameData_2237620 = (__int64)"map::camera";
  GameData_2237628 = (__int64)map_camera_GetRoll;
  GameData_2237e20 = (__int64)"map::terrain";
  GameData_2237e28 = (__int64)game_script_map_terrain_Set;
  GameData_2237e40 = 0;
  GameData_2237e30 = 0;
  GameData_2237e38 = 0;
  GameData_2237e48 = 2;
  GameData_2237e50 = (__int64)"void Set(int x, int z, const string& tid)";
  GameData_2237e58 = (__int64)&GameData_2237de0;
  GameData_2237e60 = (__int64)"map::terrain";
  GameData_2237e68 = (__int64)map_terrain_SetEnd;
  GameData_2237e80 = 0;
  GameData_2237e70 = 0;
  GameData_2237e78 = 0;
  GameData_2237e88 = 2;
  GameData_2237e90 = (__int64)"void SetEnd()";
  GameData_2237e98 = (__int64)&GameData_2237e20;
  GameData_2237ed8 = (__int64)&GameData_2237e60;
  GameData_2237ec0 = 0;
  GameData_2237eb0 = 0;
  GameData_2237eb8 = 0;
  GameData_2237ec8 = 2;
  GameData_2237ea0 = (__int64)"map::terrain";
  GameData_2237ea8 = (__int64)map_terrain_SetTrickRange;
  GameData_2237ed0 = (__int64)"void SetTrickRange(int x, int z, int w, int h, "
                              "const string& tid)";
  GameData_2237ee0 = (__int64)"map::terrain";
  GameData_2237ee8 = (__int64)map_terrain_IsSetTrickItem;
  GameData_2237f00 = 0;
  GameData_2237ef0 = 0;
  GameData_2237ef8 = 0;
  GameData_2237f08 = 2;
  GameData_2237f10 = (__int64)"bool IsSetTrickItem(int x, int z)";
  GameData_2237f18 = (__int64)&GameData_2237ea0;
  GameData_2237f20 = (__int64)"map::terrain";
  GameData_2237f28 = (__int64)map_terrain_SetTrickItem;
  GameData_2237f40 = 0;
  GameData_2237f30 = 0;
  GameData_2237f38 = 0;
  GameData_2237f48 = 2;
  GameData_2237f60 = (__int64)"map::terrain";
  GameData_2237f68 = (__int64)map_terrain_DeleteTrick;
  GameData_2237f80 = 0;
  GameData_2237f70 = 0;
  GameData_2237f78 = 0;
  GameData_2237f88 = 2;
  GameData_2237f50 =
      (__int64)"void SetTrickItem(int x, int z, const string& iid)";
  GameData_2237f58 = (__int64)&GameData_2237ee0;
  GameData_2237f90 =
      (__int64)"bool DeleteTrick(int x, int z, const string& tid)";
  GameData_2237f98 = (__int64)&GameData_2237f20;
  GameData_2237fc0 = 0;
  GameData_2237fb0 = 0;
  GameData_2237fb8 = 0;
  GameData_2237fc8 = 2;
  GameData_2237fa0 = (__int64)"map::terrain";
  GameData_2237fa8 = (__int64)map_terrain_BreakTrick;
  GameData_2237fd0 = (__int64)"void BreakTrick(int x, int z)";
  GameData_2237fd8 = (__int64)&GameData_2237f60;
  GameData_2237fe0 = (__int64)"map::terrain";
  GameData_2237fe8 = (__int64)map_terrain_RepairTrick;
  GameData_2238000 = 0;
  GameData_2237ff0 = 0;
  GameData_2237ff8 = 0;
  GameData_2238008 = 2;
  GameData_2238010 = (__int64)"void RepairTrick(int x, int z)";
  GameData_2238018 = (__int64)&GameData_2237fa0;
  GameData_2238020 = (__int64)"map::terrain";
  GameData_2238028 = (__int64)game_script_map_terrain_IsTrickEnable;
  GameData_2238050 = (__int64)"bool IsTrickEnable(int x, int z)";
  GameData_2238058 = (__int64)&GameData_2237fe0;
  GameData_2238040 = 0;
  GameData_2238030 = 0;
  GameData_2238038 = 0;
  GameData_2238048 = 2;
  GameData_2238060 = (__int64)"map::terrain";
  GameData_2238068 = (__int64)game_script_map_terrain_SetTrickEnable;
  GameData_2238080 = 0;
  GameData_2238070 = 0;
  GameData_2238078 = 0;
  GameData_2238088 = 2;
  GameData_2238090 =
      (__int64)"void SetTrickEnable(int x, int z, bool isEnable)";
  GameData_2238098 = (__int64)&GameData_2238020;
  GameData_22380a0 = (__int64)"map::terrain";
  GameData_22380a8 = (__int64)game_script_map_terrain_IsTrickDone;
  GameData_22380d0 = (__int64)"bool IsTrickDone(int x, int z)";
  GameData_22380d8 = (__int64)&GameData_2238060;
  GameData_22380c0 = 0;
  GameData_22380b0 = 0;
  GameData_22380b8 = 0;
  GameData_22380c8 = 2;
  GameData_2238110 = (__int64)"void SetTrickDone(int x, int z, bool isDone, "
                              "bool isWait, int force)";
  GameData_2238118 = (__int64)&GameData_22380a0;
  GameData_22380e0 = (__int64)"map::terrain";
  GameData_22380e8 = (__int64)game_map_anonymous_TrickEntity_TryCancel;
  GameData_2238100 = 0;
  GameData_22380f0 = 0;
  GameData_22380f8 = 0;
  GameData_2238108 = 2;
  GameData_2238140 = 0;
  GameData_2238130 = 0;
  GameData_2238138 = 0;
  GameData_2238148 = 2;
  GameData_2238120 = (__int64)"map::terrain";
  GameData_2238128 = (__int64)map_terrain_SetTargetByRect;
  GameData_2238150 = (__int64)"void SetTargetByRect(int x, int z, int targetX, "
                              "int targetZ, int targetW, int targetH)";
  GameData_2238158 = (__int64)&GameData_22380e0;
  GameData_2238160 = (__int64)"map::terrain";
  GameData_2238168 = (__int64)map_terrain_SetTargetByCircle;
  GameData_2238180 = 0;
  GameData_2238170 = 0;
  GameData_2238178 = 0;
  GameData_2238188 = 2;
  GameData_2238190 = (__int64)"void SetTargetByCircle(int x, int z, int "
                              "targetX, int targetZ, int targetRange)";
  GameData_2238198 = (__int64)&GameData_2238120;
  GameData_22381a0 = (__int64)"map::terrain";
  GameData_22381a8 = (__int64)map_terrain_SetTargetByPid;
  GameData_22381d0 =
      (__int64)"void SetTargetByPid(int x, int z, const string& pid)";
  GameData_22381d8 = (__int64)&GameData_2238160;
  GameData_22381c0 = 0;
  GameData_22381b0 = 0;
  GameData_22381b8 = 0;
  GameData_22381c8 = 2;
  GameData_22381e0 = (__int64)"map::terrain";
  GameData_22381e8 = (__int64)map_terrain_SetTargetBySid;
  GameData_2238200 = 0;
  GameData_22381f0 = 0;
  GameData_22381f8 = 0;
  GameData_2238208 = 2;
  GameData_2238210 =
      (__int64)"void SetTargetBySid(int x, int z, const string& sid)";
  GameData_2238218 = (__int64)&GameData_22381a0;
  GameData_2238220 = (__int64)"map::terrain";
  GameData_2238228 = (__int64)map_terrain_UpdateTrickForContinue;
  GameData_2238250 = (__int64)"void UpdateTrickForContinue()";
  GameData_2238258 = (__int64)&GameData_22381e0;
  GameData_2238240 = 0;
  GameData_2238230 = 0;
  GameData_2238238 = 0;
  GameData_2238248 = 2;
  GameData_2238290 = (__int64)"int GetOccupation(int x, int z)";
  GameData_2238298 = (__int64)&GameData_2238220;
  GameData_2238260 = (__int64)"map::terrain";
  GameData_2238268 = (__int64)game_script_map_terrain_GetOccupation;
  GameData_2238280 = 0;
  GameData_2238270 = 0;
  GameData_2238278 = 0;
  GameData_2238288 = 2;
  GameData_22382c0 = 0;
  GameData_22382b0 = 0;
  GameData_22382b8 = 0;
  GameData_22382c8 = 2;
  GameData_22382a0 = (__int64)"map::terrain";
  GameData_22382a8 = (__int64)game_script_map_terrain_SetOccupation;
  GameData_22382d0 = (__int64)"void SetOccupation(int x, int z, int force)";
  GameData_22382d8 = (__int64)&GameData_2238260;
  GameData_22382e0 = (__int64)"map::terrain";
  GameData_22382e8 = (__int64)game_script_map_terrain_GetBullet;
  GameData_2238300 = 0;
  GameData_22382f0 = 0;
  GameData_22382f8 = 0;
  GameData_2238308 = 2;
  GameData_2238310 = (__int64)"int GetBullet(int x, int z)";
  GameData_2238318 = (__int64)&GameData_22382a0;
  GameData_2238320 = (__int64)"map::terrain";
  GameData_2238328 = (__int64)game_script_map_terrain_SetPhase;
  GameData_2238350 = (__int64)"void SetPhase(int x, int z, int forceType)";
  GameData_2238358 = (__int64)&GameData_22382e0;
  GameData_2238340 = 0;
  GameData_2238330 = 0;
  GameData_2238338 = 0;
  GameData_2238348 = 2;
  GameData_2238360 = (__int64)"map::terrain";
  GameData_2238368 = (__int64)game_script_map_terrain_GetHp;
  GameData_2238380 = 0;
  GameData_2238370 = 0;
  GameData_2238378 = 0;
  GameData_2238388 = 2;
  GameData_2238390 = (__int64)"int GetHp(int x, int z)";
  GameData_2238398 = (__int64)&GameData_2238320;
  GameData_22383a0 = (__int64)"map::terrain";
  GameData_22383a8 = (__int64)game_script_map_terrain_SetHp;
  GameData_22383d0 = (__int64)"void SetHp(int x, int z, int hp)";
  GameData_22383d8 = (__int64)&GameData_2238360;
  GameData_22383c0 = 0;
  GameData_22383b0 = 0;
  GameData_22383b8 = 0;
  GameData_22383c8 = 2;
  GameData_2238410 = (__int64)"int GetMaxHp(int x, int z)";
  GameData_2238418 = (__int64)&GameData_22383a0;
  GameData_22383e0 = (__int64)"map::terrain";
  GameData_22383e8 = (__int64)game_script_map_terrain_GetMaxHp;
  GameData_2238400 = 0;
  GameData_22383f0 = 0;
  GameData_22383f8 = 0;
  GameData_2238408 = 2;
  GameData_2238440 = 0;
  GameData_2238430 = 0;
  GameData_2238438 = 0;
  GameData_2238448 = 2;
  GameData_2238420 = (__int64)"map::terrain";
  GameData_2238428 = (__int64)game_script_map_terrain_SetMaxHp;
  GameData_2238450 = (__int64)"void SetMaxHp(int x, int z, int maxHp)";
  GameData_2238458 = (__int64)&GameData_22383e0;
  GameData_2238460 = (__int64)"map::terrain";
  GameData_2238468 = (__int64)game_script_map_terrain_SetExclude;
  GameData_2238490 = (__int64)"void SetExclude(int x, int z, bool isExclude)";
  GameData_2238498 = (__int64)&GameData_2238420;
  GameData_22384a0 = (__int64)"map::obj::state";
  GameData_22384a8 = (__int64)"const as_s32 Stop";
  GameData_2239300 = 0;
  GameData_22392f0 = 0;
  GameData_22392f8 = 0;
  GameData_2239308 = 2;
  GameData_22392c0 = 0;
  v3 = *(_QWORD*)GameData_212bf40[0];
  GameData_22392b0 = 0;
  GameData_22392b8 = 0;
  GameData_22392c8 = 2;
  GameData_2239340 = 0;
  GameData_2239330 = 0;
  GameData_2239338 = 0;
  GameData_2239348 = 2;
  GameData_2239240 = 0;
  GameData_2239230 = 0;
  GameData_2239238 = 0;
  GameData_2239248 = 2;
  GameData_22391c0 = 0;
  GameData_22391b0 = 0;
  GameData_22391b8 = 0;
  GameData_22391c8 = 2;
  GameData_2239180 = 0;
  GameData_2239170 = 0;
  GameData_2239178 = 0;
  GameData_2239188 = 2;
  GameData_2238480 = 0;
  GameData_2238470 = 0;
  GameData_2238478 = 0;
  GameData_2238488 = 2;
  GameData_2238e30 = 0;
  GameData_2238e40 = 0;
  GameData_2238e38 = 0;
  GameData_2238e48 = 2;
  GameData_2239380 = 0;
  GameData_2239370 = 0;
  GameData_2239378 = 0;
  GameData_2239388 = 2;
  GameData_2239400 = 0;
  GameData_22393f0 = 0;
  GameData_22393f8 = 0;
  GameData_2239408 = 2;
  GameData_22394c0 = 0;
  GameData_22394b0 = 0;
  GameData_22394b8 = 0;
  GameData_22394c8 = 2;
  GameData_2239440 = 0;
  GameData_2239430 = 0;
  GameData_2239438 = 0;
  GameData_2239448 = 2;
  GameData_2239500 = 0;
  GameData_22394f0 = 0;
  GameData_22394f8 = 0;
  GameData_2239508 = 2;
  GameData_2239480 = 0;
  GameData_2239470 = 0;
  GameData_2239478 = 0;
  GameData_2239488 = 2;
  GameData_2239540 = 0;
  GameData_2239530 = 0;
  GameData_2239538 = 0;
  GameData_2239548 = 2;
  GameData_22389c0 = 0;
  GameData_22389b0 = 0;
  GameData_22389b8 = 0;
  GameData_22389c8 = 2;
  GameData_22393c0 = 0;
  GameData_22393b0 = 0;
  GameData_22393b8 = 0;
  GameData_22393c8 = 2;
  GameData_22384b0 = (__int64)&GameData_1bb4634;
  GameData_22384b8 = v3;
  GameData_22384c0 = (__int64)"map::obj::state";
  GameData_22384c8 = (__int64)"const as_s32 Done";
  GameData_22384d0 = (__int64)&GameData_1bb4638;
  GameData_22384d8 = (__int64)&GameData_22384a0;
  GameData_22384e0 = (__int64)"map::obj::state";
  GameData_22384e8 = (__int64)"const as_s32 Broken";
  GameData_22384f0 = (__int64)&GameData_1bb463c;
  GameData_22384f8 = (__int64)&GameData_22384c0;
  GameData_2238500 = (__int64)"map::obj::state";
  GameData_2238508 = (__int64)"const as_s32 Force1st";
  GameData_2238510 = (__int64)&GameData_1bb4640;
  GameData_2238518 = (__int64)&GameData_22384e0;
  GameData_2238520 = (__int64)"map::obj::state";
  GameData_2238528 = (__int64)"const as_s32 Force2nd";
  GameData_2238530 = (__int64)&GameData_1bb4644;
  GameData_2238538 = (__int64)&GameData_2238500;
  GameData_2238540 = (__int64)"map::obj::state";
  GameData_2238548 = (__int64)"const as_s32 Force3rd";
  GameData_2238550 = (__int64)&GameData_1bb4648;
  GameData_2238558 = (__int64)&GameData_2238520;
  GameData_2238560 = (__int64)"map::obj::state";
  GameData_2238568 = (__int64)"const as_s32 Force4th";
  GameData_2238570 = (__int64)&GameData_1bb464c;
  GameData_2238578 = (__int64)&GameData_2238540;
  GameData_2238580 = (__int64)"map::obj::state";
  GameData_2238588 = (__int64)"const as_s32 Color1";
  GameData_2238590 = (__int64)&GameData_1bb4650;
  GameData_2238598 = (__int64)&GameData_2238560;
  GameData_22385a0 = (__int64)"map::obj::state";
  GameData_22385a8 = (__int64)"const as_s32 Color2";
  GameData_22385b0 = (__int64)&GameData_1bb4654;
  GameData_22385b8 = (__int64)&GameData_2238580;
  GameData_22385c0 = (__int64)"map::obj::state";
  GameData_22385c8 = (__int64)"const as_s32 Color3";
  *(_QWORD*)GameData_212bf40[0] = &GameData_22385c0;
  GameData_22385d0 = (__int64)&GameData_1bb4658;
  GameData_22385d8 = (__int64)&GameData_22385a0;
  GameData_22385e0 = (__int64)"map::obj";
  GameData_22385e8 = (__int64)game_script_map_obj_IsActive_1167960;
  GameData_2238610 = (__int64)"bool IsActive(const string& objName)";
  GameData_2238618 = (__int64)&GameData_2238460;
  GameData_2238600 = 0;
  GameData_22385f0 = 0;
  GameData_22385f8 = 0;
  GameData_2238608 = 2;
  GameData_2239160 = (__int64)"map::event";
  GameData_2239168 = (__int64)game_script_map_event_EntryReviveBefore_116ea20;
  GameData_2238620 = (__int64)"map::obj";
  GameData_2238628 = (__int64)game_script_map_obj_IsActive_11679c0;
  GameData_2238640 = 0;
  GameData_2238630 = 0;
  GameData_2238638 = 0;
  GameData_2238648 = 2;
  GameData_22395c0 = 0;
  GameData_22395b0 = 0;
  GameData_22395b8 = 0;
  GameData_22395c8 = 2;
  GameData_22391a0 = (__int64)"map::event";
  GameData_22391a8 = (__int64)game_script_map_event_EntryReviveBefore_116ea40;
  GameData_2239220 = (__int64)"map::event";
  GameData_2239228 = (__int64)game_script_map_event_EntryReviveAfter_116ea80;
  GameData_2239310 =
      (__int64)"void EntryUnitCommandBefore(const string& funcName, const "
               "string& pid, const string& conditionFunc)";
  GameData_2239318 = (__int64)&GameData_22392a0;
  GameData_2239390 =
      (__int64)"void EntryMindComplete(const string& funcName, const string& "
               "pid, int force, const string& conditionFunc)";
  GameData_2239398 = (__int64)&GameData_2239320;
  GameData_2239410 =
      (__int64)"void EntryTalk(const string& funcName, const string& fromPid, "
               "int fromForce, const string& to"
               "Pid, int toForce, bool each, const string& conditionFunc)";
  GameData_2239418 = (__int64)&GameData_22393a0;
  GameData_2239490 =
      (__int64)"void EntryArea(const string& funcName, int minX, int minZ, int "
               "maxX, int maxZ, int force, con"
               "st string& conditionFunc)";
  GameData_2239498 = (__int64)&GameData_2239420;
  GameData_2239510 =
      (__int64)"void EntryTbox(const string& funcName, int x, int z)";
  GameData_2239518 = (__int64)&GameData_22394a0;
  GameData_22395d0 =
      (__int64)"void EntryDoor(const string& funcName, int minX, int minZ, int "
               "maxX, int maxZ, any ref arg)";
  GameData_22395d8 = (__int64)&GameData_2239560;
  GameData_2239580 = 0;
  GameData_2239570 = 0;
  GameData_2239578 = 0;
  GameData_2239588 = 2;
  GameData_2239590 = (__int64)"void EntryDoor(const string& funcName, int "
                              "minX, int minZ, int maxX, int maxZ)";
  GameData_2239598 = (__int64)&GameData_2239520;
  GameData_22395a0 = (__int64)"map::event";
  GameData_22395a8 = (__int64)game_script_map_event_EntryDoor_11718c0;
  GameData_2239550 = (__int64)"void EntryTbox(const string& funcName, int x, "
                              "int z, any ref arg)";
  GameData_2239558 = (__int64)&GameData_22394e0;
  GameData_2239560 = (__int64)"map::event";
  GameData_2239568 = (__int64)game_script_map_event_EntryDoor_11718b0;
  GameData_2239520 = (__int64)"map::event";
  GameData_2239528 = (__int64)game_script_map_event_EntryTbox_1171420;
  GameData_22394d0 =
      (__int64)"void EntryArea(const string& funcName, int minX, int minZ, int "
               "maxX, int maxZ, int force, con"
               "st string& conditionFunc, any ref arg)";
  GameData_22394d8 = (__int64)&GameData_2239460;
  GameData_22389a0 = (__int64)"map::effect";
  GameData_22389a8 = (__int64)map_effect_Shoot_1168c00;
  GameData_22394e0 = (__int64)"map::event";
  GameData_22394e8 = (__int64)game_script_map_event_EntryTbox_1171410;
  GameData_22394a0 = (__int64)"map::event";
  GameData_22394a8 = (__int64)game_script_map_event_EntryArea_1170d40;
  GameData_2238a00 = 0;
  GameData_22389f0 = 0;
  GameData_22389f8 = 0;
  GameData_2238a08 = 2;
  GameData_2239450 = (__int64)"void EntryTalk(const string& funcName, const "
                              "string& fromPid, int fromForce, const string& to"
                              "Pid, int toForce, bool each, const string& "
                              "conditionFunc, any ref arg)";
  GameData_2239458 = (__int64)&GameData_22393e0;
  GameData_2238a40 = 0;
  GameData_2238a30 = 0;
  GameData_2238a38 = 0;
  GameData_2238a48 = 2;
  GameData_2239460 = (__int64)"map::event";
  GameData_2239468 = (__int64)game_script_map_event_EntryArea_1170d30;
  GameData_2239420 = (__int64)"map::event";
  GameData_2239428 = (__int64)game_script_map_event_EntryTalk_1170680;
  GameData_2238a50 = (__int64)"int GetActiveUnitIndex()";
  GameData_2238a58 = (__int64)&GameData_22389e0;
  GameData_22393d0 = (__int64)"void EntryMindComplete(const string& funcName, "
                              "const string& pid, int force, const string& co"
                              "nditionFunc, any ref arg)";
  GameData_22393d8 = (__int64)&GameData_2239360;
  GameData_2238a80 = 0;
  GameData_2238a70 = 0;
  GameData_2238a78 = 0;
  GameData_2238a88 = 2;
  GameData_22393e0 = (__int64)"map::event";
  GameData_22393e8 = (__int64)game_script_map_event_EntryTalk_1170670;
  GameData_22393a0 = (__int64)"map::event";
  GameData_22393a8 = (__int64)game_script_map_event_EntryMindComplete_116ff80;
  GameData_2238ac0 = 0;
  GameData_2238ab0 = 0;
  GameData_2238ab8 = 0;
  GameData_2238ac8 = 2;
  GameData_2239350 =
      (__int64)"void EntryUnitCommandBefore(const string& funcName, const "
               "string& pid, const string& conditio"
               "nFunc, any ref arg)";
  GameData_2239358 = (__int64)&GameData_22392e0;
  GameData_2238ad0 = (__int64)"void EntryPhaseBefore(const string& funcName, "
                              "int turnMin, int turnMax, int force, const stri"
                              "ng& conditionFunc, any ref arg)";
  GameData_2238ad8 = (__int64)&GameData_2238a60;
  GameData_2239360 = (__int64)"map::event";
  GameData_2239368 = (__int64)game_script_map_event_EntryMindComplete_116ff70;
  GameData_2239320 = (__int64)"map::event";
  GameData_2239328 =
      (__int64)game_script_map_event_EntryUnitCommandBefore_116f8a0;
  GameData_2238b00 = 0;
  GameData_2238af0 = 0;
  GameData_2238af8 = 0;
  GameData_2238b08 = 2;
  GameData_22392a0 = (__int64)"map::event";
  GameData_22392a8 = (__int64)game_script_map_event_EntryUseActiveSkill_116f1c0;
  GameData_2239200 = 0;
  GameData_22391f0 = 0;
  GameData_22391f8 = 0;
  GameData_2239208 = 2;
  GameData_22392e0 = (__int64)"map::event";
  GameData_22392e8 =
      (__int64)game_script_map_event_EntryUnitCommandBefore_116f890;
  GameData_22392d0 =
      (__int64)"void EntryUseActiveSkill(const string& funcName, const string& "
               "pid, int force, const string& "
               "sid, const string& conditionFunc, any ref arg)";
  GameData_22392d8 = (__int64)&GameData_2239260;
  GameData_2239280 = 0;
  GameData_2239270 = 0;
  GameData_2239278 = 0;
  GameData_2239288 = 2;
  GameData_2239260 = (__int64)"map::event";
  GameData_2239268 = (__int64)game_script_map_event_EntryUseActiveSkill_116f1b0;
  GameData_2238b40 = 0;
  GameData_2238b30 = 0;
  GameData_2238b38 = 0;
  GameData_2238b48 = 2;
  GameData_2239290 =
      (__int64)"void EntryUseActiveSkill(const string& funcName, const string& "
               "pid, int force, const string& "
               "sid, const string& conditionFunc)";
  GameData_2239298 = (__int64)&GameData_2239220;
  GameData_2239250 = (__int64)"void EntryReviveAfter(const string& funcName, "
                              "const string& pid, int force, const string& con"
                              "ditionFunc, any ref arg)";
  GameData_2239258 = (__int64)&GameData_22391e0;
  GameData_22390a0 = (__int64)"map::event";
  GameData_22390a8 = (__int64)game_script_map_event_EntryDieBefore_116df30;
  GameData_22390c8 = 2;
  GameData_22390c0 = 0;
  GameData_22390b0 = 0;
  GameData_22390b8 = 0;
  GameData_22391e0 = (__int64)"map::event";
  GameData_22391e8 = (__int64)game_script_map_event_EntryReviveAfter_116ea60;
  GameData_22391d0 = (__int64)"void EntryReviveBefore(const string& funcName, "
                              "const string& pid, int force, const string& co"
                              "nditionFunc, any ref arg)";
  GameData_22391d8 = (__int64)&GameData_2239160;
  GameData_2239000 = 0;
  GameData_2238ff0 = 0;
  GameData_2238ff8 = 0;
  GameData_2239008 = 2;
  GameData_2239210 =
      (__int64)"void EntryReviveAfter(const string& funcName, const string& "
               "pid, int force, const string& conditionFunc)";
  GameData_2239218 = (__int64)&GameData_22391a0;
  GameData_2239130 = 0;
  GameData_2239138 = 0;
  GameData_2239148 = 2;
  GameData_2239140 = 0;
  GameData_2239190 =
      (__int64)"void EntryReviveBefore(const string& funcName, const string& "
               "pid, int force, const string& conditionFunc)";
  GameData_2239198 = (__int64)&GameData_2239120;
  GameData_2239110 =
      (__int64)"void EntryDieAfter(const string& funcName, const string& pid, "
               "int force, const string& conditionFunc)";
  GameData_2239118 = (__int64)&GameData_22390a0;
  GameData_22390f0 = 0;
  GameData_22390f8 = 0;
  GameData_2239108 = 2;
  GameData_2239100 = 0;
  GameData_2239150 =
      (__int64)"void EntryDieAfter(const string& funcName, const string& pid, "
               "int force, const string& condit"
               "ionFunc, any ref arg)";
  GameData_2239158 = (__int64)&GameData_22390e0;
  GameData_2239120 = (__int64)"map::event";
  GameData_2239128 = (__int64)game_script_map_event_EntryDieAfter_116df70;
  GameData_22390d0 =
      (__int64)"void EntryDieBefore(const string& funcName, const string& pid, "
               "int force, const string& condi"
               "tionFunc, any ref arg)";
  GameData_22390d8 = (__int64)&GameData_2239060;
  GameData_2239080 = 0;
  GameData_2239070 = 0;
  GameData_2239078 = 0;
  GameData_2239088 = 2;
  GameData_2238b50 = (__int64)"void EntryPhaseAfter(const string& funcName, "
                              "int turnMin, int turnMax, int force, const strin"
                              "g& conditionFunc, any ref arg)";
  GameData_2238b58 = (__int64)&GameData_2238ae0;
  GameData_22390e0 = (__int64)"map::event";
  GameData_22390e8 = (__int64)game_script_map_event_EntryDieAfter_116df50;
  GameData_2239090 =
      (__int64)"void EntryDieBefore(const string& funcName, const string& pid, "
               "int force, const string& conditionFunc)";
  GameData_2239098 = (__int64)&GameData_2239020;
  GameData_2239050 = (__int64)"void EntryDieTalk(const string& funcName, const "
                              "string& pid, int force, const string& conditi"
                              "onFunc, any ref arg)";
  GameData_2239058 = (__int64)&GameData_2238fe0;
  GameData_2239040 = 0;
  GameData_2239030 = 0;
  GameData_2239038 = 0;
  GameData_2239048 = 2;
  GameData_2239020 = (__int64)"map::event";
  GameData_2239028 = (__int64)game_script_map_event_EntryDieTalk_116def0;
  GameData_2239060 = (__int64)"map::event";
  GameData_2239068 = (__int64)game_script_map_event_EntryDieBefore_116df10;
  GameData_2238fe0 = (__int64)"map::event";
  GameData_2238fe8 = (__int64)game_script_map_event_EntryDieTalk_116ded0;
  GameData_2238fb0 = 0;
  GameData_2238fb8 = 0;
  GameData_2238fc8 = 2;
  GameData_2238fc0 = 0;
  GameData_2238eb0 = 0;
  GameData_2238eb8 = 0;
  GameData_2238ec8 = 2;
  GameData_2238ec0 = 0;
  GameData_2239010 =
      (__int64)"void EntryDieTalk(const string& funcName, const string& pid, "
               "int force, const string& conditionFunc)";
  GameData_2239018 = (__int64)&GameData_2238fa0;
  GameData_2238fd0 = (__int64)"void EntryFixedSilent(const string& funcName, "
                              "const string& pid, int force, const string& con"
                              "ditionFunc, any ref arg)";
  GameData_2238fd8 = (__int64)&GameData_2238f60;
  GameData_2238f88 = 2;
  GameData_2238f80 = 0;
  GameData_2238f70 = 0;
  GameData_2238f78 = 0;
  GameData_2238f90 =
      (__int64)"void EntryFixedSilent(const string& funcName, const string& "
               "pid, int force, const string& conditionFunc)";
  GameData_2238f98 = (__int64)&GameData_2238f20;
  GameData_2238f40 = 0;
  GameData_2238f30 = 0;
  GameData_2238f38 = 0;
  GameData_2238f48 = 2;
  GameData_2238fa0 = (__int64)"map::event";
  GameData_2238fa8 = (__int64)game_script_map_event_EntryFixedSilent_116d050;
  GameData_2238f50 = (__int64)"void EntryFixed(const string& funcName, const "
                              "string& pid, int force, const string& condition"
                              "Func, any ref arg)";
  GameData_2238f58 = (__int64)&GameData_2238ee0;
  GameData_2238f00 = 0;
  GameData_2238ef0 = 0;
  GameData_2238ef8 = 0;
  GameData_2238f08 = 2;
  GameData_2238e50 =
      (__int64)"void EntryPickup(const string& funcName, const string& pid, "
               "const string& conditionFunc, any ref arg)";
  GameData_2238f60 = (__int64)"map::event";
  GameData_2238f68 = (__int64)game_script_map_event_EntryFixedSilent_116d040;
  GameData_2238f10 =
      (__int64)"void EntryFixed(const string& funcName, const string& pid, int "
               "force, const string& conditionFunc)";
  GameData_2238f18 = (__int64)&GameData_2238ea0;
  GameData_2238f20 = (__int64)"map::event";
  GameData_2238f28 = (__int64)game_script_map_event_EntryFixed_116d030;
  GameData_2238ee0 = (__int64)"map::event";
  GameData_2238ee8 = (__int64)game_script_map_event_EntryFixed_116d020;
  GameData_2238bc0 = 0;
  GameData_2238bb0 = 0;
  GameData_2238bb8 = 0;
  GameData_2238bc8 = 2;
  GameData_2238ed0 =
      (__int64)"void EntryPickupSilent(const string& funcName, const string& "
               "pid, const string& conditionFunc, any ref arg)";
  GameData_2238ed8 = (__int64)&GameData_2238e60;
  GameData_2238e60 = (__int64)"map::event";
  GameData_2238e68 = (__int64)game_script_map_event_EntryPickupSilent_116c570;
  GameData_2238e80 = 0;
  GameData_2238e70 = 0;
  GameData_2238e78 = 0;
  GameData_2238e88 = 2;
  GameData_2238e90 = (__int64)"void EntryPickupSilent(const string& funcName, "
                              "const string& pid, const string& conditionFunc)";
  GameData_2238e98 = (__int64)&GameData_2238e20;
  GameData_2238e20 = (__int64)"map::event";
  GameData_2238e28 = (__int64)game_script_map_event_EntryPickup_116c560;
  GameData_2238ea0 = (__int64)"map::event";
  GameData_2238ea8 = (__int64)game_script_map_event_EntryPickupSilent_116c580;
  GameData_2238e58 = (__int64)&GameData_2238de0;
  GameData_2238e00 = 0;
  GameData_2238df0 = 0;
  GameData_2238df8 = 0;
  GameData_2238e08 = 2;
  GameData_2238dd0 =
      (__int64)"void EntryBattleComplete(const string& funcName, const string& "
               "conditionFunc, any ref arg)";
  GameData_2238dd8 = (__int64)&GameData_2238d60;
  GameData_2238e10 = (__int64)"void EntryPickup(const string& funcName, const "
                              "string& pid, const string& conditionFunc)";
  GameData_2238e18 = (__int64)&GameData_2238da0;
  GameData_2238db0 = 0;
  GameData_2238db8 = 0;
  GameData_2238dc8 = 2;
  GameData_2238dc0 = 0;
  GameData_2238d80 = 0;
  GameData_2238d70 = 0;
  GameData_2238d78 = 0;
  GameData_2238d88 = 2;
  GameData_2238c00 = 0;
  GameData_2238bf0 = 0;
  GameData_2238bf8 = 0;
  GameData_2238c08 = 2;
  GameData_2238de0 = (__int64)"map::event";
  GameData_2238de8 = (__int64)game_script_map_event_EntryPickup_116c550;
  GameData_2238c10 = (__int64)"void EntryBattleBefore(const string& funcName, "
                              "const string& fromPid, int fromForce, const st"
                              "ring& toPid, int toForce, bool each, const "
                              "string& conditionFunc)";
  GameData_2238c18 = (__int64)&GameData_2238ba0;
  GameData_2238da0 = (__int64)"map::event";
  GameData_2238da8 = (__int64)game_script_map_event_EntryBattleComplete_116b8d0;
  GameData_2238cc0 = 0;
  GameData_2238cb0 = 0;
  GameData_2238cb8 = 0;
  GameData_2238cc8 = 2;
  GameData_2238650 = (__int64)"bool IsActive(int x, int z)";
  GameData_2238658 = (__int64)&GameData_22385e0;
  GameData_2238d60 = (__int64)"map::event";
  GameData_2238d68 = (__int64)game_script_map_event_EntryBattleComplete_116b820;
  GameData_2238d30 = 0;
  GameData_2238d38 = 0;
  GameData_2238d48 = 2;
  GameData_2238d40 = 0;
  GameData_2238d90 = (__int64)"void EntryBattleComplete(const string& "
                              "funcName, const string& conditionFunc)";
  GameData_2238d98 = (__int64)&GameData_2238d20;
  GameData_2238d50 = (__int64)"void EntryBattleAfter(const string& funcName, "
                              "const string& fromPid, int fromForce, const str"
                              "ing& toPid, int toForce, bool each, const "
                              "string& conditionFunc, any ref arg)";
  GameData_2238d58 = (__int64)&GameData_2238ce0;
  GameData_2238d00 = 0;
  GameData_2238cf0 = 0;
  GameData_2238cf8 = 0;
  GameData_2238d08 = 2;
  GameData_2238d10 = (__int64)"void EntryBattleAfter(const string& funcName, "
                              "const string& fromPid, int fromForce, const str"
                              "ing& toPid, int toForce, bool each, const "
                              "string& conditionFunc)";
  GameData_2238d18 = (__int64)&GameData_2238ca0;
  GameData_2238d20 = (__int64)"map::event";
  GameData_2238d28 = (__int64)game_script_map_event_EntryBattleAfter_116b7d0;
  GameData_2238ce0 = (__int64)"map::event";
  GameData_2238ce8 = (__int64)game_script_map_event_EntryBattleAfter_116b780;
  GameData_2238cd0 = (__int64)"void EntryBattleTalk(const string& funcName, "
                              "const string& fromPid, int fromForce, const stri"
                              "ng& toPid, int toForce, bool each, const "
                              "string& conditionFunc, any ref arg)";
  GameData_2238cd8 = (__int64)&GameData_2238c60;
  GameData_2238c80 = 0;
  GameData_2238c70 = 0;
  GameData_2238c78 = 0;
  GameData_2238c88 = 2;
  GameData_2238ca0 = (__int64)"map::event";
  GameData_2238ca8 = (__int64)game_script_map_event_EntryBattleTalk_116b730;
  GameData_2238c40 = 0;
  GameData_2238c30 = 0;
  GameData_2238c38 = 0;
  GameData_2238c48 = 2;
  GameData_2238c90 = (__int64)"void EntryBattleTalk(const string& funcName, "
                              "const string& fromPid, int fromForce, const stri"
                              "ng& toPid, int toForce, bool each, const "
                              "string& conditionFunc)";
  GameData_2238c98 = (__int64)&GameData_2238c20;
  GameData_2238c60 = (__int64)"map::event";
  GameData_2238c68 = (__int64)game_script_map_event_EntryBattleTalk_116b6e0;
  GameData_2238c20 = (__int64)"map::event";
  GameData_2238c28 = (__int64)game_script_map_event_EntryBattleBefore_116b690;
  GameData_2238c50 = (__int64)"void EntryBattleBefore(const string& funcName, "
                              "const string& fromPid, int fromForce, const st"
                              "ring& toPid, int toForce, bool each, const "
                              "string& conditionFunc, any ref arg)";
  GameData_2238c58 = (__int64)&GameData_2238be0;
  GameData_2238bd0 = (__int64)"void EntryPhaseEnd(const string& funcName, int "
                              "turnMin, int turnMax, int force, const string&"
                              " conditionFunc, any ref arg)";
  GameData_2238bd8 = (__int64)&GameData_2238b60;
  GameData_2238b80 = 0;
  GameData_2238b70 = 0;
  GameData_2238b78 = 0;
  GameData_2238b88 = 2;
  GameData_2238be0 = (__int64)"map::event";
  GameData_2238be8 = (__int64)game_script_map_event_EntryBattleBefore_116b640;
  GameData_2238b90 =
      (__int64)"void EntryPhaseEnd(const string& funcName, int turnMin, int "
               "turnMax, int force, const string& conditionFunc)";
  GameData_2238b98 = (__int64)&GameData_2238b20;
  GameData_2238748 = 2;
  GameData_2238740 = 0;
  GameData_2238730 = 0;
  GameData_2238738 = 0;
  GameData_2238ba0 = (__int64)"map::event";
  GameData_2238ba8 = (__int64)game_script_map_event_EntryPhaseEnd_116a250;
  GameData_2238b60 = (__int64)"map::event";
  GameData_2238b68 = (__int64)game_script_map_event_EntryPhaseEnd_116a230;
  GameData_22386b0 = 0;
  GameData_22386b8 = 0;
  GameData_22386c8 = 2;
  GameData_22386c0 = 0;
  GameData_2238b10 = (__int64)"void EntryPhaseAfter(const string& funcName, "
                              "int turnMin, int turnMax, int force, const strin"
                              "g& conditionFunc)";
  GameData_2238b18 = (__int64)&GameData_2238aa0;
  GameData_2238660 = (__int64)"map::obj";
  GameData_2238668 = (__int64)game_script_map_obj_SetActive_1167a20;
  GameData_22386d0 = (__int64)"void SetActive(int x, int z, bool isActive)";
  GameData_22386d8 = (__int64)&GameData_2238660;
  GameData_2238670 = 0;
  GameData_2238678 = 0;
  GameData_2238688 = 2;
  GameData_2238680 = 0;
  GameData_2238b20 = (__int64)"map::event";
  GameData_2238b28 = (__int64)game_script_map_event_EntryPhaseAfter_116a210;
  GameData_2238ae0 = (__int64)"map::event";
  GameData_2238ae8 = (__int64)game_script_map_event_EntryPhaseAfter_116a1f0;
  GameData_2238a90 = (__int64)"void EntryPhaseBefore(const string& funcName, "
                              "int turnMin, int turnMax, int force, const stri"
                              "ng& conditionFunc)";
  GameData_2238a98 = (__int64)&GameData_2238a20;
  GameData_2238aa0 = (__int64)"map::event";
  GameData_2238aa8 = (__int64)game_script_map_event_EntryPhaseBefore_116a1d0;
  GameData_2238a60 = (__int64)"map::event";
  GameData_2238a68 = (__int64)game_script_map_event_EntryPhaseBefore_116a1b0;
  GameData_2238a10 = (__int64)"void Shoot(const string& effName, int fromX, "
                              "int fromZ, int toUnitIndex, bool isFocus)";
  GameData_2238a18 = (__int64)&GameData_22389a0;
  GameData_2238a20 = (__int64)"map::event";
  GameData_2238a28 = (__int64)game_script_map_event_GetActiveUnitIndex;
  GameData_22389e0 = (__int64)"map::effect";
  GameData_22389e8 = (__int64)map_effect_Shoot_1168f80;
  GameData_22389d0 = (__int64)"void Shoot(const string& effName, int fromX, "
                              "int fromZ, int toX, int toZ, bool isFocus)";
  GameData_22389d8 = (__int64)&GameData_2238960;
  GameData_2238980 = 0;
  GameData_2238970 = 0;
  GameData_2238978 = 0;
  GameData_2238988 = 2;
  GameData_2238990 =
      (__int64)"void Delete(int x, int z, const string& effName)";
  GameData_2238998 = (__int64)&GameData_2238920;
  GameData_2238930 = 0;
  GameData_2238938 = 0;
  GameData_2238948 = 2;
  GameData_2238940 = 0;
  GameData_22388c0 = 0;
  GameData_22388b0 = 0;
  GameData_22388b8 = 0;
  GameData_22388c8 = 2;
  GameData_2238960 = (__int64)"map::effect";
  GameData_2238968 = (__int64)game_script_map_effect_Delete_1168b20;
  GameData_2238950 = (__int64)"void Delete(const string& effName)";
  GameData_2238958 = (__int64)&GameData_22388e0;
  GameData_2238908 = 2;
  GameData_2238900 = 0;
  GameData_22388f0 = 0;
  GameData_22388f8 = 0;
  GameData_2238910 = (__int64)"void Delete(int x, int z)";
  GameData_2238918 = (__int64)&GameData_22388a0;
  GameData_2238920 = (__int64)"map::effect";
  GameData_2238928 = (__int64)game_script_map_effect_Delete_1168a60;
  GameData_22388e0 = (__int64)"map::effect";
  GameData_22388e8 = (__int64)map_effect_Delete;
  GameData_2238800 = 0;
  GameData_22387f0 = 0;
  GameData_22387f8 = 0;
  GameData_2238808 = 2;
  GameData_22388a0 = (__int64)"map::effect";
  GameData_22388a8 = (__int64)game_script_map_effect_Create;
  GameData_2238870 = 0;
  GameData_2238878 = 0;
  GameData_2238888 = 2;
  GameData_2238880 = 0;
  GameData_22388d0 =
      (__int64)"void Create(const string& effName, int x, int z)";
  GameData_22388d8 = (__int64)&GameData_2238860;
  GameData_2238890 =
      (__int64)"void PlayUnitCenter(const string& effName, int unitIndex)";
  GameData_2238898 = (__int64)&GameData_2238820;
  GameData_2238840 = 0;
  GameData_2238830 = 0;
  GameData_2238838 = 0;
  GameData_2238848 = 2;
  GameData_2238850 =
      (__int64)"void Play(const string& effName, int x, int z, int rotDeg)";
  GameData_2238858 = (__int64)&GameData_22387e0;
  GameData_2238860 = (__int64)"map::effect";
  GameData_2238868 = (__int64)game_script_map_effect_PlayUnitCenter;
  GameData_2238820 = (__int64)"map::effect";
  GameData_2238828 = (__int64)game_script_map_effect_Play;
  GameData_2238810 = (__int64)"void PreloadAndWait(const string& effName)";
  GameData_2238818 = (__int64)&GameData_22387a0;
  GameData_22387c0 = 0;
  GameData_22387b0 = 0;
  GameData_22387b8 = 0;
  GameData_22387c8 = 2;
  GameData_22387e0 = (__int64)"map::effect";
  GameData_22387e8 = (__int64)map_effect_PreloadAndWait;
  GameData_2238790 = (__int64)"void PlayStateWait(const string& objName)";
  GameData_2238798 = (__int64)&GameData_2238720;
  GameData_2238780 = 0;
  GameData_2238770 = 0;
  GameData_2238778 = 0;
  GameData_2238788 = 2;
  GameData_22387a0 = (__int64)"map::obj";
  GameData_22387a8 = (__int64)game_script_map_obj_PlayStateWait_11684b0;
  GameData_22387d0 = (__int64)"void PlayStateWait(int x, int z)";
  GameData_22387d8 = (__int64)&GameData_2238760;
  GameData_2238750 =
      (__int64)"void PlayState(int x, int z, int state, bool isWait)";
  GameData_2238758 = (__int64)&GameData_22386e0;
  GameData_22386f0 = 0;
  GameData_22386f8 = 0;
  GameData_2238708 = 2;
  GameData_2238700 = 0;
  GameData_2238760 = (__int64)"map::obj";
  GameData_2238768 = (__int64)game_script_map_obj_PlayStateWait_1168460;
  GameData_2238710 =
      (__int64)"void PlayState(const string& objName, int state, bool isWait)";
  GameData_2238718 = (__int64)&GameData_22386a0;
  GameData_2238720 = (__int64)"map::obj";
  GameData_2238728 = (__int64)map_obj_PlayState_1168020;
  GameData_22386e0 = (__int64)"map::obj";
  GameData_22386e8 = (__int64)map_obj_PlayState_1167f50;
  GameData_2238690 =
      (__int64)"void SetActive(const string& objName, bool isActive)";
  GameData_2238698 = (__int64)&GameData_2238620;
  GameData_22386a0 = (__int64)"map::obj";
  GameData_22386a8 = (__int64)game_script_map_obj_SetActive_1167af0;
  GameData_22395e0 = (__int64)"map::event";
  GameData_22395e8 = (__int64)game_script_map_event_EntryGimmick_1171d50;
  GameData_2239600 = 0;
  GameData_22395f0 = 0;
  GameData_22395f8 = 0;
  GameData_2239608 = 2;
  GameData_2239610 =
      (__int64)"void EntryGimmick(const string& funcName, int x, int z)";
  GameData_2239618 = (__int64)&GameData_22395a0;
  GameData_2239620 = (__int64)"map::event";
  GameData_2239628 = (__int64)game_script_map_event_EntryGimmick_1171d60;
  GameData_2239650 = (__int64)"void EntryGimmick(const string& funcName, int "
                              "x, int z, any ref arg)";
  GameData_2239658 = (__int64)&GameData_22395e0;
  GameData_2239640 = 0;
  GameData_2239630 = 0;
  GameData_2239638 = 0;
  GameData_2239648 = 2;
  GameData_2239660 = (__int64)"map::event";
  GameData_2239668 = (__int64)game_script_map_event_EntryDestroy_11721f0;
  GameData_2239680 = 0;
  GameData_2239670 = 0;
  GameData_2239678 = 0;
  GameData_2239688 = 2;
  GameData_2239690 = (__int64)"void EntryDestroy(const string& funcName, int "
                              "minX, int minZ, int maxX, int maxZ)";
  GameData_2239698 = (__int64)&GameData_2239620;
  GameData_22396a0 = (__int64)"map::event";
  GameData_22396a8 = (__int64)game_script_map_event_EntryDestroy_1172200;
  GameData_22396d0 =
      (__int64)"void EntryDestroy(const string& funcName, int minX, int minZ, "
               "int maxX, int maxZ, any ref arg)";
  GameData_22396d8 = (__int64)&GameData_2239660;
  GameData_22396c0 = 0;
  GameData_22396b0 = 0;
  GameData_22396b8 = 0;
  GameData_22396c8 = 2;
  GameData_2239710 =
      (__int64)"void EntryBreakdown(const string& funcName, int x, int z)";
  GameData_2239718 = (__int64)&GameData_22396a0;
  GameData_22396e0 = (__int64)"map::event";
  GameData_22396e8 = (__int64)game_script_map_event_EntryBreakdown_1172690;
  GameData_2239700 = 0;
  GameData_22396f0 = 0;
  GameData_22396f8 = 0;
  GameData_2239708 = 2;
  GameData_2239740 = 0;
  GameData_2239730 = 0;
  GameData_2239738 = 0;
  GameData_2239748 = 2;
  GameData_2239720 = (__int64)"map::event";
  GameData_2239728 = (__int64)game_script_map_event_EntryBreakdown_11726a0;
  GameData_2239750 = (__int64)"void EntryBreakdown(const string& funcName, int "
                              "x, int z, any ref arg)";
  GameData_2239758 = (__int64)&GameData_22396e0;
  GameData_2239760 = (__int64)"map::event";
  GameData_2239768 = (__int64)game_script_map_event_EntryEscapeBefore_1172d50;
  GameData_2239780 = 0;
  GameData_2239770 = 0;
  GameData_2239778 = 0;
  GameData_2239788 = 2;
  GameData_2239790 =
      (__int64)"void EntryEscapeBefore(const string& funcName, int x, int z, "
               "const string& pid, const string& conditionFunc)";
  GameData_2239798 = (__int64)&GameData_2239720;
  GameData_22397a0 = (__int64)"map::event";
  GameData_22397a8 = (__int64)game_script_map_event_EntryEscapeBefore_1172d60;
  GameData_22397d0 = (__int64)"void EntryEscapeBefore(const string& funcName, "
                              "int x, int z, const string& pid, const string&"
                              " conditionFunc, any ref arg)";
  GameData_22397d8 = (__int64)&GameData_2239760;
  GameData_22397c0 = 0;
  GameData_22397b0 = 0;
  GameData_22397b8 = 0;
  GameData_22397c8 = 2;
  GameData_22397e0 = (__int64)"map::event";
  GameData_22397e8 = (__int64)game_script_map_event_EntryEscapeAfter_1172d70;
  GameData_2239800 = 0;
  GameData_22397f0 = 0;
  GameData_22397f8 = 0;
  GameData_2239808 = 2;
  GameData_2239810 =
      (__int64)"void EntryEscapeAfter(const string& funcName, int x, int z, "
               "const string& pid, const string& conditionFunc)";
  GameData_2239818 = (__int64)&GameData_22397a0;
  GameData_2239820 = (__int64)"map::event";
  GameData_2239828 = (__int64)game_script_map_event_EntryEscapeAfter_1172d80;
  GameData_2239850 = (__int64)"void EntryEscapeAfter(const string& funcName, "
                              "int x, int z, const string& pid, const string& "
                              "conditionFunc, any ref arg)";
  GameData_2239858 = (__int64)&GameData_22397e0;
  GameData_2239840 = 0;
  GameData_2239830 = 0;
  GameData_2239838 = 0;
  GameData_2239848 = 2;
  GameData_2239890 =
      (__int64)"void EntryWarpCommandAfter(const string& funcName, int x, int "
               "z, const string& conditionFunc)";
  GameData_2239898 = (__int64)&GameData_2239820;
  GameData_2239860 = (__int64)"map::event";
  GameData_2239868 =
      (__int64)game_script_map_event_EntryWarpCommandAfter_1173210;
  GameData_2239880 = 0;
  GameData_2239870 = 0;
  GameData_2239878 = 0;
  GameData_2239888 = 2;
  GameData_22398c0 = 0;
  GameData_22398b0 = 0;
  GameData_22398b8 = 0;
  GameData_22398c8 = 2;
  GameData_22398a0 = (__int64)"map::event";
  GameData_22398a8 =
      (__int64)game_script_map_event_EntryWarpCommandAfter_1173220;
  GameData_22398d0 =
      (__int64)"void EntryWarpCommandAfter(const string& funcName, int x, int "
               "z, const string& conditionFunc, any ref arg)";
  GameData_22398d8 = (__int64)&GameData_2239860;
  GameData_22398e0 = (__int64)"map::battle";
  GameData_22398e8 = (__int64)game_script_map_battle_GetOffenceUnitIndex;
  GameData_2239910 = (__int64)"int GetOffenceUnitIndex()";
  GameData_2239918 = (__int64)&GameData_22398a0;
  GameData_2239900 = 0;
  GameData_22398f0 = 0;
  GameData_22398f8 = 0;
  GameData_2239908 = 2;
  GameData_2239920 = (__int64)"map::battle";
  GameData_2239928 = (__int64)game_script_map_battle_GetOffenceUnitPID;
  GameData_2239940 = 0;
  GameData_2239930 = 0;
  GameData_2239938 = 0;
  GameData_2239948 = 2;
  GameData_2239950 = (__int64)"string GetOffenceUnitPID()";
  GameData_2239958 = (__int64)&GameData_22398e0;
  GameData_2239960 = (__int64)"map::battle";
  GameData_2239968 = (__int64)game_script_map_battle_GetDefenceUnitIndex;
  GameData_2239990 = (__int64)"int GetDefenceUnitIndex()";
  GameData_2239998 = (__int64)&GameData_2239920;
  GameData_2239980 = 0;
  GameData_2239970 = 0;
  GameData_2239978 = 0;
  GameData_2239988 = 2;
  GameData_22399d0 = (__int64)"string GetDefenceUnitPID()";
  GameData_22399d8 = (__int64)&GameData_2239960;
  GameData_22399a0 = (__int64)"map::battle";
  GameData_22399a8 = (__int64)game_script_map_battle_GetDefenceUnitPID;
  GameData_22399c0 = 0;
  GameData_22399b0 = 0;
  GameData_22399b8 = 0;
  GameData_22399c8 = 2;
  GameData_2239a00 = 0;
  GameData_22399f0 = 0;
  GameData_22399f8 = 0;
  GameData_2239a08 = 2;
  GameData_22399e0 = (__int64)"map::battle";
  GameData_22399e8 = (__int64)game_script_map_battle_GetDeadUnitIndex;
  GameData_2239a10 = (__int64)"int GetDeadUnitIndex()";
  GameData_2239a18 = (__int64)&GameData_22399a0;
  GameData_2239a20 = (__int64)"map::battle";
  GameData_2239a28 = (__int64)game_script_map_battle_GetDeadUnitPID;
  GameData_2239a40 = 0;
  GameData_2239a30 = 0;
  GameData_2239a38 = 0;
  GameData_2239a48 = 2;
  GameData_2239a50 = (__int64)"string GetDeadUnitPID()";
  GameData_2239a58 = (__int64)&GameData_22399e0;
  GameData_2239a80 = 0;
  GameData_2239a70 = 0;
  GameData_2239a78 = 0;
  GameData_2239a88 = 2;
  GameData_2239a60 = (__int64)"map::snd";
  GameData_2239a68 = (__int64)game_script_map_snd_GeFadeMsec;
  GameData_2239a90 = (__int64)"int GeFadeMsec(const string& fadeName)";
  GameData_2239a98 = (__int64)&GameData_2239a20;
  GameData_2239aa0 = (__int64)"map::snd";
  GameData_2239aa8 = (__int64)game_script_map_snd_PlayBgm;
  GameData_2239ac0 = 0;
  GameData_2239ab0 = 0;
  GameData_2239ab8 = 0;
  GameData_2239ac8 = 2;
  GameData_2239ae0 = (__int64)"map::snd";
  GameData_2239ae8 = (__int64)game_script_map_snd_StopBgm;
  GameData_2239b00 = 0;
  GameData_2239af0 = 0;
  GameData_2239af8 = 0;
  GameData_2239b08 = 2;
  GameData_2239ad0 = (__int64)"void PlayBgm(const string& bgmLabel)";
  GameData_2239ad8 = (__int64)&GameData_2239a60;
  GameData_2239b10 = (__int64)"void StopBgm(int fade)";
  GameData_2239b18 = (__int64)&GameData_2239aa0;
  GameData_2239b40 = 0;
  GameData_2239b30 = 0;
  GameData_2239b38 = 0;
  GameData_2239b48 = 2;
  GameData_2239b20 = (__int64)"map::snd";
  GameData_2239b28 = (__int64)map_snd_PlaySe;
  GameData_2239b50 =
      (__int64)"snd::VoiceHandle PlaySe(const string& seLabel, int fade)";
  GameData_2239b58 = (__int64)&GameData_2239ae0;
  GameData_2239b60 = (__int64)"map::snd";
  GameData_2239b68 = (__int64)map_snd_StopSe;
  GameData_2239b80 = 0;
  GameData_2239b70 = 0;
  GameData_2239b78 = 0;
  GameData_2239b88 = 2;
  GameData_2239c40 = 0;
  GameData_2239c30 = 0;
  GameData_2239c38 = 0;
  GameData_2239c48 = 2;
  GameData_2239b90 = (__int64)"void StopSe(snd::VoiceHandle handle, int fade)";
  GameData_2239b98 = (__int64)&GameData_2239b20;
  GameData_2239ba0 = (__int64)"map::snd";
  GameData_2239ba8 = (__int64)map_snd_SetSeVol;
  GameData_2239bc0 = 0;
  GameData_2239bb0 = 0;
  GameData_2239bb8 = 0;
  GameData_2239bc8 = 2;
  GameData_2239bd0 =
      (__int64)"void SetSeVol(snd::VoiceHandle handle, float vol, int fade)";
  GameData_2239bd8 = (__int64)&GameData_2239b60;
  GameData_2239be0 = (__int64)"map::snd";
  GameData_2239be8 = (__int64)map_snd_WaitSe;
  GameData_2239c00 = 0;
  GameData_2239bf0 = 0;
  GameData_2239bf8 = 0;
  GameData_2239c08 = 2;
  GameData_2239c10 = (__int64)"void WaitSe(snd::VoiceHandle handle)";
  GameData_2239c18 = (__int64)&GameData_2239ba0;
  GameData_2239c20 = (__int64)"map::history";
  GameData_2239c28 = (__int64)game_script_map_history_LogInfoSetEscape;
  GameData_2239c50 = (__int64)"void LogInfoSetEscape(int unitIndex)";
  GameData_2239c58 = (__int64)&GameData_2239be0;
  GameData_2239c80 = 0;
  GameData_2239c70 = 0;
  GameData_2239c78 = 0;
  GameData_2239c88 = 2;
  GameData_2239c60 = (__int64)"map::history";
  GameData_2239c68 = (__int64)game_script_map_history_LogInfoSetBattleSkill;
  GameData_2239c90 =
      (__int64)"void LogInfoSetBattleSkill(int unitIndex, const string& sid)";
  GameData_2239c98 = (__int64)&GameData_2239c20;
  GameData_2239ca0 = (__int64)"map::history";
  GameData_2239ca8 = (__int64)game_script_map_history_ReserveToRecordMind;
  GameData_2239cc0 = 0;
  GameData_2239cb0 = 0;
  GameData_2239cb8 = 0;
  GameData_2239cc8 = 2;
  GameData_2239cd0 = (__int64)"void ReserveToRecordMind(int unitIndex)";
  GameData_2239cd8 = (__int64)&GameData_2239c60;
  GameData_2239ce0 = (__int64)"map::history";
  GameData_2239ce8 = (__int64)map_history_ReserveToRecordMindAndChangeDead;
  GameData_2239d10 =
      (__int64)"void ReserveToRecordMindAndChangeDead(int unitIndex)";
  GameData_2239d18 = (__int64)&GameData_2239ca0;
  GameData_2239d00 = 0;
  GameData_2239cf0 = 0;
  GameData_2239cf8 = 0;
  GameData_2239d08 = 2;
  GameData_2239d20 = (__int64)"map::history";
  GameData_2239d28 = (__int64)map_history_ReserveMindUnit;
  GameData_2239d40 = 0;
  GameData_2239d30 = 0;
  GameData_2239d38 = 0;
  GameData_2239d48 = 2;
  GameData_2239d50 = (__int64)"void ReserveMindUnit(int unitIndex)";
  GameData_2239d58 = (__int64)&GameData_2239ce0;
  GameData_2239d60 = (__int64)"map::history";
  GameData_2239d68 = (__int64)game_script_map_history_Backup;
  GameData_2239d80 = 0;
  GameData_2239d70 = 0;
  GameData_2239d78 = 0;
  GameData_2239d88 = 2;
  GameData_2239d90 = (__int64)"void Backup()";
  GameData_2239d98 = (__int64)&GameData_2239d20;
  GameData_2239dc8 = 2;
  GameData_2239dc0 = 0;
  GameData_2239db0 = 0;
  GameData_2239db8 = 0;
  GameData_2239dd0 = (__int64)"void Restore()";
  GameData_2239dd8 = (__int64)&GameData_2239d60;
  *(_QWORD*)GameData_212bf18[0] = &GameData_2239da0;
  GameData_2239da0 = (__int64)"map::history";
  GameData_2239da8 = (__int64)game_script_map_history_Restore;
  return "map::effect";
}

__int64* game_118a810()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  GameData_2239e80 = 0xFF00000000LL;
  GameData_2239e88 = 1;
  GameData_2239ea8 = 1;
  GameData_2239ecc = 1;
  GameData_2239ea9 = 0;
  *(int*)((char*)&GameData_2239ea9 + 3) = 0;
  GameData_2239ee4 = 256;
  GameData_2239ef0 = 255;
  GameData_2239ea0 = 0x100000003LL;
  GameData_2239eb0 = 0xFF0100000001LL;
  GameData_2239eb8 = 0x100000003LL;
  GameData_2239ed0 = 0x200000003LL;
  GameData_2239ed8 = 257;
  GameData_2239edc = 0x200000000LL;
  GameData_2239e90 = 0x20000FFFFLL;
  GameData_2239e98 = 0xFF0000000000LL;
  GameData_2239ec0 = 65280;
  GameData_2239ef4 = 0x300000002LL;
  GameData_2239ec4 = 0x200000002LL;
  GameData_2239efc = 511;
  GameData_2239ee8 = 0x300000001LL;
  GameData_2239f00 = 0x300000001LL;
  GameData_2239f08 = 256;
  GameData_2239e70 = (__int64)&GameData_2239e80;
  GameData_2239e78 = 12;
  v0 = *(_QWORD*)GameData_212bf48[0];
  *(_QWORD*)GameData_212bf48[0] = &GameData_2239f10;
  GameData_2239f10 = (__int64)"unit";
  GameData_2239f18 = v0;
  GameData_2239f20 = (__int64)"unit";
  GameData_2239f28 = (__int64)game_script_unit_GetIndexByPID;
  GameData_2239f30 = 0;
  GameData_2239f38 = 0;
  GameData_2239f40 = 0;
  GameData_223a060 = (__int64)"unit";
  GameData_223a068 = (__int64)game_script_unit_GetFirstIndexOnMap;
  GameData_223a080 = 0;
  GameData_223a070 = 0;
  GameData_223a078 = 0;
  GameData_2239f48 = 2;
  GameData_223a088 = 2;
  v1 = *(_QWORD*)GameData_212bf18[0];
  GameData_2239f50 = (__int64)"int GetIndexByPID(const string& pid)";
  GameData_2239f58 = v1;
  GameData_2239f60 = (__int64)"unit";
  GameData_2239f68 = (__int64)game_script_unit_GetIndexByPos;
  GameData_2239f80 = 0;
  GameData_2239f70 = 0;
  GameData_2239f78 = 0;
  GameData_2239f88 = 2;
  GameData_2239f90 = (__int64)"int GetIndexByPos(int posX, int posZ)";
  GameData_2239f98 = (__int64)&GameData_2239f20;
  GameData_2239fa0 = (__int64)"unit";
  GameData_2239fa8 = (__int64)game_script_unit_GetPIDByPos;
  GameData_2239fc0 = 0;
  GameData_2239fb0 = 0;
  GameData_2239fb8 = 0;
  GameData_2239fc8 = 2;
  GameData_2239fd0 = (__int64)"string GetPIDByPos(int posX, int posZ)";
  GameData_2239fd8 = (__int64)&GameData_2239f60;
  GameData_2239fe0 = (__int64)"unit";
  GameData_2239fe8 = (__int64)game_script_unit_GetFirstIndexInForce;
  GameData_223a000 = 0;
  GameData_2239ff0 = 0;
  GameData_2239ff8 = 0;
  GameData_223a008 = 2;
  GameData_223a010 = (__int64)"int GetFirstIndexInForce(int force)";
  GameData_223a018 = (__int64)&GameData_2239fa0;
  GameData_223a020 = (__int64)"unit";
  GameData_223a028 = (__int64)game_script_unit_GetNextIndex;
  GameData_223a040 = 0;
  GameData_223a030 = 0;
  GameData_223a038 = 0;
  GameData_223a048 = 2;
  GameData_223a050 = (__int64)"int GetNextIndex(int unitIndex)";
  GameData_223a058 = (__int64)&GameData_2239fe0;
  GameData_223a090 = (__int64)"int GetFirstIndexOnMap()";
  GameData_223a098 = (__int64)&GameData_223a020;
  GameData_223a0c0 = 0;
  GameData_223a0b0 = 0;
  GameData_223a0b8 = 0;
  GameData_223a0c8 = 2;
  GameData_223a0a0 = (__int64)"unit";
  GameData_223a0a8 = (__int64)game_script_unit_GetNextIndexOnMap;
  GameData_223a0d0 = (__int64)"int GetNextIndexOnMap(int unitIndex)";
  GameData_223a0d8 = (__int64)&GameData_223a060;
  GameData_223a0e0 = (__int64)"unit";
  GameData_223a0e8 = (__int64)game_script_unit_IsExist_1177b90;
  GameData_223a100 = 0;
  GameData_223a0f0 = 0;
  GameData_223a0f8 = 0;
  GameData_223a108 = 2;
  GameData_223a1e0 = (__int64)"unit";
  GameData_223a1e8 = (__int64)game_script_unit_IsDead_1177e80;
  GameData_223a200 = 0;
  GameData_223a1f0 = 0;
  GameData_223a1f8 = 0;
  GameData_223a208 = 2;
  GameData_223a110 = (__int64)"bool IsExist(int unitIndex)";
  GameData_223a118 = (__int64)&GameData_223a0a0;
  GameData_223a120 = (__int64)"unit";
  GameData_223a128 = (__int64)game_script_unit_IsExist_1177be0;
  GameData_223a140 = 0;
  GameData_223a130 = 0;
  GameData_223a138 = 0;
  GameData_223a148 = 2;
  GameData_223a150 = (__int64)"bool IsExist(string pid)";
  GameData_223a158 = (__int64)&GameData_223a0e0;
  GameData_223a160 = (__int64)"unit";
  GameData_223a168 = (__int64)game_script_unit_IsExistOnMap_1177cf0;
  GameData_223a180 = 0;
  GameData_223a170 = 0;
  GameData_223a178 = 0;
  GameData_223a188 = 2;
  GameData_223a190 = (__int64)"bool IsExistOnMap(int unitIndex)";
  GameData_223a198 = (__int64)&GameData_223a120;
  GameData_223a1a0 = (__int64)"unit";
  GameData_223a1a8 = (__int64)game_script_unit_IsExistOnMap_1177d60;
  GameData_223a1c0 = 0;
  GameData_223a1b0 = 0;
  GameData_223a1b8 = 0;
  GameData_223a1c8 = 2;
  GameData_223a1d0 = (__int64)"bool IsExistOnMap(string pid)";
  GameData_223a1d8 = (__int64)&GameData_223a160;
  GameData_223a210 = (__int64)"bool IsDead(int unitIndex)";
  GameData_223a218 = (__int64)&GameData_223a1a0;
  GameData_223a240 = 0;
  GameData_223a230 = 0;
  GameData_223a238 = 0;
  GameData_223a248 = 2;
  GameData_223a220 = (__int64)"unit";
  GameData_223a228 = (__int64)game_script_unit_IsDead_1177ee0;
  GameData_223a250 = (__int64)"bool IsDead(string pid)";
  GameData_223a258 = (__int64)&GameData_223a1e0;
  GameData_223a260 = (__int64)"unit";
  GameData_223a268 = (__int64)game_script_unit_GetPID;
  GameData_223a280 = 0;
  GameData_223a270 = 0;
  GameData_223a278 = 0;
  GameData_223a288 = 2;
  GameData_223a360 = (__int64)"unit";
  GameData_223a368 = (__int64)game_script_unit_GetLID_11782c0;
  GameData_223a380 = 0;
  GameData_223a370 = 0;
  GameData_223a378 = 0;
  GameData_223a388 = 2;
  GameData_223a290 = (__int64)"string GetPID(int unitIndex)";
  GameData_223a298 = (__int64)&GameData_223a220;
  GameData_223a4e0 = (__int64)"unit";
  GameData_223a4e8 = (__int64)game_script_unit_status_IsForcePlayer;
  GameData_223a2a0 = (__int64)"unit";
  GameData_223a2a8 = (__int64)game_script_unit_GetJID_1178080;
  GameData_223a2c0 = 0;
  GameData_223a2b0 = 0;
  GameData_223a2b8 = 0;
  GameData_223a2c8 = 2;
  GameData_223a2d0 = (__int64)"string GetJID(int unitIndex)";
  GameData_223a2d8 = (__int64)&GameData_223a260;
  GameData_223a2e0 = (__int64)"unit";
  GameData_223a2e8 = (__int64)game_script_unit_GetJID_11780e0;
  GameData_223a300 = 0;
  GameData_223a2f0 = 0;
  GameData_223a2f8 = 0;
  GameData_223a308 = 2;
  GameData_223a310 = (__int64)"string GetJID(const string& pid)";
  GameData_223a318 = (__int64)&GameData_223a2a0;
  GameData_223a320 = (__int64)"unit";
  GameData_223a328 = (__int64)game_script_unit_GetLID_1178240;
  GameData_223a340 = 0;
  GameData_223a330 = 0;
  GameData_223a338 = 0;
  GameData_223a348 = 2;
  GameData_223a350 = (__int64)"string GetLID(int unitIndex)";
  GameData_223a358 = (__int64)&GameData_223a2e0;
  GameData_223a390 = (__int64)"string GetLID(const string& pid)";
  GameData_223a398 = (__int64)&GameData_223a320;
  GameData_223a3c0 = 0;
  GameData_223a3b0 = 0;
  GameData_223a3b8 = 0;
  GameData_223a3c8 = 2;
  GameData_223a3a0 = (__int64)"unit";
  GameData_223a3a8 = (__int64)game_script_unit_GetName_1178440;
  GameData_223a3d0 = (__int64)"string GetName(int unitIndex)";
  GameData_223a3d8 = (__int64)&GameData_223a360;
  GameData_223a3e0 = (__int64)"unit";
  GameData_223a3e8 = (__int64)game_script_unit_GetName_11784c0;
  GameData_223a400 = 0;
  GameData_223a3f0 = 0;
  GameData_223a3f8 = 0;
  GameData_223a408 = 2;
  GameData_223a410 = (__int64)"string GetName(const string& pid)";
  GameData_223a418 = (__int64)&GameData_223a3a0;
  GameData_223a420 = (__int64)"unit";
  GameData_223a428 = (__int64)game_script_unit_GetForce_1178640;
  GameData_223a440 = 0;
  GameData_223a430 = 0;
  GameData_223a438 = 0;
  GameData_223a448 = 2;
  GameData_223a450 = (__int64)"int GetForce(int unitIndex)";
  GameData_223a458 = (__int64)&GameData_223a3e0;
  GameData_223a460 = (__int64)"unit";
  GameData_223a468 = (__int64)game_script_unit_GetForce_11786a0;
  GameData_223a480 = 0;
  GameData_223a470 = 0;
  GameData_223a478 = 0;
  GameData_223a488 = 2;
  GameData_223a490 = (__int64)"int GetForce(const string& pid)";
  GameData_223a498 = (__int64)&GameData_223a420;
  GameData_223a4d0 = (__int64)"bool IsForcePlayer(int unitIndex)";
  GameData_223a4d8 = (__int64)&GameData_223a460;
  GameData_223a4a0 = (__int64)"unit";
  GameData_223a4a8 = (__int64)game_script_unit_IsForcePlayer;
  GameData_223a4c0 = 0;
  GameData_223a4b0 = 0;
  GameData_223a4b8 = 0;
  GameData_223a4c8 = 2;
  GameData_223a510 = (__int64)"bool IsForcePlayer(const string& pid)";
  GameData_223a518 = (__int64)&GameData_223a4a0;
  v2 = (__int64*)GameData_212bf40[0];
  v3 = *(_QWORD*)GameData_212bf40[0];
  GameData_223a520 = (__int64)"unit::status";
  GameData_223a528 = (__int64)"const as_s32 Fixed";
  GameData_223b988 = 2;
  GameData_223b980 = 0;
  GameData_223b970 = 0;
  GameData_223b978 = 0;
  GameData_223a590 = (__int64)&GameData_1bb495c;
  GameData_223a598 = (__int64)&GameData_223a560;
  GameData_223b8b0 = 0;
  GameData_223b8b8 = 0;
  GameData_223b8c8 = 2;
  GameData_223b8c0 = 0;
  GameData_223a830 = (__int64)"int GetLevel(int unitIndex)";
  GameData_223a838 = (__int64)&GameData_223a7c0;
  GameData_223a930 = (__int64)"void SetHp(int unitIndex, int hp)";
  GameData_223a938 = (__int64)&GameData_223a8c0;
  GameData_223a8b0 = (__int64)"int GetHp(int unitIndex)";
  GameData_223a8b8 = (__int64)&GameData_223a840;
  *(_QWORD*)GameData_212bf40[0] = &GameData_223a5e0;
  GameData_223a990 = 0;
  GameData_223a998 = 0;
  GameData_223a9a8 = 2;
  GameData_223a9a0 = 0;
  GameData_223a950 = 0;
  GameData_223a958 = 0;
  GameData_223a968 = 2;
  GameData_223a960 = 0;
  GameData_223a910 = 0;
  GameData_223a918 = 0;
  GameData_223a928 = 2;
  GameData_223a920 = 0;
  GameData_223a8d0 = 0;
  GameData_223a8d8 = 0;
  GameData_223a8e8 = 2;
  GameData_223a8e0 = 0;
  GameData_223a890 = 0;
  GameData_223a898 = 0;
  GameData_223a8a8 = 2;
  GameData_223a8a0 = 0;
  GameData_223a868 = 2;
  GameData_223a860 = 0;
  GameData_223a850 = 0;
  GameData_223a858 = 0;
  GameData_223a828 = 2;
  GameData_223a820 = 0;
  GameData_223a810 = 0;
  GameData_223a818 = 0;
  GameData_223a7e0 = 0;
  GameData_223a7d0 = 0;
  GameData_223a7d8 = 0;
  GameData_223a7e8 = 2;
  GameData_223a500 = 0;
  GameData_223a4f0 = 0;
  GameData_223a4f8 = 0;
  GameData_223a508 = 2;
  GameData_223a530 = (__int64)&GameData_1bb4950;
  GameData_223a538 = v3;
  GameData_223a540 = (__int64)"unit::status";
  GameData_223a548 = (__int64)"const as_s32 NotMove";
  GameData_223a550 = (__int64)&GameData_1bb4954;
  GameData_223a558 = (__int64)&GameData_223a520;
  GameData_223a560 = (__int64)"unit::status";
  GameData_223a568 = (__int64)"const as_s32 MustSortie";
  GameData_223a5a0 = (__int64)"unit::status";
  GameData_223a5a8 = (__int64)"const as_s32 DontPosChange";
  GameData_223a5b8 = (__int64)&GameData_223a580;
  GameData_223a570 = (__int64)&GameData_1bb4958;
  GameData_223a578 = (__int64)&GameData_223a540;
  GameData_223b8a0 = (__int64)"unit::dir";
  GameData_223b8a8 = (__int64)game_script_unit_dir_Get;
  GameData_223a580 = (__int64)"unit::status";
  GameData_223a588 = (__int64)"const as_s32 NeverSortie";
  GameData_223b990 = (__int64)"void Set(const string& pid, int dir)";
  GameData_223b998 = (__int64)&GameData_223b920;
  GameData_223b948 = 2;
  GameData_223b940 = 0;
  GameData_223b930 = 0;
  GameData_223b938 = 0;
  GameData_223b848 = 2;
  GameData_223b840 = 0;
  GameData_223b830 = 0;
  GameData_223b838 = 0;
  GameData_223b950 = (__int64)"void Set(int unitIndex, int dir)";
  GameData_223b958 = (__int64)&GameData_223b8e0;
  GameData_223b9d8 = (__int64)&GameData_223b960;
  GameData_223b8e0 = (__int64)"unit::dir";
  GameData_223b8e8 = (__int64)UnitNatives_117da60;
  GameData_223b900 = 0;
  GameData_223b8f0 = 0;
  GameData_223b8f8 = 0;
  GameData_223b908 = 2;
  GameData_223b7c0 = 0;
  GameData_223b7b0 = 0;
  GameData_223b7b8 = 0;
  GameData_223b7c8 = 2;
  GameData_223b9a0 = (__int64)"unit::dir";
  GameData_223b9a8 = (__int64)unit_dir_SetByPos_117e020;
  GameData_223b9c0 = 0;
  GameData_223b9b0 = 0;
  GameData_223b9b8 = 0;
  GameData_223b9c8 = 2;
  GameData_223b960 = (__int64)"unit::dir";
  GameData_223b968 = (__int64)unit_dir_Set;
  GameData_223b920 = (__int64)"unit::dir";
  GameData_223b928 = (__int64)game_script_unit_dir_Set;
  GameData_223a9d0 = 0;
  GameData_223a9d8 = 0;
  GameData_223a9e8 = 2;
  GameData_223a9e0 = 0;
  GameData_223b910 = (__int64)"int Get(const string& pid)";
  GameData_223b918 = (__int64)&GameData_223b8a0;
  GameData_223aa30 = (__int64)"int GetHpStock(int unitIndex)";
  GameData_223aa38 = (__int64)&GameData_223a9c0;
  GameData_223aa10 = 0;
  GameData_223aa18 = 0;
  GameData_223aa28 = 2;
  GameData_223aa20 = 0;
  GameData_223b8d0 = (__int64)"int Get(int unitIndex)";
  GameData_223b8d8 = (__int64)&GameData_223b860;
  GameData_223b870 = 0;
  GameData_223b878 = 0;
  GameData_223b888 = 2;
  GameData_223b880 = 0;
  GameData_223b890 = (__int64)"void MoveWait()";
  GameData_223b898 = (__int64)&GameData_223b820;
  GameData_223b780 = 0;
  GameData_223b770 = 0;
  GameData_223b778 = 0;
  GameData_223b788 = 2;
  GameData_223b850 = (__int64)"void WarpOut(int unitIndex, int warpType, const "
                              "string& effect)";
  GameData_223b858 = (__int64)&GameData_223b7e0;
  GameData_223b800 = 0;
  GameData_223b7f0 = 0;
  GameData_223b7f8 = 0;
  GameData_223b808 = 2;
  GameData_223b860 = (__int64)"unit::pos";
  GameData_223b868 = (__int64)UnitNatives_117d4a0;
  GameData_223b810 =
      (__int64)"void Warp(int unitIndex, int x, int z, int warpType, const "
               "string& effectOut, const string& effectIn)";
  GameData_223b818 = (__int64)&GameData_223b7a0;
  GameData_223b820 = (__int64)"unit::pos";
  GameData_223b828 = (__int64)UnitNatives_117d280;
  GameData_223b7d0 =
      (__int64)"void MoveForce(const string& pid, int x, int z, uint moveFlag)";
  GameData_223b7d8 = (__int64)&GameData_223b760;
  GameData_223b748 = 2;
  GameData_223b740 = 0;
  GameData_223b730 = 0;
  GameData_223b738 = 0;
  GameData_223b7e0 = (__int64)"unit::pos";
  GameData_223b7e8 = (__int64)UnitNatives_117d000;
  GameData_223b7a0 = (__int64)"unit::pos";
  GameData_223b7a8 = (__int64)game_script_unit_pos_MoveForce_117cea0;
  GameData_223b580 = 0;
  GameData_223b570 = 0;
  GameData_223b578 = 0;
  GameData_223b588 = 2;
  GameData_223b760 = (__int64)"unit::pos";
  GameData_223b768 = (__int64)game_script_unit_pos_MoveForce_117ce40;
  GameData_223b790 =
      (__int64)"void MoveForce(int unitIndex, int x, int z, uint moveFlag)";
  GameData_223b798 = (__int64)&GameData_223b720;
  GameData_223b750 =
      (__int64)"void Move(const string& pid, int x, int z, uint moveFlag)";
  GameData_223b758 = (__int64)&GameData_223b6e0;
  GameData_223b708 = 2;
  GameData_223b6e0 = (__int64)"unit::pos";
  GameData_223b6e8 = (__int64)game_script_unit_pos_Move_117cc70;
  GameData_223b700 = 0;
  GameData_223b6f0 = 0;
  GameData_223b6f8 = 0;
  GameData_223b710 =
      (__int64)"void Move(int unitIndex, int x, int z, uint moveFlag)";
  GameData_223b718 = (__int64)&GameData_223b560;
  GameData_223b6c0 = (__int64)"unit::pos";
  GameData_223b6c8 = (__int64)"const as_s32 WarpType_Shadow";
  GameData_223b720 = (__int64)"unit::pos";
  GameData_223b728 = (__int64)game_script_unit_pos_Move_117cce0;
  GameData_223b6d0 = (__int64)&GameData_1bb4994;
  GameData_223b6d8 = (__int64)&GameData_223b6a0;
  GameData_223b6a0 = (__int64)"unit::pos";
  GameData_223b6a8 = (__int64)"const as_s32 WarpType_Phantom";
  GameData_223b6b0 = (__int64)&GameData_1bb4990;
  GameData_223b6b8 = (__int64)&GameData_223b680;
  GameData_223b680 = (__int64)"unit::pos";
  GameData_223b688 = (__int64)"const as_s32 WarpType_Song";
  GameData_223b690 = (__int64)&GameData_1bb498c;
  GameData_223b698 = (__int64)&GameData_223b660;
  GameData_223b660 = (__int64)"unit::pos";
  GameData_223b668 = (__int64)"const as_s32 WarpType_Conron";
  GameData_223b670 = (__int64)&GameData_1bb4988;
  GameData_223b678 = (__int64)&GameData_223b640;
  GameData_223b650 = (__int64)&GameData_1bb4984;
  GameData_223b658 = (__int64)&GameData_223b620;
  GameData_223b620 = (__int64)"unit::pos";
  GameData_223b628 = (__int64)"const as_s32 WarpType_Warp";
  GameData_223b630 = (__int64)&GameData_1bb4980;
  GameData_223b638 = (__int64)&GameData_223b600;
  GameData_223b640 = (__int64)"unit::pos";
  GameData_223b648 = (__int64)"const as_s32 WarpType_Mesaia";
  v4 = *v2;
  GameData_223b600 = (__int64)"unit::pos";
  GameData_223b608 = (__int64)"const as_s32 WarpType_None";
  GameData_223b610 = (__int64)&GameData_1bb497c;
  GameData_223b618 = (__int64)&GameData_223b5e0;
  GameData_223b5c0 = (__int64)"unit::pos";
  GameData_223b5c8 = (__int64)"const as_s32 MoveFlag_Focus";
  GameData_223b5e0 = (__int64)"unit::pos";
  GameData_223b5e8 = (__int64)"const as_s32 MoveFlag_Escape";
  GameData_223b5d0 = (__int64)&GameData_1bb4974;
  GameData_223b5d8 = (__int64)&GameData_223b5a0;
  *v2 = (__int64)&GameData_223b080;
  *v2 = (__int64)&GameData_223b6c0;
  GameData_223b5f0 = (__int64)&GameData_1bb4978;
  GameData_223b5f8 = (__int64)&GameData_223b5c0;
  GameData_223a9b0 = (__int64)"int GetMaxHp(int unitIndex)";
  GameData_223a9b8 = (__int64)&GameData_223a940;
  GameData_223b5b0 = (__int64)&GameData_1bb4970;
  GameData_223b5b8 = (__int64)&GameData_223b080;
  GameData_223b5a0 = (__int64)"unit::pos";
  GameData_223b5a8 = (__int64)"const as_s32 MoveFlag_None";
  GameData_223b560 = (__int64)"unit::pos";
  GameData_223b568 = (__int64)game_script_unit_pos_Set_117cb20;
  GameData_223b590 = (__int64)"void Set(const string& pid, int x, int z)";
  GameData_223b598 = (__int64)&GameData_223b520;
  GameData_223b540 = 0;
  GameData_223b530 = 0;
  GameData_223b538 = 0;
  GameData_223b548 = 2;
  GameData_223b3c0 = 0;
  GameData_223b3b0 = 0;
  GameData_223b3b8 = 0;
  GameData_223b3c8 = 2;
  GameData_223b550 = (__int64)"void Set(int unitIndex, int x, int z)";
  GameData_223b558 = (__int64)&GameData_223b4e0;
  GameData_223b4f0 = 0;
  GameData_223b4f8 = 0;
  GameData_223b508 = 2;
  GameData_223b500 = 0;
  GameData_223b480 = 0;
  GameData_223b470 = 0;
  GameData_223b478 = 0;
  GameData_223b488 = 2;
  GameData_223b520 = (__int64)"unit::pos";
  GameData_223b528 = (__int64)game_script_unit_pos_Set_117cad0;
  GameData_223b510 = (__int64)"int GetZ(const string& pid)";
  GameData_223b518 = (__int64)&GameData_223b4a0;
  GameData_223b4c8 = 2;
  GameData_223b4c0 = 0;
  GameData_223b4b0 = 0;
  GameData_223b4b8 = 0;
  GameData_223b4d0 = (__int64)"int GetZ(int unitIndex)";
  GameData_223b4d8 = (__int64)&GameData_223b460;
  GameData_223b4e0 = (__int64)"unit::pos";
  GameData_223b4e8 = (__int64)game_script_unit_pos_GetZ_117c980;
  GameData_223b460 = (__int64)"unit::pos";
  GameData_223b468 = (__int64)game_script_unit_pos_GetX_117c7c0;
  GameData_223b200 = 0;
  GameData_223b1f0 = 0;
  GameData_223b1f8 = 0;
  GameData_223b208 = 2;
  GameData_223b4a0 = (__int64)"unit::pos";
  GameData_223b4a8 = (__int64)game_script_unit_pos_GetZ_117c910;
  GameData_223b490 = (__int64)"int GetX(const string& pid)";
  GameData_223b498 = (__int64)&GameData_223b420;
  GameData_223b430 = 0;
  GameData_223b438 = 0;
  GameData_223b448 = 2;
  GameData_223b420 = (__int64)"unit::pos";
  GameData_223b428 = (__int64)game_script_unit_pos_GetX_117c760;
  GameData_223b440 = 0;
  GameData_223b410 = (__int64)"void SetEnduranceItem(const string& pid, const "
                              "string& iid, int count)";
  GameData_223b418 = (__int64)&GameData_223b3a0;
  GameData_223b408 = 2;
  GameData_223b400 = 0;
  GameData_223b3f0 = 0;
  GameData_223b3f8 = 0;
  GameData_223b450 = (__int64)"int GetX(int unitIndex)";
  GameData_223b458 = (__int64)&GameData_223b3e0;
  GameData_223b3a0 = (__int64)"unit::item";
  GameData_223b3a8 = (__int64)game_script_unit_item_SetEnduranceItem_117c360;
  GameData_223b250 = (__int64)"void Equip(int unitIndex, const string& iid)";
  GameData_223b258 = (__int64)&GameData_223b1e0;
  GameData_223b240 = 0;
  GameData_223b230 = 0;
  GameData_223b238 = 0;
  GameData_223b248 = 2;
  GameData_223b3e0 = (__int64)"unit::item";
  GameData_223b3e8 = (__int64)game_script_unit_item_SetEnduranceItem_117c4e0;
  GameData_223b390 =
      (__int64)"void PutOff(const string& pid, const string& iid)";
  GameData_223b398 = (__int64)&GameData_223b320;
  GameData_223b3d0 = (__int64)"void SetEnduranceItem(int unitIndex, const "
                              "string& iid, int count)";
  GameData_223b3d8 = (__int64)&GameData_223b360;
  GameData_223b380 = 0;
  GameData_223b370 = 0;
  GameData_223b378 = 0;
  GameData_223b388 = 2;
  GameData_223b330 = 0;
  GameData_223b338 = 0;
  GameData_223b348 = 2;
  GameData_223b340 = 0;
  GameData_223b360 = (__int64)"unit::item";
  GameData_223b368 = (__int64)GameRoutine_117c200;
  GameData_223b2c0 = 0;
  GameData_223b2b0 = 0;
  GameData_223b2b8 = 0;
  GameData_223b2c8 = 2;
  GameData_223b350 = (__int64)"void PutOff(int unitIndex, const string& iid)";
  GameData_223b358 = (__int64)&GameData_223b2e0;
  GameData_223b308 = 2;
  GameData_223b300 = 0;
  GameData_223b2f0 = 0;
  GameData_223b2f8 = 0;
  GameData_223b310 = (__int64)"void Add(const string& pid, const string& iid, "
                              "bool isSetDrop = false)";
  GameData_223b318 = (__int64)&GameData_223b2a0;
  GameData_223b320 = (__int64)"unit::item";
  GameData_223b328 = (__int64)GameRoutine_117c190;
  GameData_223b2d0 = (__int64)"void Add(int unitIndex, const string& iid, bool "
                              "isSetDrop = false)";
  GameData_223aa50 = 0;
  GameData_223aa58 = 0;
  GameData_223aa68 = 2;
  GameData_223aa60 = 0;
  GameData_223b2e0 = (__int64)"unit::item";
  GameData_223b2e8 = (__int64)UnitNatives_117bf80;
  GameData_223b2d8 = (__int64)&GameData_223b260;
  GameData_223b2a0 = (__int64)"unit::item";
  GameData_223b2a8 = (__int64)UnitNatives_117be60;
  GameData_223b280 = 0;
  GameData_223b270 = 0;
  GameData_223b278 = 0;
  GameData_223b288 = 2;
  GameData_223b260 = (__int64)"unit::item";
  GameData_223b268 = (__int64)GameRoutine_117bd00;
  GameData_223aa40 = (__int64)"unit::ability";
  GameData_223aa48 = (__int64)game_script_unit_ability_GetHpStock_1179ac0;
  GameData_223b290 =
      (__int64)"void Equip(const string& pid, const string& iid)";
  GameData_223b298 = (__int64)&GameData_223b220;
  GameData_223aa70 = (__int64)"int GetHpStock(const string& pid)";
  GameData_223aa78 = (__int64)&GameData_223aa00;
  GameData_223aab8 = (__int64)&GameData_223aa40;
  GameData_223b220 = (__int64)"unit::item";
  GameData_223b228 = (__int64)GameRoutine_117bca0;
  GameData_223b1c0 = 0;
  GameData_223b1b0 = 0;
  GameData_223b1b8 = 0;
  GameData_223b1c8 = 2;
  GameData_223aaa0 = 0;
  GameData_223aa90 = 0;
  GameData_223aa98 = 0;
  GameData_223aaa8 = 2;
  GameData_223a9c0 = (__int64)"unit::ability";
  GameData_223a9c8 = (__int64)game_script_unit_ability_GetMaxHp_1179920;
  GameData_223b210 = (__int64)"string GetEquipIID(const string& pid)";
  GameData_223b218 = (__int64)&GameData_223b1a0;
  GameData_223aab0 = (__int64)"int GetPollution(int unitIndex)";
  GameData_223a970 = (__int64)"void SetHp(const string& pid, int hp)";
  GameData_223a978 = (__int64)&GameData_223a900;
  GameData_223a9f0 = (__int64)"int GetMaxHp(const string& pid)";
  GameData_223a9f8 = (__int64)&GameData_223a980;
  GameData_223a980 = (__int64)"unit::ability";
  GameData_223a988 = (__int64)game_script_unit_ability_GetMaxHp_11798c0;
  GameData_223aa00 = (__int64)"unit::ability";
  GameData_223aa08 = (__int64)game_script_unit_ability_GetHpStock_1179a60;
  GameData_223a940 = (__int64)"unit::ability";
  GameData_223a948 = (__int64)game_script_unit_ability_SetHp_1179680;
  GameData_223a5b0 = (__int64)&GameData_1bb4960;
  GameData_223a5c0 = (__int64)"unit::status";
  GameData_223a5c8 = (__int64)"const as_s32 DangerShowing";
  GameData_223a5d0 = (__int64)&GameData_1bb4964;
  GameData_223a5d8 = (__int64)&GameData_223a5a0;
  GameData_223a8f0 = (__int64)"int GetHp(const string& pid)";
  GameData_223a8f8 = (__int64)&GameData_223a880;
  GameData_223a5e0 = (__int64)"unit::status";
  GameData_223a5e8 = (__int64)"const as_s32 SightOut";
  GameData_223a900 = (__int64)"unit::ability";
  GameData_223a908 = (__int64)game_script_unit_ability_SetHp_1179530;
  GameData_223a8c0 = (__int64)"unit::ability";
  GameData_223a8c8 = (__int64)game_script_unit_ability_GetHp_1179400;
  GameData_223a5f0 = (__int64)&GameData_1bb4968;
  GameData_223a5f8 = (__int64)&GameData_223a5c0;
  GameData_223a870 = (__int64)"int GetLevel(const string& pid)";
  GameData_223a878 = (__int64)&GameData_223a800;
  GameData_223a600 = (__int64)"unit::status";
  GameData_223a608 = (__int64)game_script_unit_status_Check_1178940;
  GameData_223a620 = 0;
  GameData_223a610 = 0;
  GameData_223a618 = 0;
  GameData_223a628 = 2;
  GameData_223c140 = 0;
  GameData_223c130 = 0;
  GameData_223c138 = 0;
  GameData_223a880 = (__int64)"unit::ability";
  GameData_223a888 = (__int64)game_script_unit_ability_GetHp_11793b0;
  GameData_223aa80 = (__int64)"unit::ability";
  GameData_223aa88 = (__int64)game_script_unit_ability_GetPollution_1179bf0;
  GameData_223a840 = (__int64)"unit::ability";
  GameData_223a848 = (__int64)game_script_unit_ability_GetLevel_1179280;
  GameData_223aac0 = (__int64)"unit::ability";
  GameData_223aac8 = (__int64)game_script_unit_ability_GetPollution_1179c40;
  GameData_223aae0 = 0;
  GameData_223aad0 = 0;
  GameData_223aad8 = 0;
  GameData_223aae8 = 2;
  GameData_223a7f0 = (__int64)"void UpdateLearn(const string& pid)";
  GameData_223a7f8 = (__int64)&GameData_223a780;
  GameData_223a7a0 = 0;
  GameData_223a790 = 0;
  GameData_223a798 = 0;
  GameData_223a7a8 = 2;
  GameData_223aaf0 = (__int64)"int GetPollution(const string& pid)";
  GameData_223aaf8 = (__int64)&GameData_223aa80;
  GameData_223a630 = (__int64)"bool Check(int unitIndex, uint unitStatus)";
  GameData_223a638 = (__int64)&GameData_223a4e0;
  GameData_223a800 = (__int64)"unit::ability";
  GameData_223a808 = (__int64)game_script_unit_ability_GetLevel_1179230;
  GameData_223ab20 = 0;
  GameData_223ab10 = 0;
  GameData_223ab18 = 0;
  GameData_223ab28 = 2;
  GameData_223a7b0 = (__int64)"void UpdateLearn(int unitIndex)";
  GameData_223a7b8 = (__int64)&GameData_223a740;
  GameData_223a760 = 0;
  GameData_223a750 = 0;
  GameData_223a758 = 0;
  GameData_223a768 = 2;
  GameData_223a7c0 = (__int64)"unit";
  GameData_223a7c8 = (__int64)game_script_unit_ability_UpdateLearn;
  GameData_223a780 = (__int64)"unit";
  GameData_223a788 = (__int64)game_script_unit_UpdateLearn;
  GameData_223a660 = 0;
  GameData_223a650 = 0;
  GameData_223a658 = 0;
  GameData_223a668 = 2;
  GameData_223a740 = (__int64)"unit::status";
  GameData_223a748 = (__int64)game_script_unit_Clear;
  GameData_223a710 = 0;
  GameData_223a718 = 0;
  GameData_223a728 = 2;
  GameData_223a720 = 0;
  GameData_223a770 = (__int64)"void Clear(const string& pid, int unitStatus)";
  GameData_223a778 = (__int64)&GameData_223a700;
  GameData_223a730 = (__int64)"void Clear(int unitIndex, uint unitStatus)";
  GameData_223a738 = (__int64)&GameData_223a6c0;
  GameData_223a670 = (__int64)"bool Check(const string& pid, uint unitStatus)";
  GameData_223a678 = (__int64)&GameData_223a600;
  GameData_223a6e8 = 2;
  GameData_223a6e0 = 0;
  GameData_223a6d0 = 0;
  GameData_223a6d8 = 0;
  GameData_223a6f0 = (__int64)"void Set(const string& pid, uint unitStatus)";
  GameData_223a6f8 = (__int64)&GameData_223a680;
  GameData_223a680 = (__int64)"unit::status";
  GameData_223a688 = (__int64)game_script_unit_status_Set_1178af0;
  GameData_223a6a0 = 0;
  GameData_223a690 = 0;
  GameData_223a698 = 0;
  GameData_223a6a8 = 2;
  GameData_223a700 = (__int64)"unit::status";
  GameData_223a708 = (__int64)game_script_unit_status_Clear;
  GameData_223a640 = (__int64)"unit::status";
  GameData_223a648 = (__int64)game_script_unit_status_Check_11789a0;
  GameData_223a6b0 = (__int64)"void Set(int unitIndex, uint unitStatus)";
  GameData_223a6b8 = (__int64)&GameData_223a640;
  v5 = *v2;
  *v2 = (__int64)&GameData_223c5c0;
  GameData_223a6c0 = (__int64)"unit::status";
  GameData_223a6c8 = (__int64)game_script_unit_status_Set_1178bc0;
  GameData_223ab00 = (__int64)"unit::ability";
  GameData_223ab08 = (__int64)unit_ability_SetPollution_1179d70;
  GameData_223ab30 = (__int64)"void SetPollution(int unitIndex, int pollution)";
  GameData_223ab38 = (__int64)&GameData_223aac0;
  GameData_223ab40 = (__int64)"unit::ability";
  GameData_223ab48 = (__int64)unit_ability_SetPollution_117a1a0;
  GameData_223ab60 = 0;
  GameData_223ab50 = 0;
  GameData_223ab58 = 0;
  GameData_223ab68 = 2;
  GameData_223ab70 =
      (__int64)"void SetPollution(const string& pid, int pollution)";
  GameData_223ab78 = (__int64)&GameData_223ab00;
  GameData_223ab80 = (__int64)"unit::ability";
  GameData_223ab88 = (__int64)game_script_unit_ability_GetStr_117a690;
  GameData_223aba0 = 0;
  GameData_223ab90 = 0;
  GameData_223ab98 = 0;
  GameData_223aba8 = 2;
  GameData_223abb0 = (__int64)"int GetStr(int unitIndex)";
  GameData_223abb8 = (__int64)&GameData_223ab40;
  GameData_223abc0 = (__int64)"unit::ability";
  GameData_223abc8 = (__int64)game_script_unit_ability_GetStr_117a700;
  GameData_223abe0 = 0;
  GameData_223abd0 = 0;
  GameData_223abd8 = 0;
  GameData_223abe8 = 2;
  GameData_223abf0 = (__int64)"int GetStr(const string& pid)";
  GameData_223abf8 = (__int64)&GameData_223ab80;
  GameData_223ac00 = (__int64)"unit::ability";
  GameData_223ac08 = (__int64)game_script_unit_ability_GetMagic_117a840;
  GameData_223ac20 = 0;
  GameData_223ac10 = 0;
  GameData_223ac18 = 0;
  GameData_223ac28 = 2;
  GameData_223ac30 = (__int64)"int GetMagic(int unitIndex)";
  GameData_223ac38 = (__int64)&GameData_223abc0;
  GameData_223ac40 = (__int64)"unit::ability";
  GameData_223ac48 = (__int64)game_script_unit_ability_GetMagic_117a8a0;
  GameData_223ac60 = 0;
  GameData_223ac50 = 0;
  GameData_223ac58 = 0;
  GameData_223ac68 = 2;
  GameData_223ac70 = (__int64)"int GetMagic(const string& pid)";
  GameData_223ac78 = (__int64)&GameData_223ac00;
  GameData_223ac80 = (__int64)"unit::ability";
  GameData_223ac88 = (__int64)game_script_unit_ability_GetTech_117a9e0;
  GameData_223aca0 = 0;
  GameData_223ac90 = 0;
  GameData_223ac98 = 0;
  GameData_223aca8 = 2;
  GameData_223acb0 = (__int64)"int GetTech(int unitIndex)";
  GameData_223acb8 = (__int64)&GameData_223ac40;
  GameData_223acc0 = (__int64)"unit::ability";
  GameData_223acc8 = (__int64)game_script_unit_ability_GetTech_117aa40;
  GameData_223ace0 = 0;
  GameData_223acd0 = 0;
  GameData_223acd8 = 0;
  GameData_223ace8 = 2;
  GameData_223acf0 = (__int64)"int GetTech(const string& pid)";
  GameData_223acf8 = (__int64)&GameData_223ac80;
  GameData_223ad00 = (__int64)"unit::ability";
  GameData_223ad08 = (__int64)game_script_unit_ability_GetQuick_117ab80;
  GameData_223ad20 = 0;
  GameData_223ad10 = 0;
  GameData_223ad18 = 0;
  GameData_223ad28 = 2;
  GameData_223ad30 = (__int64)"int GetQuick(int unitIndex)";
  GameData_223ad38 = (__int64)&GameData_223acc0;
  GameData_223ad40 = (__int64)"unit::ability";
  GameData_223ad48 = (__int64)game_script_unit_ability_GetQuick_117abe0;
  GameData_223ad60 = 0;
  GameData_223ad50 = 0;
  GameData_223ad58 = 0;
  GameData_223ad68 = 2;
  GameData_223ad70 = (__int64)"int GetQuick(const string& pid)";
  GameData_223ad78 = (__int64)&GameData_223ad00;
  GameData_223ad80 = (__int64)"unit::ability";
  GameData_223ad88 = (__int64)game_script_unit_ability_GetLuck_117ad20;
  GameData_223ada0 = 0;
  GameData_223ad90 = 0;
  GameData_223ad98 = 0;
  GameData_223ada8 = 2;
  GameData_223adb0 = (__int64)"int GetLuck(int unitIndex)";
  GameData_223adb8 = (__int64)&GameData_223ad40;
  GameData_223adc0 = (__int64)"unit::ability";
  GameData_223adc8 = (__int64)game_script_unit_ability_GetLuck_117ad80;
  GameData_223ade0 = 0;
  GameData_223add0 = 0;
  GameData_223add8 = 0;
  GameData_223ade8 = 2;
  GameData_223adf0 = (__int64)"int GetLuck(const string& pid)";
  GameData_223adf8 = (__int64)&GameData_223ad80;
  GameData_223ae00 = (__int64)"unit::ability";
  GameData_223ae08 = (__int64)game_script_unit_ability_GetDef_117aec0;
  GameData_223ae20 = 0;
  GameData_223ae10 = 0;
  GameData_223ae18 = 0;
  GameData_223ae28 = 2;
  GameData_223ae30 = (__int64)"int GetDef(int unitIndex)";
  GameData_223ae38 = (__int64)&GameData_223adc0;
  GameData_223ae40 = (__int64)"unit::ability";
  GameData_223ae48 = (__int64)game_script_unit_ability_GetDef_117af20;
  GameData_223ae60 = 0;
  GameData_223ae50 = 0;
  GameData_223ae58 = 0;
  GameData_223ae68 = 2;
  GameData_223ae70 = (__int64)"int GetDef(const string& pid)";
  GameData_223ae78 = (__int64)&GameData_223ae00;
  GameData_223ae80 = (__int64)"unit::ability";
  GameData_223ae88 = (__int64)game_script_unit_ability_GetMdef_117b060;
  GameData_223aea0 = 0;
  GameData_223ae90 = 0;
  GameData_223ae98 = 0;
  GameData_223aea8 = 2;
  GameData_223aeb0 = (__int64)"int GetMdef(int unitIndex)";
  GameData_223aeb8 = (__int64)&GameData_223ae40;
  GameData_223aec0 = (__int64)"unit::ability";
  GameData_223aec8 = (__int64)game_script_unit_ability_GetMdef_117b0c0;
  GameData_223aee0 = 0;
  GameData_223aed0 = 0;
  GameData_223aed8 = 0;
  GameData_223aee8 = 2;
  GameData_223aef0 = (__int64)"int GetMdef(const string& pid)";
  GameData_223aef8 = (__int64)&GameData_223ae80;
  GameData_223af00 = (__int64)"unit::ability";
  GameData_223af08 = (__int64)game_script_unit_ability_GetCharm_117b200;
  GameData_223af20 = 0;
  GameData_223af10 = 0;
  GameData_223af18 = 0;
  GameData_223af28 = 2;
  GameData_223af30 = (__int64)"int GetCharm(int unitIndex)";
  GameData_223af38 = (__int64)&GameData_223aec0;
  GameData_223af40 = (__int64)"unit::ability";
  GameData_223af48 = (__int64)game_script_unit_ability_GetCharm_117b260;
  GameData_223af60 = 0;
  GameData_223af50 = 0;
  GameData_223af58 = 0;
  GameData_223af68 = 2;
  GameData_223af70 = (__int64)"int GetCharm(const string& pid)";
  GameData_223af78 = (__int64)&GameData_223af00;
  GameData_223af80 = (__int64)"unit::ability";
  GameData_223af88 = (__int64)game_script_unit_ability_GetMoveType_117b3a0;
  GameData_223afa0 = 0;
  GameData_223af90 = 0;
  GameData_223af98 = 0;
  GameData_223afa8 = 2;
  GameData_223afb0 = (__int64)"int GetMoveType(int unitIndex)";
  GameData_223afb8 = (__int64)&GameData_223af40;
  GameData_223afc0 = (__int64)"unit::ability";
  GameData_223afc8 = (__int64)game_script_unit_ability_GetMoveType_117b400;
  GameData_223afe0 = 0;
  GameData_223afd0 = 0;
  GameData_223afd8 = 0;
  GameData_223afe8 = 2;
  GameData_223aff0 = (__int64)"int GetMoveType(const string& pid)";
  GameData_223aff8 = (__int64)&GameData_223af80;
  GameData_223b000 = (__int64)"unit::ability";
  GameData_223b008 = (__int64)game_script_unit_ability_GetSize;
  GameData_223b020 = 0;
  GameData_223b010 = 0;
  GameData_223b018 = 0;
  GameData_223b028 = 2;
  GameData_223b030 = (__int64)"int GetSize(int unitIndex)";
  GameData_223b038 = (__int64)&GameData_223afc0;
  GameData_223b040 = (__int64)"unit::ability";
  GameData_223b048 = (__int64)game_script_unit_item_GetSize;
  GameData_223b060 = 0;
  GameData_223b050 = 0;
  GameData_223b058 = 0;
  GameData_223b068 = 2;
  GameData_223b070 = (__int64)"int GetSize(const string& pid)";
  GameData_223b078 = (__int64)&GameData_223b000;
  GameData_223b080 = (__int64)"unit::item";
  GameData_223b088 = (__int64)"const as_s32 UnitItemMax";
  GameData_223b090 = (__int64)&GameData_1bb496c;
  GameData_223b098 = v4;
  GameData_223b0a0 = (__int64)"unit::item";
  GameData_223b0a8 = (__int64)game_script_unit_item_IsPossession_117b6d0;
  GameData_223b0c0 = 0;
  GameData_223b0b0 = 0;
  GameData_223b0b8 = 0;
  GameData_223b0c8 = 2;
  GameData_223c9c0 = 0;
  GameData_223b0d0 =
      (__int64)"bool IsPossession(int unitIndex, const string& iid)";
  GameData_223b0d8 = (__int64)&GameData_223b040;
  GameData_223b0e0 = (__int64)"unit::item";
  GameData_223b0e8 = (__int64)game_script_unit_item_IsPossession_117b740;
  GameData_223b100 = 0;
  GameData_223b0f0 = 0;
  GameData_223b0f8 = 0;
  GameData_223b108 = 2;
  GameData_223b110 =
      (__int64)"bool IsPossession(const string& pid, const string& iid)";
  GameData_223b118 = (__int64)&GameData_223b0a0;
  GameData_223b120 = (__int64)"unit::item";
  GameData_223b128 = (__int64)game_script_unit_item_GetPossetionIID_117b8a0;
  GameData_223b140 = 0;
  GameData_223b130 = 0;
  GameData_223b138 = 0;
  GameData_223b148 = 2;
  GameData_223b150 =
      (__int64)"string GetPossetionIID(int unitIndex, int unitItemIndex)";
  GameData_223b158 = (__int64)&GameData_223b0e0;
  GameData_223b160 = (__int64)"unit::item";
  GameData_223b168 = (__int64)game_script_unit_item_GetPossetionIID_117b920;
  GameData_223b180 = 0;
  GameData_223b170 = 0;
  GameData_223b178 = 0;
  GameData_223b188 = 2;
  GameData_223b190 =
      (__int64)"string GetPossetionIID(const string& pid, int unitItemIndex)";
  GameData_223b198 = (__int64)&GameData_223b120;
  GameData_223b1a0 = (__int64)"unit::item";
  GameData_223b1a8 = (__int64)game_script_unit_item_GetEquipIID_117baa0;
  GameData_223b1d0 = (__int64)"string GetEquipIID(int unitIndex)";
  GameData_223b1d8 = (__int64)&GameData_223b160;
  GameData_223b1e0 = (__int64)"unit::item";
  GameData_223b1e8 = (__int64)game_script_unit_item_GetEquipIID_117bb20;
  GameData_223b9d0 = (__int64)"void SetByPos(int unitIndex, int x, int z)";
  GameData_223b9e0 = (__int64)"unit::dir";
  GameData_223b9e8 = (__int64)unit_dir_SetByPos_117e1c0;
  GameData_223ba00 = 0;
  GameData_223b9f0 = 0;
  GameData_223b9f8 = 0;
  GameData_223ba08 = 2;
  GameData_223ba58 = (__int64)&GameData_223b9e0;
  GameData_223ba40 = 0;
  GameData_223ba30 = 0;
  GameData_223ba38 = 0;
  GameData_223ba48 = 2;
  GameData_223ba10 = (__int64)"void SetByPos(const string& pid, int x, int z)";
  GameData_223ba18 = (__int64)&GameData_223b9a0;
  GameData_223ba20 = (__int64)"unit::fade";
  GameData_223ba28 = (__int64)game_script_unit_fade_FadeIn_117e460;
  GameData_223d120 = (__int64)"unit::die";
  GameData_223d128 = (__int64)"const as_s32 Type_Safe";
  GameData_223ba50 = (__int64)"void FadeIn(int unitIndex)";
  GameData_223ba60 = (__int64)"unit::fade";
  GameData_223ba68 = (__int64)game_script_unit_fade_FadeIn_117e4c0;
  GameData_223ba90 = (__int64)"void FadeIn(const string& pid)";
  GameData_223ba98 = (__int64)&GameData_223ba20;
  GameData_223ba80 = 0;
  GameData_223ba70 = 0;
  GameData_223ba78 = 0;
  GameData_223ba88 = 2;
  GameData_223baa0 = (__int64)"unit::fade";
  GameData_223baa8 = (__int64)game_script_unit_fade_FadeOut_117e610;
  GameData_223bac0 = 0;
  GameData_223bab0 = 0;
  GameData_223bab8 = 0;
  GameData_223bac8 = 2;
  GameData_223bad0 =
      (__int64)"void FadeOut(int unitIndex, bool isDeadSe = false)";
  GameData_223bad8 = (__int64)&GameData_223ba60;
  GameData_223bae0 = (__int64)"unit::fade";
  GameData_223bae8 = (__int64)game_script_unit_fade_FadeOut_117e6c0;
  GameData_223bb10 =
      (__int64)"void FadeOut(const string& pid, bool isDeadSe = false)";
  GameData_223bb18 = (__int64)&GameData_223baa0;
  GameData_223bb00 = 0;
  GameData_223baf0 = 0;
  GameData_223baf8 = 0;
  GameData_223bb08 = 2;
  GameData_223bb50 = (__int64)"bool IsFading(int unitIndex)";
  GameData_223bb58 = (__int64)&GameData_223bae0;
  GameData_223bb20 = (__int64)"unit::fade";
  GameData_223bb28 = (__int64)game_script_unit_fade_IsFading;
  GameData_223bb80 = 0;
  GameData_223bb70 = 0;
  GameData_223bb78 = 0;
  GameData_223bb88 = 2;
  GameData_223bb40 = 0;
  GameData_223bb30 = 0;
  GameData_223bb38 = 0;
  GameData_223bb48 = 2;
  GameData_223bb60 = (__int64)"unit::fade";
  GameData_223bb68 = (__int64)game_script_unit_IsFading;
  GameData_223bb90 = (__int64)"bool IsFading(const string& pid)";
  GameData_223bb98 = (__int64)&GameData_223bb20;
  GameData_223bba0 = (__int64)"unit";
  GameData_223bba8 = (__int64)unit_Transfer_117ea10;
  GameData_223bbc0 = 0;
  GameData_223bbb0 = 0;
  GameData_223bbb8 = 0;
  GameData_223bbc8 = 2;
  GameData_223bbd0 = (__int64)"void Transfer(int unitIndex, int force)";
  GameData_223bbd8 = (__int64)&GameData_223bb60;
  GameData_223bbe0 = (__int64)"unit";
  GameData_223bbe8 = (__int64)unit_Transfer_117eba0;
  GameData_223bc10 = (__int64)"void Transfer(const string& pid, int force)";
  GameData_223bc18 = (__int64)&GameData_223bba0;
  GameData_223bc00 = 0;
  GameData_223bbf0 = 0;
  GameData_223bbf8 = 0;
  GameData_223bc08 = 2;
  GameData_223bc20 = (__int64)"unit";
  GameData_223bc28 = (__int64)UnitNatives_117ee00;
  GameData_223bc40 = 0;
  GameData_223bc30 = 0;
  GameData_223bc38 = 0;
  GameData_223bc48 = 2;
  GameData_223bc50 = (__int64)"void Join(const string& pid)";
  GameData_223bc58 = (__int64)&GameData_223bbe0;
  GameData_223bc60 = (__int64)"unit";
  GameData_223bc68 = (__int64)unit_SetRageTarget;
  GameData_223bc90 =
      (__int64)"void SetRageTarget(int unitIndex, int dir, const string& sid = "
               "\"\", bool isDirect = false)";
  GameData_223bc98 = (__int64)&GameData_223bc20;
  GameData_223bc80 = 0;
  GameData_223bc70 = 0;
  GameData_223bc78 = 0;
  GameData_223bc88 = 2;
  GameData_223bcd0 =
      (__int64)"void SetRageTarget(int unitIndex, int x, int z, const string& "
               "sid = \"\", bool isDirect = false)";
  GameData_223bcd8 = (__int64)&GameData_223bc60;
  GameData_223bca0 = (__int64)"unit";
  GameData_223bca8 = (__int64)UnitNatives_117f550;
  GameData_223bcc0 = 0;
  GameData_223bcb0 = 0;
  GameData_223bcb8 = 0;
  GameData_223bcc8 = 2;
  GameData_223bd00 = 0;
  GameData_223bcf0 = 0;
  GameData_223bcf8 = 0;
  GameData_223bd08 = 2;
  GameData_223bce0 = (__int64)"unit";
  GameData_223bce8 = (__int64)unit_CancelRageTarget;
  GameData_223bd10 = (__int64)"void CancelRageTarget(int unitIndex)";
  GameData_223bd18 = (__int64)&GameData_223bca0;
  GameData_223bd20 = (__int64)"unit";
  GameData_223bd28 = (__int64)unit_GetMoveToPos_117fa70;
  GameData_223bd40 = 0;
  GameData_223bd30 = 0;
  GameData_223bd38 = 0;
  GameData_223bd48 = 2;
  GameData_223bd50 = (__int64)"int GetMoveToPos(int unitIndex, int x, int z)";
  GameData_223bd58 = (__int64)&GameData_223bce0;
  GameData_223bd60 = (__int64)"unit";
  GameData_223bd68 = (__int64)unit_GetMoveToPos_117fac0;
  GameData_223bd90 = (__int64)"int GetMoveToPos(string pid, int x, int z)";
  GameData_223bd98 = (__int64)&GameData_223bd20;
  GameData_223bd80 = 0;
  GameData_223bd70 = 0;
  GameData_223bd78 = 0;
  GameData_223bd88 = 2;
  GameData_223bda0 = (__int64)"unit";
  GameData_223bda8 = (__int64)game_script_unit_IsMoveRangePos_117fc10;
  GameData_223bdc0 = 0;
  GameData_223bdb0 = 0;
  GameData_223bdb8 = 0;
  GameData_223bdc8 = 2;
  GameData_223bdd0 = (__int64)"bool IsMoveRangePos(int unitIndex, int x, int "
                              "z, bool isIncludeEnemy)";
  GameData_223bdd8 = (__int64)&GameData_223bd60;
  GameData_223bde0 = (__int64)"unit";
  GameData_223bde8 = (__int64)game_script_unit_IsMoveRangePos_117fca0;
  GameData_223be10 = (__int64)"bool IsMoveRangePos(const string& pid, int x, "
                              "int z, bool isIncludeEnemy)";
  GameData_223be18 = (__int64)&GameData_223bda0;
  GameData_223be00 = 0;
  GameData_223bdf0 = 0;
  GameData_223bdf8 = 0;
  GameData_223be08 = 2;
  GameData_223be50 =
      (__int64)"bool IsAttackRangePos(int unitIndex, int x, int z)";
  GameData_223be58 = (__int64)&GameData_223bde0;
  GameData_223be20 = (__int64)"unit";
  GameData_223be28 = (__int64)game_script_unit_IsAttackRangePos_117fe20;
  GameData_223be40 = 0;
  GameData_223be30 = 0;
  GameData_223be38 = 0;
  GameData_223be48 = 2;
  GameData_223be80 = 0;
  GameData_223be70 = 0;
  GameData_223be78 = 0;
  GameData_223be88 = 2;
  GameData_223be60 = (__int64)"unit";
  GameData_223be68 = (__int64)game_script_unit_IsAttackRangePos_117fea0;
  GameData_223be90 =
      (__int64)"bool IsAttackRangePos(const string& pid, int x, int z)";
  GameData_223be98 = (__int64)&GameData_223be20;
  GameData_223bea0 = (__int64)"unit";
  GameData_223bea8 = (__int64)game_script_unit_IsAttackRangeTargetUnit_1180020;
  GameData_223bec0 = 0;
  GameData_223beb0 = 0;
  GameData_223beb8 = 0;
  GameData_223bec8 = 2;
  GameData_223bed0 = (__int64)"bool IsAttackRangeTargetUnit(int unitIndex, int "
                              "targetUnitIndex)";
  GameData_223bed8 = (__int64)&GameData_223be60;
  GameData_223bee0 = (__int64)"unit";
  GameData_223bee8 = (__int64)game_script_unit_IsAttackRangeTargetUnit_11800c0;
  GameData_223bf10 = (__int64)"bool IsAttackRangeTargetUnit(const string& pid, "
                              "const string& targetPid)";
  GameData_223bf18 = (__int64)&GameData_223bea0;
  GameData_223bf00 = 0;
  GameData_223bef0 = 0;
  GameData_223bef8 = 0;
  GameData_223bf08 = 2;
  GameData_223bf20 = (__int64)"unit";
  GameData_223bf28 = (__int64)game_script_unit_IsAttackRangeForce_1180350;
  GameData_223bf40 = 0;
  GameData_223bf30 = 0;
  GameData_223bf38 = 0;
  GameData_223bf48 = 2;
  GameData_223bf50 =
      (__int64)"bool IsAttackRangeForce(int unitIndex, int force)";
  GameData_223bf58 = (__int64)&GameData_223bee0;
  GameData_223bf60 = (__int64)"unit";
  GameData_223bf68 = (__int64)game_script_unit_IsAttackRangeForce_11803c0;
  GameData_223bf90 =
      (__int64)"bool IsAttackRangeForce(const string& pid, int force)";
  GameData_223bf98 = (__int64)&GameData_223bf20;
  GameData_223bf80 = 0;
  GameData_223bf70 = 0;
  GameData_223bf78 = 0;
  GameData_223bf88 = 2;
  GameData_223bfa0 = (__int64)"unit";
  GameData_223bfa8 = (__int64)game_script_unit_skill_ChangeDangerMap;
  GameData_223bfd0 = (__int64)"void ChangeDangerMap(int unitIndex)";
  GameData_223bfd8 = (__int64)&GameData_223bf60;
  GameData_223bfc0 = 0;
  GameData_223bfb0 = 0;
  GameData_223bfb8 = 0;
  GameData_223bfc8 = 2;
  GameData_223bfe0 = (__int64)"unit::skill";
  GameData_223bfe8 = (__int64)game_script_unit_skill_Has_1180590;
  GameData_223c000 = 0;
  GameData_223bff0 = 0;
  GameData_223bff8 = 0;
  GameData_223c008 = 2;
  GameData_223c010 = (__int64)"bool Has(int unitIndex, const string& sid)";
  GameData_223c018 = (__int64)&GameData_223bfa0;
  GameData_223c020 = (__int64)"unit::skill";
  GameData_223c028 = (__int64)game_script_unit_skill_Has_1180620;
  GameData_223c050 = (__int64)"bool Has(const string& pid, const string& sid)";
  GameData_223c058 = (__int64)&GameData_223bfe0;
  GameData_223c040 = 0;
  GameData_223c030 = 0;
  GameData_223c038 = 0;
  GameData_223c048 = 2;
  GameData_223c060 = (__int64)"unit::skill";
  GameData_223c068 = (__int64)game_script_unit_skill_AddEquip_11807a0;
  GameData_223c080 = 0;
  GameData_223c070 = 0;
  GameData_223c078 = 0;
  GameData_223c088 = 2;
  GameData_223c090 = (__int64)"void AddEquip(int unitIndex, const string& sid)";
  GameData_223c098 = (__int64)&GameData_223c020;
  GameData_223c0a0 = (__int64)"unit::skill";
  GameData_223c0a8 = (__int64)game_script_unit_skill_AddEquip_1180880;
  GameData_223c0d0 =
      (__int64)"void AddEquip(const string& pid, const string& sid)";
  GameData_223c0d8 = (__int64)&GameData_223c060;
  GameData_223c0c0 = 0;
  GameData_223c0b0 = 0;
  GameData_223c0b8 = 0;
  GameData_223c0c8 = 2;
  GameData_223c110 =
      (__int64)"void RemoveEquip(int unitIndex, const string& sid)";
  GameData_223c118 = (__int64)&GameData_223c0a0;
  GameData_223c0e0 = (__int64)"unit::skill";
  GameData_223c0e8 = (__int64)game_script_unit_skill_RemoveEquip_1180a50;
  GameData_223c100 = 0;
  GameData_223c0f0 = 0;
  GameData_223c0f8 = 0;
  GameData_223c108 = 2;
  GameData_223c120 = (__int64)"unit::skill";
  GameData_223c128 = (__int64)game_script_unit_skill_RemoveEquip_1180b40;
  GameData_223c150 =
      (__int64)"void RemoveEquip(string& pid, const string& sid)";
  GameData_223c158 = (__int64)&GameData_223c0e0;
  GameData_223d078 = *v2;
  GameData_223d060 = (__int64)"unit::anime";
  GameData_223d068 = (__int64)"const as_s32 Auto";
  GameData_223d100 = (__int64)"unit::die";
  GameData_223d108 = (__int64)"const as_s32 Type_None";
  GameData_223d130 = (__int64)&GameData_1bb49d0;
  GameData_223d138 = (__int64)&GameData_223d100;
  GameData_223d158 = (__int64)&GameData_223d120;
  GameData_223d110 = (__int64)&GameData_1bb49cc;
  GameData_223d118 = (__int64)&GameData_223d0a0;
  GameData_223d0a0 = (__int64)"unit::anime";
  GameData_223d0a8 = (__int64)"const as_s32 Off";
  GameData_223d070 = (__int64)&GameData_1bb49c0;
  GameData_223d048 = 2;
  GameData_223d040 = 0;
  GameData_223d030 = 0;
  GameData_223d038 = 0;
  GameData_223c190 =
      (__int64)"void AddPrivate(int unitIndex, const string& sid)";
  GameData_223c198 = (__int64)&GameData_223c120;
  GameData_223cfc8 = 2;
  GameData_223cfc0 = 0;
  GameData_223cfb0 = 0;
  GameData_223cfb8 = 0;
  GameData_223c850 =
      (__int64)"string GetSequence(const string& pid, int order)";
  GameData_223c858 = (__int64)&GameData_223c7e0;
  GameData_223c890 = (__int64)"void SetSequence(int unitIndex, int order, "
                              "const string& seqName, const string& value)";
  GameData_223c898 = (__int64)&GameData_223c820;
  GameData_223c148 = 2;
  GameData_223c160 = (__int64)"unit::skill";
  GameData_223c168 = (__int64)game_script_unit_skill_AddPrivate_1180d10;
  GameData_223c830 = 0;
  GameData_223c838 = 0;
  GameData_223c848 = 2;
  GameData_223c840 = 0;
  GameData_223c808 = 2;
  GameData_223c800 = 0;
  GameData_223c7f0 = 0;
  GameData_223c7f8 = 0;
  GameData_223c1a0 = (__int64)"unit::skill";
  GameData_223c1a8 = (__int64)game_script_unit_skill_AddPrivate_1180e00;
  GameData_223c180 = 0;
  GameData_223c170 = 0;
  GameData_223c178 = 0;
  GameData_223c188 = 2;
  GameData_223c1d8 = (__int64)&GameData_223c160;
  GameData_223c9b0 = 0;
  GameData_223c9b8 = 0;
  GameData_223c9c8 = 2;
  GameData_223c870 = 0;
  GameData_223c878 = 0;
  GameData_223c888 = 2;
  GameData_223c880 = 0;
  GameData_223c1c0 = 0;
  GameData_223c1b0 = 0;
  GameData_223c1b8 = 0;
  GameData_223c1c8 = 2;
  GameData_223c208 = 2;
  GameData_223c200 = 0;
  GameData_223c1f0 = 0;
  GameData_223c1f8 = 0;
  GameData_223d150 = (__int64)&GameData_1bb49d4;
  GameData_223d0b0 = (__int64)&GameData_1bb49c8;
  GameData_223d0b8 = (__int64)&GameData_223d080;
  GameData_223d090 = (__int64)&GameData_1bb49c4;
  GameData_223d098 = (__int64)&GameData_223d060;
  GameData_223cfa0 = (__int64)"unit";
  GameData_223cfa8 = (__int64)game_script_unit_Die_11852c0;
  GameData_223cb40 = 0;
  GameData_223cb30 = 0;
  GameData_223cb38 = 0;
  GameData_223cb48 = 2;
  GameData_223c930 = 0;
  GameData_223c938 = 0;
  GameData_223c948 = 2;
  GameData_223c940 = 0;
  GameData_223c1d0 =
      (__int64)"void AddPrivate(const string& pid, const string& sid)";
  GameData_223d0c0 = (__int64)"unit";
  GameData_223d0c8 = (__int64)UnitNatives_11857b0;
  GameData_223d0f0 = (__int64)"void Heal(int unitIndex, int heal, const "
                              "string& effectName, int animeType)";
  GameData_223d0f8 = (__int64)&GameData_223d020;
  GameData_223d0e0 = 0;
  GameData_223d0d0 = 0;
  GameData_223d0d8 = 0;
  GameData_223d0e8 = 2;
  GameData_223d008 = 2;
  GameData_223d000 = 0;
  GameData_223cff0 = 0;
  GameData_223cff8 = 0;
  GameData_223d080 = (__int64)"unit::anime";
  GameData_223d088 = (__int64)"const as_s32 On";
  GameData_223c8b0 = 0;
  GameData_223c8b8 = 0;
  GameData_223c8c8 = 2;
  GameData_223c8c0 = 0;
  GameData_223d010 = (__int64)"void Delete(int unitIndex)";
  GameData_223d018 = (__int64)&GameData_223cfa0;
  GameData_223c8f0 = 0;
  GameData_223c8f8 = 0;
  GameData_223c908 = 2;
  GameData_223c900 = 0;
  GameData_223d050 = (__int64)"void Delete(const string& pid)";
  GameData_223d058 = (__int64)&GameData_223cfe0;
  GameData_223d020 = (__int64)"unit";
  GameData_223d028 = (__int64)unit_Delete_1185560;
  GameData_223cfd0 = (__int64)"void Die(const string& pid)";
  GameData_223cfd8 = (__int64)&GameData_223cf60;
  GameData_223cf70 = 0;
  GameData_223cf78 = 0;
  GameData_223cf88 = 2;
  GameData_223cf80 = 0;
  GameData_223c910 = (__int64)"int GetSequenceArgPositionX(int unitIndex, int "
                              "order, int argIndex)";
  GameData_223c918 = (__int64)&GameData_223c8a0;
  GameData_223cfe0 = (__int64)"unit";
  GameData_223cfe8 = (__int64)unit_Delete_11853f0;
  GameData_223cf90 = (__int64)"void Die(int unitIndex)";
  GameData_223cf98 = (__int64)&GameData_223cf20;
  GameData_223cf48 = 2;
  GameData_223cf20 = (__int64)"unit::ai";
  GameData_223cf28 = (__int64)game_script_unit_ClearMoveLimit;
  GameData_223cf40 = 0;
  GameData_223cf30 = 0;
  GameData_223cf38 = 0;
  GameData_223cf50 = (__int64)"void ClearMoveLimit(const string& pid)";
  GameData_223cf58 = (__int64)&GameData_223cee0;
  GameData_223cf00 = 0;
  GameData_223cef0 = 0;
  GameData_223cef8 = 0;
  GameData_223cf08 = 2;
  GameData_223ce80 = 0;
  GameData_223ce70 = 0;
  GameData_223ce78 = 0;
  GameData_223ce88 = 2;
  GameData_223cf60 = (__int64)"unit";
  GameData_223cf68 = (__int64)game_script_unit_Die_1185270;
  GameData_223ced0 =
      (__int64)"void SetMoveThrough(const string& pid, bool isEnable)";
  GameData_223ced8 = (__int64)&GameData_223ce60;
  GameData_223cf10 = (__int64)"void ClearMoveLimit(int unitIndex)";
  GameData_223cf18 = (__int64)&GameData_223cea0;
  GameData_223cec0 = 0;
  GameData_223ceb0 = 0;
  GameData_223ceb8 = 0;
  GameData_223cec8 = 2;
  GameData_223cee0 = (__int64)"unit::ai";
  GameData_223cee8 = (__int64)game_script_unit_ai_ClearMoveLimit;
  GameData_223cd60 = (__int64)"unit::ai";
  GameData_223cd68 =
      (__int64)game_script_unit_ai_SetDisableMutationAttack_1184570;
  GameData_223cd80 = 0;
  GameData_223cd70 = 0;
  GameData_223cd78 = 0;
  GameData_223cd88 = 2;
  GameData_223cea0 = (__int64)"unit::ai";
  GameData_223cea8 = (__int64)game_script_unit_ai_SetMoveThrough_1184b40;
  GameData_223cd08 = 2;
  GameData_223cd00 = 0;
  GameData_223ccf0 = 0;
  GameData_223ccf8 = 0;
  GameData_223ce60 = (__int64)"unit::ai";
  GameData_223ce68 = (__int64)game_script_unit_ai_SetMoveThrough_1184a70;
  GameData_223ce30 = 0;
  GameData_223ce38 = 0;
  GameData_223ce48 = 2;
  GameData_223ce40 = 0;
  GameData_223ce90 =
      (__int64)"void SetMoveThrough(int unitIndex, bool isEnable)";
  GameData_223ce98 = (__int64)&GameData_223ce20;
  GameData_223ce50 =
      (__int64)"void SetMoveBreak(const string& pid, bool isEnable)";
  GameData_223ce58 = (__int64)&GameData_223cde0;
  GameData_223ce08 = 2;
  GameData_223ce00 = 0;
  GameData_223cdf0 = 0;
  GameData_223cdf8 = 0;
  GameData_223ce10 = (__int64)"void SetMoveBreak(int unitIndex, bool isEnable)";
  GameData_223ce18 = (__int64)&GameData_223cda0;
  GameData_223cdc0 = 0;
  GameData_223cdb0 = 0;
  GameData_223cdb8 = 0;
  GameData_223cdc8 = 2;
  GameData_223ce20 = (__int64)"unit::ai";
  GameData_223ce28 = (__int64)game_script_unit_ai_SetMoveBreak_11848c0;
  GameData_223cdd0 = (__int64)"void SetDisableMutationAttack(const string& "
                              "pid, bool isEnable)";
  GameData_223cdd8 = (__int64)&GameData_223cd60;
  GameData_223cd30 = 0;
  GameData_223cd38 = 0;
  GameData_223cd48 = 2;
  GameData_223cd40 = 0;
  GameData_223cde0 = (__int64)"unit::ai";
  GameData_223cde8 = (__int64)game_script_unit_ai_SetMoveBreak_11847f0;
  GameData_223cd90 =
      (__int64)"void SetDisableMutationAttack(int unitIndex, bool isEnable)";
  GameData_223cd98 = (__int64)&GameData_223cd20;
  GameData_223cb88 = 2;
  GameData_223cb80 = 0;
  GameData_223cb70 = 0;
  GameData_223cb78 = 0;
  GameData_223cda0 = (__int64)"unit::ai";
  GameData_223cda8 =
      (__int64)game_script_unit_ai_SetDisableMutationAttack_1184640;
  GameData_223cd50 =
      (__int64)"void SetMoveDestroy(const string& pid, bool isEnable)";
  GameData_223cd58 = (__int64)&GameData_223cce0;
  GameData_223cd10 =
      (__int64)"void SetMoveDestroy(int unitIndex, bool isEnable)";
  GameData_223cd18 = (__int64)&GameData_223cca0;
  GameData_223ccc0 = 0;
  GameData_223ccb0 = 0;
  GameData_223ccb8 = 0;
  GameData_223ccc8 = 2;
  GameData_223cd20 = (__int64)"unit::ai";
  GameData_223cd28 = (__int64)game_script_unit_ai_SetMoveDestroy_11843c0;
  GameData_223ccd0 =
      (__int64)"void SetRejectPower0Attack(const string& pid, bool isEnable)";
  GameData_223ccd8 = (__int64)&GameData_223cc60;
  GameData_223cc80 = 0;
  GameData_223cc70 = 0;
  GameData_223cc78 = 0;
  GameData_223cc88 = 2;
  GameData_223cce0 = (__int64)"unit::ai";
  GameData_223cce8 = (__int64)game_script_unit_ai_SetMoveDestroy_11842f0;
  GameData_223cc90 =
      (__int64)"void SetRejectPower0Attack(int unitIndex, bool isEnable)";
  GameData_223cc98 = (__int64)&GameData_223cc20;
  GameData_223cc60 = (__int64)"unit::ai";
  GameData_223cc68 = (__int64)game_script_unit_ai_SetRejectPower0Attack_1184060;
  GameData_223cc40 = 0;
  GameData_223cc30 = 0;
  GameData_223cc38 = 0;
  GameData_223cc48 = 2;
  GameData_223cc20 = (__int64)"unit::ai";
  GameData_223cc28 =
      (__int64)game_script_unit_ai_SetRageMaxProhibitTurn_1183ec0;
  GameData_223cca0 = (__int64)"unit::ai";
  GameData_223cca8 = (__int64)game_script_unit_ai_SetRejectPower0Attack_1184140;
  GameData_223cbf0 = 0;
  GameData_223cbf8 = 0;
  GameData_223cc08 = 2;
  GameData_223cc00 = 0;
  GameData_223cc50 =
      (__int64)"void SetRageMaxProhibitTurn(string& pid, int turn)";
  GameData_223cc58 = (__int64)&GameData_223cbe0;
  GameData_223cc10 =
      (__int64)"void SetRageMaxProhibitTurn(int unitIndex, int turn)";
  GameData_223cc18 = (__int64)&GameData_223cba0;
  GameData_223cbd0 =
      (__int64)"void SetRageTargetPos(string& pid, int x, int z)";
  GameData_223cbd8 = (__int64)&GameData_223cb60;
  GameData_223cbc8 = 2;
  GameData_223cbc0 = 0;
  GameData_223cbb0 = 0;
  GameData_223cbb8 = 0;
  GameData_223cbe0 = (__int64)"unit::ai";
  GameData_223cbe8 =
      (__int64)game_script_unit_ai_SetRageMaxProhibitTurn_1183e00;
  GameData_223cb90 =
      (__int64)"void SetRageTargetPos(int unitIndex, int x, int z)";
  GameData_223cb98 = (__int64)&GameData_223cb20;
  GameData_223cba0 = (__int64)"unit::ai";
  GameData_223cba8 = (__int64)game_script_unit_ai_SetRageTargetPos_1183c60;
  GameData_223cb60 = (__int64)"unit::ai";
  GameData_223cb68 = (__int64)game_script_unit_ai_SetRageTargetPos_1183ba0;
  GameData_223cb10 =
      (__int64)"void SetRageOpArg(int unitIndex, const string& arg)";
  GameData_223cb18 = (__int64)&GameData_223caa0;
  GameData_223cb50 =
      (__int64)"void SetRageOpArg(const string& pid, const string& arg)";
  GameData_223cb58 = (__int64)&GameData_223cae0;
  GameData_223cb00 = 0;
  GameData_223caf0 = 0;
  GameData_223caf8 = 0;
  GameData_223cb08 = 2;
  GameData_223cac0 = 0;
  GameData_223cab0 = 0;
  GameData_223cab8 = 0;
  GameData_223cac8 = 2;
  GameData_223cb20 = (__int64)"unit::ai";
  GameData_223cb28 = (__int64)game_script_unit_ai_SetRageOpArg_11839e0;
  GameData_223cae0 = (__int64)"unit::ai";
  GameData_223cae8 = (__int64)game_script_unit_ai_SetRageOpArg_1183900;
  GameData_223c9f0 = 0;
  GameData_223c9f8 = 0;
  GameData_223ca08 = 2;
  GameData_223ca00 = 0;
  GameData_223caa0 = (__int64)"unit::ai";
  GameData_223caa8 = (__int64)game_script_unit_ai_SetRageOp_1183760;
  GameData_223ca80 = 0;
  GameData_223ca70 = 0;
  GameData_223ca78 = 0;
  GameData_223ca88 = 2;
  GameData_223cad0 = (__int64)"void SetRageOp(const string& pid, int rageOp)";
  GameData_223cad8 = (__int64)&GameData_223ca60;
  GameData_223ca60 = (__int64)"unit::ai";
  GameData_223ca68 = (__int64)game_script_unit_ai_SetRageOp_11836a0;
  GameData_223ca30 = 0;
  GameData_223ca38 = 0;
  GameData_223ca48 = 2;
  GameData_223ca40 = 0;
  GameData_223ca90 = (__int64)"void SetRageOp(int unitIndex, int rageOp)";
  GameData_223ca98 = (__int64)&GameData_223ca20;
  GameData_223ca50 = (__int64)"void SetBandNo(const string& pid, int bandNo)";
  GameData_223ca58 = (__int64)&GameData_223c9e0;
  GameData_223ca10 = (__int64)"void SetBandNo(int unitIndex, int bandNo)";
  GameData_223ca18 = (__int64)&GameData_223c9a0;
  GameData_223ca20 = (__int64)"unit::ai";
  GameData_223ca28 = (__int64)game_script_unit_ai_SetBandNo_1183500;
  GameData_223c990 = (__int64)"int GetBandNo(int unitIndex)";
  GameData_223c998 = (__int64)&GameData_223c920;
  GameData_223c970 = 0;
  GameData_223c978 = 0;
  GameData_223c988 = 2;
  GameData_223c980 = 0;
  GameData_223c9d0 = (__int64)"int GetBandNo(const string& pid)";
  GameData_223c9d8 = (__int64)&GameData_223c960;
  GameData_223c860 = (__int64)"unit::ai";
  GameData_223c868 = (__int64)UnitNatives_1182d90;
  GameData_223c250 =
      (__int64)"void RemovePrivate(string& pid, const string& sid)";
  GameData_223c258 = (__int64)&GameData_223c1e0;
  GameData_223c248 = 2;
  GameData_223c240 = 0;
  GameData_223c230 = 0;
  GameData_223c238 = 0;
  GameData_223c9e0 = (__int64)"unit::ai";
  GameData_223c9e8 = (__int64)game_script_unit_ai_SetBandNo_1183450;
  GameData_223c9a0 = (__int64)"unit::ai";
  GameData_223c9a8 = (__int64)game_script_unit_ai_GetBandNo_1183300;
  GameData_223c288 = 2;
  GameData_223c280 = 0;
  GameData_223c270 = 0;
  GameData_223c278 = 0;
  GameData_223c950 = (__int64)"int GetSequenceArgPositionZ(int unitIndex, int "
                              "order, int argIndex)";
  GameData_223c958 = (__int64)&GameData_223c8e0;
  GameData_223c290 = (__int64)"void Supply(int unitIndex, const string& sid)";
  GameData_223c298 = (__int64)&GameData_223c220;
  GameData_223c960 = (__int64)"unit::ai";
  GameData_223c968 = (__int64)game_script_unit_ai_GetBandNo_1183290;
  GameData_223c920 = (__int64)"unit::ai";
  GameData_223c928 = (__int64)game_script_unit_ai_GetSequenceArgPositionZ;
  GameData_223c7c0 = 0;
  GameData_223c7b0 = 0;
  GameData_223c7b8 = 0;
  GameData_223c7c8 = 2;
  GameData_223c8d0 = (__int64)"void SetSequence(const string& pid, int order, "
                              "const string& seqName, const string& value)";
  GameData_223c8d8 = (__int64)&GameData_223c860;
  GameData_223c480 = 0;
  GameData_223c470 = 0;
  GameData_223c478 = 0;
  GameData_223c488 = 2;
  GameData_223c8e0 = (__int64)"unit::ai";
  GameData_223c8e8 = (__int64)game_script_unit_ai_GetSequenceArgPositionX;
  GameData_223c8a0 = (__int64)"unit::ai";
  GameData_223c8a8 = (__int64)UnitNatives_1182f20;
  GameData_223c810 = (__int64)"string GetSequence(int unitIndex, int order)";
  GameData_223c818 = (__int64)&GameData_223c7a0;
  GameData_223c820 = (__int64)"unit::ai";
  GameData_223c828 = (__int64)game_script_unit_ai_GetSequence_1182c00;
  GameData_223c7d0 =
      (__int64)"void SetPriority(const string& pid, int priority)";
  GameData_223c7d8 = (__int64)&GameData_223c760;
  GameData_223c780 = 0;
  GameData_223c770 = 0;
  GameData_223c778 = 0;
  GameData_223c788 = 2;
  GameData_223c7e0 = (__int64)"unit::ai";
  GameData_223c7e8 = (__int64)game_script_unit_ai_GetSequence_1182b60;
  GameData_223c790 = (__int64)"void SetPriority(int unitIndex, int priority)";
  GameData_223c798 = (__int64)&GameData_223c720;
  GameData_223c740 = 0;
  GameData_223c730 = 0;
  GameData_223c738 = 0;
  GameData_223c748 = 2;
  GameData_223c7a0 = (__int64)"unit::ai";
  GameData_223c7a8 = (__int64)game_script_unit_ai_SetPriority_11829c0;
  GameData_223c760 = (__int64)"unit::ai";
  GameData_223c768 = (__int64)game_script_unit_ai_SetPriority_1182910;
  GameData_223c720 = (__int64)"unit::ai";
  GameData_223c728 = (__int64)game_script_unit_ai_ActivateForBand_11827c0;
  GameData_223c6f0 = 0;
  GameData_223c6f8 = 0;
  GameData_223c708 = 2;
  GameData_223c700 = 0;
  GameData_223c750 = (__int64)"void ActivateForBand(const string& pid)";
  GameData_223c758 = (__int64)&GameData_223c6e0;
  GameData_223c710 = (__int64)"void ActivateForBand(int unitIndex)";
  GameData_223c718 = (__int64)&GameData_223c6a0;
  GameData_223c6c8 = 2;
  GameData_223c6c0 = 0;
  GameData_223c6b0 = 0;
  GameData_223c6b8 = 0;
  GameData_223c6d0 = (__int64)"void SetActive(const string& pid, bool active)";
  GameData_223c6d8 = (__int64)&GameData_223c660;
  GameData_223c680 = 0;
  GameData_223c670 = 0;
  GameData_223c678 = 0;
  GameData_223c688 = 2;
  GameData_223c6e0 = (__int64)"unit::ai";
  GameData_223c6e8 = (__int64)game_script_unit_ai_ActivateForBand_1182760;
  GameData_223c690 = (__int64)"void SetActive(int unitIndex, bool active)";
  GameData_223c698 = (__int64)&GameData_223c620;
  GameData_223c640 = 0;
  GameData_223c630 = 0;
  GameData_223c638 = 0;
  GameData_223c648 = 2;
  GameData_223c5f0 = 0;
  GameData_223c5f8 = 0;
  GameData_223c608 = 2;
  GameData_223c600 = 0;
  GameData_223c6a0 = (__int64)"unit::ai";
  GameData_223c6a8 = (__int64)game_script_unit_ai_SetActive_11825c0;
  GameData_223c650 = (__int64)"bool IsActive(const string& pid)";
  GameData_223c658 = (__int64)&GameData_223c5e0;
  GameData_223c620 = (__int64)"unit::ai";
  GameData_223c628 = (__int64)game_script_unit_ai_IsActive_11823c0;
  GameData_223c660 = (__int64)"unit::ai";
  GameData_223c668 = (__int64)game_script_unit_ai_SetActive_1182510;
  GameData_223c610 = (__int64)"bool IsActive(int unitIndex)";
  GameData_223c618 = (__int64)&GameData_223c460;
  GameData_223c5a0 = (__int64)"unit::ai::rageop";
  GameData_223c5a8 = (__int64)"const as_s32 ForceInRange";
  GameData_223c5d0 = (__int64)&GameData_1bb49bc;
  GameData_223c5d8 = (__int64)&GameData_223c5a0;
  GameData_223c5e0 = (__int64)"unit::ai";
  GameData_223c5e8 = (__int64)game_script_unit_ai_IsActive_1182350;
  GameData_223c5b0 = (__int64)&GameData_1bb49b8;
  GameData_223c5b8 = (__int64)&GameData_223c580;
  GameData_223c5c0 = (__int64)"unit::ai::rageop";
  GameData_223c5c8 = (__int64)"const as_s32 TerrainInRange";
  GameData_223c580 = (__int64)"unit::ai::rageop";
  GameData_223c588 = (__int64)"const as_s32 TargetPos";
  GameData_223c590 = (__int64)&GameData_1bb49b4;
  GameData_223c598 = (__int64)&GameData_223c560;
  GameData_223c560 = (__int64)"unit::ai::rageop";
  GameData_223c568 = (__int64)"const as_s32 NearestEnemy";
  GameData_223c570 = (__int64)&GameData_1bb49b0;
  GameData_223c578 = (__int64)&GameData_223c540;
  GameData_223c520 = (__int64)"unit::ai::rageop";
  GameData_223c528 = (__int64)"const as_s32 None";
  GameData_223c530 = (__int64)&GameData_1bb49a8;
  GameData_223c538 = (__int64)&GameData_223c500;
  GameData_223c540 = (__int64)"unit::ai::rageop";
  GameData_223c548 = (__int64)"const as_s32 EnemyInRange";
  GameData_223c550 = (__int64)&GameData_1bb49ac;
  GameData_223c558 = (__int64)&GameData_223c520;
  GameData_223c4e0 = (__int64)"unit::ai::order";
  GameData_223c4e8 = (__int64)"const as_s32 Attack";
  GameData_223c4f0 = (__int64)&GameData_1bb49a0;
  GameData_223c4f8 = (__int64)&GameData_223c4c0;
  GameData_223c500 = (__int64)"unit::ai::order";
  GameData_223c508 = (__int64)"const as_s32 Move";
  GameData_223c510 = (__int64)&GameData_1bb49a4;
  GameData_223c518 = (__int64)&GameData_223c4e0;
  GameData_223c4a0 = (__int64)"unit::ai::order";
  GameData_223c4a8 = (__int64)"const as_s32 Cause";
  GameData_223c380 = 0;
  GameData_223c370 = 0;
  GameData_223c378 = 0;
  GameData_223c388 = 2;
  GameData_223c4d0 = (__int64)&GameData_1bb499c;
  GameData_223c4d8 = (__int64)&GameData_223c4a0;
  GameData_223c4b0 = (__int64)&GameData_1bb4998;
  GameData_223c4b8 = v5;
  GameData_223c4c0 = (__int64)"unit::ai::order";
  GameData_223c4c8 = (__int64)"const as_s32 Mind";
  GameData_223c3c0 = 0;
  GameData_223c3b0 = 0;
  GameData_223c3b8 = 0;
  GameData_223c3c8 = 2;
  GameData_223c490 = (__int64)"void Use(int unitIndex, const string& sid, int "
                              "targetX, int targetZ)";
  GameData_223c498 = (__int64)&GameData_223c420;
  GameData_223c3d0 = (__int64)"void SetEndurance(const string& pid, const "
                              "string& sid, int count)";
  GameData_223c3d8 = (__int64)&GameData_223c360;
  GameData_223c430 = 0;
  GameData_223c438 = 0;
  GameData_223c448 = 2;
  GameData_223c440 = 0;
  GameData_223c460 = (__int64)"unit::skill";
  GameData_223c468 = (__int64)UnitNatives_1182020;
  GameData_223c408 = 2;
  GameData_223c400 = 0;
  GameData_223c3f0 = 0;
  GameData_223c3f8 = 0;
  GameData_223c450 = (__int64)"int GetGambitEndurance(const string& pid)";
  GameData_223c458 = (__int64)&GameData_223c3e0;
  GameData_223c410 = (__int64)"int GetGambitEndurance(int unitIndex)";
  GameData_223c418 = (__int64)&GameData_223c3a0;
  GameData_223c420 = (__int64)"unit::skill";
  GameData_223c428 = (__int64)UnitNatives_1181e00;
  GameData_223c3e0 = (__int64)"unit::skill";
  GameData_223c3e8 = (__int64)UnitNatives_1181ce0;
  GameData_223c3a0 = (__int64)"unit::skill";
  GameData_223c3a8 = (__int64)game_script_unit_skill_SetEndurance_1181a60;
  GameData_223c390 =
      (__int64)"void SetEndurance(int unitIndex, const string& sid, int count)";
  GameData_223c398 = (__int64)&GameData_223c320;
  GameData_223c340 = 0;
  GameData_223c330 = 0;
  GameData_223c338 = 0;
  GameData_223c348 = 2;
  GameData_223c360 = (__int64)"unit::skill";
  GameData_223c368 = (__int64)game_script_unit_skill_SetEndurance_11818c0;
  GameData_223c350 =
      (__int64)"int GetEndurance(const string& pid, const string& sid)";
  GameData_223c358 = (__int64)&GameData_223c2e0;
  GameData_223c300 = 0;
  GameData_223c2f0 = 0;
  GameData_223c2f8 = 0;
  GameData_223c308 = 2;
  GameData_223c320 = (__int64)"unit::skill";
  GameData_223c328 = (__int64)game_script_unit_skill_GetEndurance_11816a0;
  GameData_223c2e0 = (__int64)"unit::skill";
  GameData_223c2e8 = (__int64)game_script_unit_skill_GetEndurance_1181560;
  GameData_223c2c0 = 0;
  GameData_223c2b0 = 0;
  GameData_223c2b8 = 0;
  GameData_223c2c8 = 2;
  GameData_223c310 =
      (__int64)"int GetEndurance(int unitIndex, const string& sid)";
  GameData_223c318 = (__int64)&GameData_223c2a0;
  GameData_223c2a0 = (__int64)"unit::skill";
  GameData_223c2a8 = (__int64)game_script_unit_skill_Supply_11813a0;
  GameData_223c2d0 =
      (__int64)"void Supply(const string& pid, const string& sid)";
  GameData_223c2d8 = (__int64)&GameData_223c260;
  GameData_223c260 = (__int64)"unit::skill";
  GameData_223c268 = (__int64)game_script_unit_skill_Supply_11812d0;
  GameData_223c210 =
      (__int64)"void RemovePrivate(int unitIndex, const string& sid)";
  GameData_223c218 = (__int64)&GameData_223c1a0;
  GameData_223c220 = (__int64)"unit::skill";
  GameData_223c228 = (__int64)game_script_unit_skill_RemovePrivate_11810e0;
  GameData_223c1e0 = (__int64)"unit::skill";
  GameData_223c1e8 = (__int64)game_script_unit_skill_RemovePrivate_1180ff0;
  GameData_223d140 = (__int64)"unit::die";
  GameData_223d148 = (__int64)"const as_s32 Type_Dead";
  GameData_223d180 = (__int64)"unit";
  GameData_223d188 = (__int64)UnitNatives_11859d0;
  GameData_223d1a0 = 0;
  GameData_223d190 = 0;
  GameData_223d198 = 0;
  GameData_223d1a8 = 2;
  *(_QWORD*)GameData_212bf40[0] = &GameData_223d160;
  GameData_223d160 = (__int64)"unit::die";
  GameData_223d168 = (__int64)"const as_s32 Type_Stay";
  GameData_223d170 = (__int64)&GameData_1bb49d8;
  GameData_223d178 = (__int64)&GameData_223d140;
  GameData_223d1b0 =
      (__int64)"void Damage(int unitIndex, int damage, int dieType, const "
               "string& effectName, int animeType)";
  GameData_223d1b8 = (__int64)&GameData_223d0c0;
  GameData_223d1e0 = 0;
  GameData_223d1d0 = 0;
  GameData_223d1d8 = 0;
  GameData_223d1e8 = 2;
  GameData_223d1c0 = (__int64)"unit";
  GameData_223d1c8 = (__int64)UnitNatives_1185d70;
  GameData_223d1f0 = (__int64)"void DamageNoWait(int unitIndex, int damage, "
                              "const string& effectName, int animeType)";
  GameData_223d1f8 = (__int64)&GameData_223d180;
  GameData_223d200 = (__int64)"unit";
  GameData_223d208 = (__int64)game_script_unit_WaitDamageEnd;
  GameData_223d220 = 0;
  GameData_223d210 = 0;
  GameData_223d218 = 0;
  GameData_223d228 = 2;
  GameData_223d230 = (__int64)"void WaitDamageEnd()";
  GameData_223d238 = (__int64)&GameData_223d1c0;
  GameData_223d240 = (__int64)"unit";
  GameData_223d248 = (__int64)game_script_unit_GetBarrierHp_1186030;
  GameData_223d270 = (__int64)"int GetBarrierHp(int unitIndex, int x, int z)";
  GameData_223d278 = (__int64)&GameData_223d200;
  GameData_223d260 = 0;
  GameData_223d250 = 0;
  GameData_223d258 = 0;
  GameData_223d268 = 2;
  GameData_223d280 = (__int64)"unit";
  GameData_223d288 = (__int64)game_script_unit_GetBarrierHp_1186100;
  GameData_223d2a0 = 0;
  GameData_223d290 = 0;
  GameData_223d298 = 0;
  GameData_223d2a8 = 2;
  GameData_223d2b0 =
      (__int64)"int GetBarrierHp(const string& pid, int x, int z)";
  GameData_223d2b8 = (__int64)&GameData_223d240;
  GameData_223d2c0 = (__int64)"unit";
  GameData_223d2c8 = (__int64)game_script_unit_SetBarrierHp_11862c0;
  GameData_223d2f0 =
      (__int64)"void SetBarrierHp(int unitIndex, int x, int z, int hp)";
  GameData_223d2f8 = (__int64)&GameData_223d280;
  GameData_223d2e0 = 0;
  GameData_223d2d0 = 0;
  GameData_223d2d8 = 0;
  GameData_223d2e8 = 2;
  GameData_223d330 =
      (__int64)"void SetBarrierHp(const string& pid, int x, int z, int hp)";
  GameData_223d338 = (__int64)&GameData_223d2c0;
  GameData_223d300 = (__int64)"unit";
  GameData_223d308 = (__int64)game_script_unit_SetBarrierHp_1186460;
  GameData_223d320 = 0;
  GameData_223d310 = 0;
  GameData_223d318 = 0;
  GameData_223d328 = 2;
  GameData_223d360 = 0;
  GameData_223d350 = 0;
  GameData_223d358 = 0;
  GameData_223d368 = 2;
  GameData_223d340 = (__int64)"unit";
  GameData_223d348 = (__int64)game_script_unit_SetBarrierHp_11866e0;
  GameData_223d370 = (__int64)"void SetBarrierHp(int unitIndex, int hp)";
  GameData_223d378 = (__int64)&GameData_223d300;
  GameData_223d380 = (__int64)"unit";
  GameData_223d388 = (__int64)game_script_unit_SetBarrierHp_1186800;
  GameData_223d3a0 = 0;
  GameData_223d390 = 0;
  GameData_223d398 = 0;
  GameData_223d3a8 = 2;
  GameData_223d3b0 = (__int64)"void SetBarrierHp(const string& pid, int hp)";
  GameData_223d3b8 = (__int64)&GameData_223d340;
  GameData_223d3c0 = (__int64)"unit";
  GameData_223d3c8 = (__int64)game_script_unit_BreakBarrier_11869f0;
  GameData_223d3f0 = (__int64)"void BreakBarrier(int unitIndex, int x, int z, "
                              "bool isEffect = false)";
  GameData_223d3f8 = (__int64)&GameData_223d380;
  GameData_223d3e0 = 0;
  GameData_223d3d0 = 0;
  GameData_223d3d8 = 0;
  GameData_223d3e8 = 2;
  GameData_223d400 = (__int64)"unit";
  GameData_223d408 = (__int64)game_script_unit_BreakBarrier_1186ae0;
  GameData_223d420 = 0;
  GameData_223d410 = 0;
  GameData_223d418 = 0;
  GameData_223d428 = 2;
  GameData_223d430 = (__int64)"void BreakBarrier(const string& pid, int x, int "
                              "z, bool isEffect = false)";
  GameData_223d438 = (__int64)&GameData_223d3c0;
  GameData_223d440 = (__int64)"unit";
  GameData_223d448 = (__int64)game_script_unit_BreakBarrier_1186ca0;
  GameData_223d470 =
      (__int64)"void BreakBarrier(int unitIndex, bool isEffect = false)";
  GameData_223d478 = (__int64)&GameData_223d400;
  GameData_223d460 = 0;
  GameData_223d450 = 0;
  GameData_223d458 = 0;
  GameData_223d468 = 2;
  GameData_223d4b0 =
      (__int64)"void BreakBarrier(const string& pid, bool isEffect = false)";
  GameData_223d4b8 = (__int64)&GameData_223d440;
  GameData_223d480 = (__int64)"unit";
  GameData_223d488 = (__int64)game_script_unit_BreakBarrier_1186e80;
  GameData_223d4a0 = 0;
  GameData_223d490 = 0;
  GameData_223d498 = 0;
  GameData_223d4a8 = 2;
  GameData_223d4e0 = 0;
  GameData_223d4d0 = 0;
  GameData_223d4d8 = 0;
  GameData_223d4e8 = 2;
  GameData_223d4c0 = (__int64)"unit";
  GameData_223d4c8 = (__int64)game_script_unit_RepairBarrier_1187140;
  GameData_223d4f0 = (__int64)"void RepairBarrier(int unitIndex, int x, int z, "
                              "bool isEffect = false)";
  GameData_223d4f8 = (__int64)&GameData_223d480;
  GameData_223d500 = (__int64)"unit";
  GameData_223d508 = (__int64)game_script_unit_RepairBarrier_1187220;
  GameData_223d520 = 0;
  GameData_223d510 = 0;
  GameData_223d518 = 0;
  GameData_223d528 = 2;
  GameData_223d530 = (__int64)"void RepairBarrier(const string& pid, int x, "
                              "int z, bool isEffect = false)";
  GameData_223d538 = (__int64)&GameData_223d4c0;
  GameData_223d540 = (__int64)"unit";
  GameData_223d548 = (__int64)UnitNatives_11873e0;
  GameData_223d570 =
      (__int64)"void RepairBarrier(int unitIndex, bool isEffect = false)";
  GameData_223d578 = (__int64)&GameData_223d500;
  GameData_223d560 = 0;
  GameData_223d550 = 0;
  GameData_223d558 = 0;
  GameData_223d568 = 2;
  GameData_223d580 = (__int64)"unit";
  GameData_223d588 = (__int64)UnitNatives_1187600;
  GameData_223d5a0 = 0;
  GameData_223d590 = 0;
  GameData_223d598 = 0;
  GameData_223d5a8 = 2;
  GameData_223d5b0 =
      (__int64)"void RepairBarrier(const string& pid, bool isEffect = false)";
  GameData_223d5b8 = (__int64)&GameData_223d540;
  GameData_223d5c0 = (__int64)"unit";
  GameData_223d5c8 = (__int64)game_script_unit_Reload_1187900;
  GameData_223d5f0 = (__int64)"void Reload(int unitIndex)";
  GameData_223d5f8 = (__int64)&GameData_223d580;
  GameData_223d5e0 = 0;
  GameData_223d5d0 = 0;
  GameData_223d5d8 = 0;
  GameData_223d5e8 = 2;
  GameData_223d630 = (__int64)"void Reload(const string& pid)";
  GameData_223d638 = (__int64)&GameData_223d5c0;
  GameData_223d600 = (__int64)"unit";
  GameData_223d608 = (__int64)game_script_unit_Reload_11879e0;
  GameData_223d620 = 0;
  GameData_223d610 = 0;
  GameData_223d618 = 0;
  GameData_223d628 = 2;
  GameData_223d660 = 0;
  GameData_223d650 = 0;
  GameData_223d658 = 0;
  GameData_223d668 = 2;
  GameData_223d640 = (__int64)"unit";
  GameData_223d648 = (__int64)game_script_unit_GetMotionName_1187b90;
  GameData_223d670 = (__int64)"string GetMotionName(int unitIndex)";
  GameData_223d678 = (__int64)&GameData_223d600;
  GameData_223d680 = (__int64)"unit";
  GameData_223d688 = (__int64)game_script_unit_GetMotionName_1187c00;
  GameData_223d6a0 = 0;
  GameData_223d690 = 0;
  GameData_223d698 = 0;
  GameData_223d6a8 = 2;
  GameData_223d6b0 = (__int64)"string GetMotionName(const string& pid)";
  GameData_223d6b8 = (__int64)&GameData_223d640;
  GameData_223d6c0 = (__int64)"unit";
  GameData_223d6c8 = (__int64)game_script_unit_PlayMotion;
  GameData_223d6f0 = (__int64)"void PlayMotion(int unitIndex, const string& "
                              "motionName, bool isEndToIdleMotion)";
  GameData_223d6f8 = (__int64)&GameData_223d680;
  GameData_223d6e0 = 0;
  GameData_223d6d0 = 0;
  GameData_223d6d8 = 0;
  GameData_223d6e8 = 2;
  GameData_223d700 = (__int64)"unit";
  GameData_223d708 = (__int64)UnitNatives_1187e60;
  GameData_223d720 = 0;
  GameData_223d710 = 0;
  GameData_223d718 = 0;
  GameData_223d728 = 2;
  GameData_223d730 = (__int64)"void PlayMotion(const string& pid, const "
                              "string& motionName, bool isEndToIdleMotion)";
  GameData_223d738 = (__int64)&GameData_223d6c0;
  GameData_223d740 = (__int64)"unit";
  GameData_223d748 = (__int64)game_script_unit_WaitMotion_1188510;
  GameData_223d770 = (__int64)"void WaitMotion(int unitIndex)";
  GameData_223d778 = (__int64)&GameData_223d700;
  GameData_223d760 = 0;
  GameData_223d750 = 0;
  GameData_223d758 = 0;
  GameData_223d768 = 2;
  GameData_223d7b0 = (__int64)"void WaitMotion(const string& pid)";
  GameData_223d7b8 = (__int64)&GameData_223d740;
  GameData_223d780 = (__int64)"unit";
  GameData_223d788 = (__int64)game_script_unit_WaitMotion_1188560;
  GameData_223d7a0 = 0;
  GameData_223d790 = 0;
  GameData_223d798 = 0;
  GameData_223d7a8 = 2;
  GameData_223d7e0 = 0;
  GameData_223d7d0 = 0;
  GameData_223d7d8 = 0;
  GameData_223d7e8 = 2;
  GameData_223d7c0 = (__int64)"unit";
  GameData_223d7c8 = (__int64)game_script_unit_DamagePopup_1188690;
  GameData_223d7f0 =
      (__int64)"void DamagePopup(int unitIndex, int damage, int popupFlags)";
  GameData_223d7f8 = (__int64)&GameData_223d780;
  GameData_223d800 = (__int64)"unit";
  GameData_223d808 = (__int64)game_script_unit_DamagePopup_1188720;
  GameData_223d820 = 0;
  GameData_223d810 = 0;
  GameData_223d818 = 0;
  GameData_223d828 = 2;
  GameData_223d830 = (__int64)"void DamagePopup(const string& pid, int damage, "
                              "int popupFlags)";
  GameData_223d838 = (__int64)&GameData_223d7c0;
  GameData_223d840 = (__int64)"unit";
  GameData_223d848 = (__int64)game_script_unit_SetRideOnOff_1188880;
  GameData_223d870 = (__int64)"void SetRideOnOff(int unitIndex, bool isRide)";
  GameData_223d878 = (__int64)&GameData_223d800;
  GameData_223d860 = 0;
  GameData_223d850 = 0;
  GameData_223d858 = 0;
  GameData_223d868 = 2;
  GameData_223d880 = (__int64)"unit";
  GameData_223d888 = (__int64)game_script_unit_SetRideOnOff_1188940;
  GameData_223d8a0 = 0;
  GameData_223d890 = 0;
  GameData_223d898 = 0;
  GameData_223d8a8 = 2;
  GameData_223d8b0 =
      (__int64)"void SetRideOnOff(const string& pid, bool isRide)";
  GameData_223d8b8 = (__int64)&GameData_223d840;
  GameData_223d8c0 = (__int64)"unit";
  GameData_223d8c8 = (__int64)game_script_unit_GenerateFaceTexture_1188af0;
  GameData_223d8e0 = 0;
  GameData_223d8d0 = 0;
  GameData_223d8d8 = 0;
  GameData_223d8e8 = 2;
  GameData_223d8f0 = (__int64)"void GenerateFaceTexture(int unitIndex)";
  GameData_223d8f8 = (__int64)&GameData_223d880;
  GameData_223d928 = 2;
  GameData_223d920 = 0;
  GameData_223d910 = 0;
  GameData_223d918 = 0;
  GameData_223d930 = (__int64)"void GenerateFaceTexture(const string& pid)";
  GameData_223d938 = (__int64)&GameData_223d8c0;
  *(_QWORD*)GameData_212bf18[0] = &GameData_223d900;
  GameData_223d900 = (__int64)"unit";
  GameData_223d908 = (__int64)game_script_unit_GenerateFaceTexture_1188b60;
  return &GameData_223c360;
}

__int64 game_11cbe80(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  int v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  int v43;
  __int64 v44;

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v8 = GameData_212c608[0];
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
  *(_QWORD*)a1 = v8 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v9 = GameData_2130600[0];
  *(_QWORD*)(a1 + 296) = -1;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_WORD*)(a1 + 272) = 0;
  *(_BYTE*)(a1 + 304) = 0;
  *(_DWORD*)(a1 + 380) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0x3F80000000000000LL;
  *v9 = a1;
  *(_QWORD*)a1 = game_movie_Seq_vtable;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_DWORD*)(a1 + 248) = 1065353216;
  *(_DWORD*)(a1 + 336) = 1065353216;
  *(_QWORD*)(a1 + 369) = 0;
  *(_QWORD*)(a1 + 356) = 0;
  *(_QWORD*)(a1 + 364) = 0;
  v10 = (__int64*)GameData_212d0d0[0];
  *(_QWORD*)(a1 + 340) = 0;
  *(_QWORD*)(a1 + 348) = 0;
  v11 = *v10;
  if (*v10 != 0) {
    v12 = *(_DWORD*)(v11 + 16);
    *(_DWORD*)(v11 + 16) = v12 + 1;
    if (v12 == 0) {
      (**(void (***)(__int64))(v11 + 8))(v11 + 8),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = a1 + 432;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 528) = a1 + 536;
  *(_DWORD*)(a1 + 480) = 1065353216;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_DWORD*)(a1 + 584) = 1065353216;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_DWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  v13 = GameData_2130240[0] + 2;
  *(_BYTE*)(a1 + 648) = 0;
  *(_BYTE*)(a1 + 652) = 0;
  *(_QWORD*)(a1 + 656) = a2;
  *(_DWORD*)(a1 + 664) = a3;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_DWORD*)(a1 + 688) = 0;
  *(_DWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 640) = v13;
  *(_QWORD*)(a1 + 748) = -1082130432;
  v14 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  v15 = fw_memory_HeapManager_Allocate(v14, 40, 16, 0),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v16 = GameData_212dea8;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(v15 + 29) = 0;
  *(_QWORD*)v15 = v16 + 2;
  *(_QWORD*)(v15 + 8) = 0;
  v17 = *(_QWORD*)(a1 + 672);
  *(_QWORD*)(a1 + 672) = v15;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v15 = *(_QWORD*)(a1 + 672);
  }
  if (a4 == 0) {
    v18 = game_GetHero(9u),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v18 == 0) {
      goto LABEL_19;
    }
    for (i = v18; i != 0; i = *(_QWORD*)(i + 624)) {
      v20 = i;
    }
    if (*(_BYTE*)(v20 + 441) != 3) {
      goto LABEL_19;
    }
    v21 = *(_QWORD*)(v18 + 624);
    if (v21 == 0) {
      v21 = v18;
    }
    v44 = v21;
    v43 = 241;
    v22 = game_UnitPool_Find_6ead60(&v44, &v43),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v22 != nullptr) {
      a4 = (__int64)(v22 + 263);
      goto LABEL_20;
    }
    v23 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v23 + 144) != 0) {
      a4 = v23 + 112;
    }
    else {
    LABEL_19:
      a4 = GameData_212cf70[0];
    }
  }
LABEL_20:
  if (v15 != a4) {
    v24 = *(unsigned __int8*)(a4 + 8);
    if ((*(_BYTE*)(v15 + 8) & 1) != 0) {
      v27 = (v24 & 1) == 0;
      v28 = v24 >> 1;
      if (v27) {
        v29 = a4 + 9;
      }
      else {
        v29 = *(_QWORD*)(a4 + 24);
      }
      if (v27) {
        v30 = v28;
      }
      else {
        v30 = *(_QWORD*)(a4 + 16);
      }
      SpineModel_64dde0((__int64*)(v15 + 8), v29, v30),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else if ((v24 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(v15 + 8), *(_QWORD*)(a4 + 24),
                         *(_QWORD*)(a4 + 16)),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v25 = *(_QWORD*)(a4 + 8);
      v26 = *(_QWORD*)(a4 + 24);
      *(_QWORD*)(v15 + 16) = *(_QWORD*)(a4 + 16);
      *(_QWORD*)(v15 + 24) = v26;
      *(_QWORD*)(v15 + 8) = v25;
    }
  }
  *(_BYTE*)(v15 + 32) = *(_BYTE*)(a4 + 32);
  *(_BYTE*)(v15 + 33) = *(_BYTE*)(a4 + 33);
  *(_BYTE*)(v15 + 34) = *(_BYTE*)(a4 + 34);
  *(_BYTE*)(v15 + 35) = *(_BYTE*)(a4 + 35);
  *(_BYTE*)(v15 + 36) = *(_BYTE*)(a4 + 36);
  v31 = *(_DWORD*)(a1 + 664);
  if (v31 != 1) {
    if (v31 != 2) {
      goto LABEL_37;
    }
    *(_DWORD*)(a1 + 664) = 1;
  }
  if (!GameRoutine_11cc300(*(_QWORD*)(a2 + 8))) {
    *(_DWORD*)(a1 + 664) = 0;
  }
LABEL_37:
  v32 = (_QWORD*)game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v33 = *(_QWORD*)(game_GameModeData_instance_ + 2672);
    v34 = *(_QWORD*)(game_GameModeData_instance_ + 2664);
    v35 = *(_BYTE*)(game_GameModeData_instance_ + 56);
    v36 = ((v33 - v34) << 9) - 1;
    if (v33 == v34) {
      v36 = 0;
    }
    v37 = *(_QWORD*)(game_GameModeData_instance_ + 2696) +
          *(_QWORD*)(game_GameModeData_instance_ + 2688);
    if (v36 == v37) {
      GameRoutine_71e8e0((__int64*)(game_GameModeData_instance_ + 2656)),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v34 = v32[333];
      v37 = v32[337] + v32[336];
    }
    *(_BYTE*)(*(_QWORD*)(v34 + 8 * (v37 >> 12)) + (v37 & 0xFFF)) = v35;
    v38 = game_GameModeData_instance_;
    ++v32[337];
    if (v38 != 0) {
      GameRoutine_716420(v38, 0xAu),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  v39 = GameData_21f61c8++;
  if (v39 == 0) {
    (*(void (**)(__int64))GameData_21f61c0)((__int64)&GameData_21f61c0),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v40 = *(_QWORD*)GameData_2130f48;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    v41 = *(_DWORD*)(v40 + 1736);
    *(_DWORD*)(v40 + 1736) = v41 + 1;
    if (v41 == 0) {
      (**(void (***)(__int64))(v40 + 1728))(v40 + 1728),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  return nn_oe_SetUserInactivityDetectionTimeExtended(true);
}

__int64 game_11fc720(__int64 result, signed int a2, unsigned int a3, int a4,
                     float a5)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  int v19;
  __int64 v20;

  v8 = result;
  v9 = (int)a3;
  v10 = a3 + 1;
  v11 = result + 24LL * a2 + 16272;
  if ((int)a3 <= 19) {
    v12 = 19;
  }
  else {
    v12 = a3;
  }
  v13 = result + 160LL * a2;
  {
    v14 = *(_QWORD*)(v13 + 8LL * (int)a3 + 15952);
    __asm__ volatile("" ::"r"(v14));
  }
  v15 = result + 80LL * a2 + 16360;
  v16 = v13 + 15960;
  while (v14 != 0) {
    {
      v17 = a5 * *(float*)(v11 + 16);
      __asm__ volatile("" ::"w"(v17));
    }
    if (v17 > 0x0.0p+0f) {
      if (a4 < 1) {
        *(float*)(v15 + 4 * v9) = v17 + *(float*)(v15 + 4 * v9);
      }
      else if (v9 <= 18 && *(_QWORD*)(v16 + 8 * v9) != 0) {
        result = game_11fc720(v8, a2, v10, a4, v17);
      }
    }
    {
      v18 = a5 * *(float*)(v11 + 8);
      __asm__ volatile("" ::"w"(v18));
    }
    if (v18 > 0x0.0p+0f) {
      {
        v19 = a4 - *(__int16*)(v14 + 2);
        __asm__ volatile("" ::"r"(v19));
      }
      if (v19 < 1) {
        *(float*)(v15 + 4 * v9) = v18 + *(float*)(v15 + 4 * v9);
      }
      else if (v9 <= 18 && *(_QWORD*)(v16 + 8 * v9) != 0) {
        result = game_11fc720(v8, a2, v10, v19, v18);
      }
    }
    {
      a5 = a5 * *(float*)(v11 + 12);
      __asm__ volatile("" ::"w"(a5));
    }
    if (a5 <= 0x0.0p+0f) {
      break;
    }
    a4 += *(int*)(v11 + 4) * *(__int16*)(v14 + 2) / -100;
    if (a4 < 1) {
      v20 = v8 + 80LL * a2 + 4 * v9;
      *(float*)(v20 + 16360) = a5 + *(float*)(v20 + 16360);
      return result;
    }
    if (v12 != v9) {
      {
        v14 = *(_QWORD*)(v16 + 8 * v9++);
        __asm__ volatile("" ::"r"(v14));
      }
      ++v10;
      if (v14 != 0) {
        continue;
      }
    }
    return result;
  }
  return result;
}

void game_1308480()
{
  _QWORD* v0;
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  char* v24;
  char* v25;
  char* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int16 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  bool v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  int v66;

  v0 = (_QWORD*)GameData_2240f00;
  if (GameData_2240f00 == 0) {
    v1 = (__int64*)fw_memory_g_heap_manager_ptr;
    v2 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    GameData_2240f00 = (__int64)v2;
    v2[2] = 0;
    v2[3] = 0;
    v3 = v2;
    *v2 = (__int64)game_anonymous_PlayerItems_vtable;
    v2[1] = 0;
    v2[4] = (__int64)(GameData_212d7e0[0] + 2);
    v2[5] = 0;
    v4 = fw_memory_HeapManager_Allocate(*v1, 96, 16, 0);
    v5 = GameData_212d7e8[0];
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)v4 = v5 + 2;
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 64) = 1065353216;
    GameHr_89b540(v4);
    v6 = *v3;
    v3[5] = v4;
    GameData_2240f00 = (__int64)v3;
    (*(void (**)(__int64*))(v6 + 16))(v3);
    v0 = (_QWORD*)GameData_2240f00;
  }
  v7 = v0[5];
  v0[2] = v0[1];
  GameHr_89b540(v7);
  v66 = 17;
  v8 = game_UnitPool_GetFirst(&v66);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 432);
    v10 = v8;
    if (v9 == 0) {
      v9 = *(_QWORD*)(v8 + 440);
      if (v9 != 0) {
        v11 = *(unsigned __int8*)(v9 + 16);
        if (v11 <= 8) {
          v65 = v11 - 3;
          while (1) {
            if (v65 == 0) {
              v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v9 != 0) {
                break;
              }
            }
            if (++v65 == 6) {
              goto LABEL_7;
            }
          }
        }
        else {
        LABEL_7:
          v9 = 0;
        }
      }
    }
    v12 = (__int64*)v0[2];
    while (1) {
    LABEL_10:
      v13 = v9;
      v14 = v0[3];
      if ((unsigned __int64)v12 >= v14) {
        v15 = v0[1];
        v16 = (char*)v12 - v15;
        v17 = 0xEF7BDEF7BDEF7BDFLL * (((__int64)v12 - v15) >> 3) + 1;
        if (v17 > 0x108421084210842LL) {
          GameRoutine_1309e40();
        }
        v18 = 0xEF7BDEF7BDEF7BDFLL * ((__int64)(v14 - v15) >> 3);
        if (2 * v18 > v17) {
          v17 = 2 * v18;
        }
        if (v18 >= 0x84210842108421LL) {
          v19 = 0x108421084210842LL;
        }
        else {
          v19 = v17;
        }
        if (v19 > 0x108421084210842LL) {
          GameRoutine_60a210();
        }
        v20 = 248 * v19;
        v21 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 248 * v19, 16, 0);
        v22 = (__int64*)&v16[v21];
        v23 = v21;
        v22[1] = 0;
        *v22 = v10;
        v22[2] = 0;
        v22[3] = 0;
        v22[4] = 0;
        v22[5] = 0;
        v22[6] = 0;
        v22[7] = 0;
        v22[8] = 0;
        v22[9] = 0;
        v22[10] = 0;
        v22[11] = 0;
        v22[12] = 0;
        v22[13] = 0;
        v22[14] = 0;
        v22[15] = 0;
        v22[16] = 0;
        v22[17] = 0;
        v22[18] = 0;
        v22[19] = 0;
        v22[20] = 0;
        v22[21] = 0;
        v22[22] = 0;
        v22[23] = 0;
        v22[24] = 0;
        v22[25] = 0;
        v22[26] = 0;
        v22[27] = 0;
        v22[28] = 0;
        v22[29] = 0;
        v22[30] = 0;
        GameRoutine_70f550(v22 + 1, (_QWORD*)(v10 + 828));
        v24 = (char*)v0[1];
        v25 = (char*)v0[2];
        v26 = (char*)v22 + ((char*)v24 - (char*)v25);
        if (v25 != v24) {
          v27 = (__int64*)((char*)v22 + ((char*)v24 - (char*)v25));
          do {
            *v27 = *(_QWORD*)v24;
            v27[1] = 0;
            v27[1] = *((_QWORD*)v24 + 1);
            v27[2] = 0;
            v27[2] = *((_QWORD*)v24 + 2);
            v27[3] = 0;
            v27[3] = *((_QWORD*)v24 + 3);
            v27[4] = 0;
            v27[4] = *((_QWORD*)v24 + 4);
            v27[5] = 0;
            v27[5] = *((_QWORD*)v24 + 5);
            v27[6] = 0;
            v27[6] = *((_QWORD*)v24 + 6);
            v27[7] = 0;
            v27[7] = *((_QWORD*)v24 + 7);
            v27[8] = 0;
            v27[8] = *((_QWORD*)v24 + 8);
            v27[9] = 0;
            v27[9] = *((_QWORD*)v24 + 9);
            v27[10] = 0;
            v27[10] = *((_QWORD*)v24 + 10);
            v27[11] = 0;
            v27[11] = *((_QWORD*)v24 + 11);
            v27[12] = 0;
            v27[12] = *((_QWORD*)v24 + 12);
            v27[13] = 0;
            v27[13] = *((_QWORD*)v24 + 13);
            v27[14] = 0;
            v27[14] = *((_QWORD*)v24 + 14);
            v27[15] = 0;
            v27[15] = *((_QWORD*)v24 + 15);
            v27[16] = 0;
            v27[16] = *((_QWORD*)v24 + 16);
            v27[17] = 0;
            v27[17] = *((_QWORD*)v24 + 17);
            v27[18] = 0;
            v27[18] = *((_QWORD*)v24 + 18);
            v27[19] = 0;
            v27[19] = *((_QWORD*)v24 + 19);
            v27[20] = 0;
            v27[20] = *((_QWORD*)v24 + 20);
            v27[21] = 0;
            v27[21] = *((_QWORD*)v24 + 21);
            v27[22] = 0;
            v27[22] = *((_QWORD*)v24 + 22);
            v27[23] = 0;
            v27[23] = *((_QWORD*)v24 + 23);
            v27[24] = 0;
            v27[24] = *((_QWORD*)v24 + 24);
            v27[25] = 0;
            v27[25] = *((_QWORD*)v24 + 25);
            v27[26] = 0;
            v27[26] = *((_QWORD*)v24 + 26);
            v27[27] = 0;
            v27[27] = *((_QWORD*)v24 + 27);
            v27[28] = 0;
            v27[28] = *((_QWORD*)v24 + 28);
            v27[29] = 0;
            v27[29] = *((_QWORD*)v24 + 29);
            v27[30] = 0;
            v28 = *((_QWORD*)v24 + 30);
            v24 += 248;
            v27[30] = v28;
            v27 += 31;
          } while (v24 != v25);
          v24 = (char*)v0[1];
        }
        v29 = v23 + v20;
        v12 = v22 + 31;
        v0[1] = v26;
        v0[2] = v22 + 31;
        v0[3] = v29;
        if (v24 != nullptr) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v24);
        }
      }
      else {
        v12[1] = 0;
        *v12 = v10;
        v12[2] = 0;
        v12[3] = 0;
        v12[4] = 0;
        v12[5] = 0;
        v12[6] = 0;
        v12[7] = 0;
        v12[8] = 0;
        v12[9] = 0;
        v12[10] = 0;
        v12[11] = 0;
        v12[12] = 0;
        v12[13] = 0;
        v12[14] = 0;
        v12[15] = 0;
        v12[16] = 0;
        v12[17] = 0;
        v12[18] = 0;
        v12[19] = 0;
        v12[20] = 0;
        v12[21] = 0;
        v12[22] = 0;
        v12[23] = 0;
        v12[24] = 0;
        v12[25] = 0;
        v12[26] = 0;
        v12[27] = 0;
        v12[28] = 0;
        v12[29] = 0;
        v12[30] = 0;
        GameRoutine_70f550(v12 + 1, (_QWORD*)(v10 + 828));
        v12 += 31;
      }
      v0[2] = v12;
      if (v13 == 0) {
        break;
      }
      v9 = *(_QWORD*)(v13 + 432);
      v10 = v13;
      if (v9 == 0) {
        v31 = *(_QWORD*)(v13 + 440);
        v10 = v13;
        if (v31 != 0) {
          v32 = *(unsigned __int8*)(v31 + 16);
          v9 = 0;
          v10 = v13;
          if (v32 <= 8) {
            v33 = v32 - 3;
            while (1) {
              if (v33 == 0) {
                v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v9 != 0) {
                  break;
                }
              }
              if (++v33 == 6) {
                v9 = 0;
                v10 = v13;
                goto LABEL_10;
              }
            }
            v10 = v13;
          }
        }
      }
    }
  }
  v34 = GameData_212cf90[0];
  v35 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
  v36 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
  v37 = (_QWORD*)game_TransporterConst_List_instance__ptr[0];
  v38 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
  v39 = ((v36 - v35) << 6) - 1;
  if (v36 == v35) {
    v39 = 0;
  }
  v40 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8) +
        *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
  if (v39 == v40) {
    GameRoutine_71fb20((__int64*)GameData_212cf90[0]);
    v35 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v34);
    v40 = *(_QWORD*)((char*)((char*)0x20LL) + v34 + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + v34);
  }
  *(_QWORD*)(*(_QWORD*)(v35 + 8 * (v40 >> 9)) + 8 * (v40 & 0x1FF)) = v38;
  *v37 = v0 + 4;
  v41 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v34) + 1;
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v34) = v41;
  v42 = *game_map_history_g_transporter_ptr[0];
  if (*game_map_history_g_transporter_ptr[0] != 0) {
    v43 = v0[5];
    GameHr_89b540(v43);
    v44 = *(_QWORD*)(v43 + 8);
    if (*(_QWORD*)(v43 + 16) != v44) {
      v45 = 0;
      v46 = 0;
      do {
        v47 = v44 + v45;
        ++v46;
        v48 = *(_QWORD*)(*(_QWORD*)(v42 + 16) + 8LL) + v45;
        v45 += 12;
        *(_DWORD*)v47 = *(_DWORD*)v48;
        v49 = *(_WORD*)(v48 + 4);
        *(_BYTE*)(v47 + 6) = *(_BYTE*)(v48 + 6);
        *(_WORD*)(v47 + 4) = v49;
        *(_BYTE*)(v47 + 7) = *(_BYTE*)(v48 + 7);
        *(_DWORD*)(v47 + 8) = *(_DWORD*)(v48 + 8);
        v44 = *(_QWORD*)(v43 + 8);
      } while (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v43 + 16) - v44) >> 2) >
               v46);
    }
    GameHr_89b900(v43);
    v41 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v34);
  }
  v50 = *(_QWORD*)((char*)((char*)0x20LL) + v34);
  v52 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v34);
  v51 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v34 + 8);
  v53 = v41 - 1;
  v54 = v41 - 1 + v50;
  v55 = v51 == v52;
  v56 = v41 + v50;
  v57 = v54 >> 9;
  v58 = (v51 - v52) << 6;
  v59 = v54 & 0x1FF;
  v60 = *(_QWORD*)(v52 + 8 * v57);
  v61 = v58 - 1;
  if (v55) {
    v61 = 0;
  }
  v62 = *(_QWORD*)(v60 + 8 * v59);
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v34) = v53;
  *v37 = v62;
  if ((unsigned __int64)(v61 - v56 + 1) >= 0x400) {
    v63 = *(_QWORD*)(v51 - 8);
    if (v63 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v63);
      v51 = *(_QWORD*)((char*)((__int128*)0x10LL) + v34);
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + v34) = v51 - 8;
  }
}

char* game_1603a50(float a1)
{

#pragma clang fp contract(off)
  __int64* v1;

  v1 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                ((long long)vcvtas_s32_f32(a1)), 0);
  return GameRoutine_a4dbe0(*v1, "MID_Sys_Distance", 0);
}

__int64 game_1824950(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v9;
  int v10;
  _QWORD v11[2];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  GameHr_1366ac0((void*)(&v12_.v12), (__int64)"Layout/Battle.arc",
                 (__int64)"Battle_TerrainInfo");
  v2 = v12_.v12;
  v3 = v12_.v13;
  v4 = a1[4];
  v12_.v12 = 0;
  v12_.v13 = 0;
  a1[3] = v2;
  a1[4] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v12_.v13;
  if (v12_.v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12_.v13 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[4];
  v11[0] = a1[3];
  v11[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 5, v11);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 5, v11);
  }
  LayoutAccessor_155e830((__int64)(a1 + 5), 0);
  ui_LayoutAccessor_SetPriority((__int64)(a1 + 5), -1);
  GameHr_1562680((__int64)(a1 + 5), "Warp_Off", 0x1.0000000000000p+0f);
  v7 = LayoutAccessor_155fbe0(a1 + 5, "L_KeyHelp");
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258fe0,
                            memory_order_acquire) &
       1) == 0) {
    v9 = v7;
    v10 = __cxa_guard_acquire((__int64)&GameData_2258fe0);
    v7 = v9;
    if (v10 != 0) {
      GameData_2258fb8 = (__int64)&GameData_1a9f09e;
      GameData_2258fc0 = 0;
      GameData_2258fc8 = 0;
      GameData_2258fd4 = 0;
      GameData_2258fd8 = 0;
      GameData_2258fcc = 10;
      __cxa_guard_release((__int64)&GameData_2258fe0);
      v7 = v9;
    }
  }
  game_gameui_1593d90(v7, (__int64)&GameData_2258fb8);
  return MapTerrainInfo_1824db0((__int64)a1);
}

unsigned int game_195b260(__int64 a1, unsigned __int8 a2, int a3)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int64 v6;
  int v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  int v37;
  _QWORD* v38;
  unsigned __int64 v39;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  _QWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  _QWORD* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  bool v66;
  _QWORD* v67;
  unsigned __int64 v68;
  unsigned __int64 v70;
  unsigned __int64 v71;
  int v72;
  _QWORD* v73;
  _QWORD* v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  struct {
    unsigned __int64 v79;
    char* v80;
  } v79_;

  v3 = *(unsigned __int8*)(a1 + 57);
  if (v3 != 2) {
    if (v3 == 1) {
      v13 = game_HashString((__int64)&GameData_1a9b049);
      v7 = 0;
      if (v13 != 0 && game_GameModeData_instance_ != 0) {
        v14 = *(_QWORD**)(game_GameModeData_instance_ + 48);
        v15 = v14[2];
        if (v15 != 0 && v14[4] != 0) {
          v17 = v15 - 1;
          if ((v15 & (v15 - 1)) != 0) {
            v18 = v13;
            if (v13 >= v15) {
              v18 = v13 % v15;
            }
          }
          else {
            v18 = v17 & v13;
          }
          v25 = *(_QWORD**)(v14[1] + 8 * v18);
          if (v25 != nullptr) {
            v26 = (_QWORD*)*v25;
            if (v26 != nullptr) {
              if ((v15 & v17) == 0) {
                while (1) {
                  v28 = v26[1];
                  if (v13 == v28) {
                    if (v26[2] == v13) {
                      goto LABEL_82;
                    }
                  }
                  else if ((v28 & v17) != v18) {
                    goto LABEL_84;
                  }
                  v26 = (_QWORD*)*v26;
                  v7 = 0;
                  if (v26 == nullptr) {
                    goto LABEL_85;
                  }
                }
              }
              while (1) {
                v27 = v26[1];
                if (v13 == v27) {
                  if (v26[2] == v13) {
                    goto LABEL_82;
                  }
                }
                else {
                  if (v27 >= v15) {
                    v27 %= v15;
                  }
                  if (v27 != v18) {
                    goto LABEL_84;
                  }
                }
                v26 = (_QWORD*)*v26;
                v7 = 0;
                if (v26 == nullptr) {
                  goto LABEL_85;
                }
              }
            }
          }
        }
        goto LABEL_84;
      }
    }
    else {
      if (*(_BYTE*)(a1 + 57) != 0) {
        goto LABEL_84;
      }
      v6 = game_HashString((__int64)&GameData_1aff179);
      v7 = 0;
      if (v6 != 0 && game_GameModeData_instance_ != 0) {
        v8 = *(_QWORD**)(game_GameModeData_instance_ + 48);
        v9 = v8[2];
        if (v9 != 0 && v8[4] != 0) {
          v11 = v9 - 1;
          if ((v9 & (v9 - 1)) != 0) {
            v12 = v6;
            if (v6 >= v9) {
              v12 = v6 % v9;
            }
          }
          else {
            v12 = v11 & v6;
          }
          v32 = *(_QWORD**)(v8[1] + 8 * v12);
          if (v32 != nullptr) {
            v26 = (_QWORD*)*v32;
            if (v26 != nullptr) {
              if ((v9 & v11) == 0) {
                while (1) {
                  v34 = v26[1];
                  if (v6 == v34) {
                    if (v26[2] == v6) {
                      goto LABEL_82;
                    }
                  }
                  else if ((v34 & v11) != v12) {
                    goto LABEL_84;
                  }
                  v26 = (_QWORD*)*v26;
                  v7 = 0;
                  if (v26 == nullptr) {
                    goto LABEL_85;
                  }
                }
              }
              while (1) {
                v33 = v26[1];
                if (v6 == v33) {
                  if (v26[2] == v6) {
                    goto LABEL_82;
                  }
                }
                else {
                  if (v33 >= v9) {
                    v33 %= v9;
                  }
                  if (v33 != v12) {
                    goto LABEL_84;
                  }
                }
                v26 = (_QWORD*)*v26;
                v7 = 0;
                if (v26 == nullptr) {
                  goto LABEL_85;
                }
              }
            }
          }
        }
        goto LABEL_84;
      }
    }
    goto LABEL_85;
  }
  v19 = game_HashString((__int64)&GameData_1af761d);
  v7 = 0;
  if (v19 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_85;
  }
  v20 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v21 = v20[2];
  if (v21 == 0 || v20[4] == 0) {
    goto LABEL_84;
  }
  v23 = v21 - 1;
  if ((v21 & (v21 - 1)) != 0) {
    v24 = v19;
    if (v19 >= v21) {
      v24 = v19 % v21;
    }
  }
  else {
    v24 = v23 & v19;
  }
  v29 = *(_QWORD**)(v20[1] + 8 * v24);
  if (v29 == nullptr) {
    goto LABEL_84;
  }
  v26 = (_QWORD*)*v29;
  if (v26 == nullptr) {
    goto LABEL_84;
  }
  if ((v21 & v23) == 0) {
    while (1) {
      v31 = v26[1];
      if (v19 == v31) {
        if (v26[2] == v19) {
          goto LABEL_82;
        }
      }
      else if ((v31 & v23) != v24) {
        goto LABEL_84;
      }
      v26 = (_QWORD*)*v26;
      v7 = 0;
      if (v26 == nullptr) {
        goto LABEL_85;
      }
    }
  }
  while (1) {
    v30 = v26[1];
    if (v19 == v30) {
      break;
    }
    if (v30 >= v21) {
      v30 %= v21;
    }
    if (v30 != v24) {
      goto LABEL_84;
    }
  LABEL_54:
    v26 = (_QWORD*)*v26;
    v7 = 0;
    if (v26 == nullptr) {
      goto LABEL_85;
    }
  }
  if (v26[2] != v19) {
    goto LABEL_54;
  }
LABEL_82:
  v35 = v26[3];
  if (v35 != 0) {
    v7 = *(_DWORD*)(v35 + 32);
    goto LABEL_85;
  }
LABEL_84:
  v7 = 0;
LABEL_85:
  if ((unsigned int)a2 - 2 >= 2) {
    if (a2 == 1) {
      v49 = game_HashString((__int64)&GameData_1a9ef19);
      v37 = 0;
      if (v49 != 0 && game_GameModeData_instance_ != 0) {
        v50 = *(_QWORD**)(game_GameModeData_instance_ + 48);
        v51 = v50[2];
        if (v51 != 0 && v50[4] != 0) {
          v53 = v51 - 1;
          if ((v51 & (v51 - 1)) != 0) {
            v54 = v49;
            if (v49 >= v51) {
              v54 = v49 % v51;
            }
          }
          else {
            v54 = v53 & v49;
          }
          v62 = *(_QWORD**)(v50[1] + 8 * v54);
          if (v62 != nullptr) {
            v56 = (_QWORD*)*v62;
            if (v56 != nullptr) {
              if ((v51 & v53) == 0) {
                while (1) {
                  v64 = v56[1];
                  if (v49 == v64) {
                    if (v56[2] == v49) {
                      goto LABEL_166;
                    }
                  }
                  else if ((v64 & v53) != v54) {
                    goto LABEL_168;
                  }
                  v56 = (_QWORD*)*v56;
                  v37 = 0;
                  if (v56 == nullptr) {
                    goto LABEL_169;
                  }
                }
              }
              while (1) {
                v63 = v56[1];
                if (v49 == v63) {
                  if (v56[2] == v49) {
                    goto LABEL_166;
                  }
                }
                else {
                  if (v63 >= v51) {
                    v63 %= v51;
                  }
                  if (v63 != v54) {
                    goto LABEL_168;
                  }
                }
                v56 = (_QWORD*)*v56;
                v37 = 0;
                if (v56 == nullptr) {
                  goto LABEL_169;
                }
              }
            }
          }
        }
        goto LABEL_168;
      }
    }
    else {
      if (a2 != 0) {
        goto LABEL_168;
      }
      v36 = game_HashString((__int64)&GameData_1a9b065);
      v37 = 0;
      if (v36 != 0 && game_GameModeData_instance_ != 0) {
        v38 = *(_QWORD**)(game_GameModeData_instance_ + 48);
        v39 = v38[2];
        if (v39 != 0 && v38[4] != 0) {
          v41 = v39 - 1;
          if ((v39 & (v39 - 1)) != 0) {
            v42 = v36;
            if (v36 >= v39) {
              v42 = v36 % v39;
            }
          }
          else {
            v42 = v41 & v36;
          }
          v59 = *(_QWORD**)(v38[1] + 8 * v42);
          if (v59 != nullptr) {
            v56 = (_QWORD*)*v59;
            if (v56 != nullptr) {
              if ((v39 & v41) == 0) {
                while (1) {
                  v61 = v56[1];
                  if (v36 == v61) {
                    if (v56[2] == v36) {
                      goto LABEL_166;
                    }
                  }
                  else if ((v61 & v41) != v42) {
                    goto LABEL_168;
                  }
                  v56 = (_QWORD*)*v56;
                  v37 = 0;
                  if (v56 == nullptr) {
                    goto LABEL_169;
                  }
                }
              }
              while (1) {
                v60 = v56[1];
                if (v36 == v60) {
                  if (v56[2] == v36) {
                    goto LABEL_166;
                  }
                }
                else {
                  if (v60 >= v39) {
                    v60 %= v39;
                  }
                  if (v60 != v42) {
                    goto LABEL_168;
                  }
                }
                v56 = (_QWORD*)*v56;
                v37 = 0;
                if (v56 == nullptr) {
                  goto LABEL_169;
                }
              }
            }
          }
        }
        goto LABEL_168;
      }
    }
    goto LABEL_169;
  }
  v43 = game_HashString((__int64)&GameData_1ae8174);
  v37 = 0;
  if (v43 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_169;
  }
  v44 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v45 = v44[2];
  if (v45 == 0 || v44[4] == 0) {
    goto LABEL_168;
  }
  v47 = v45 - 1;
  if ((v45 & (v45 - 1)) != 0) {
    v48 = v43;
    if (v43 >= v45) {
      v48 = v43 % v45;
    }
  }
  else {
    v48 = v47 & v43;
  }
  v55 = *(_QWORD**)(v44[1] + 8 * v48);
  if (v55 == nullptr) {
    goto LABEL_168;
  }
  v56 = (_QWORD*)*v55;
  if (v56 == nullptr) {
    goto LABEL_168;
  }
  if ((v45 & v47) == 0) {
    while (1) {
      v58 = v56[1];
      if (v43 == v58) {
        if (v56[2] == v43) {
          goto LABEL_166;
        }
      }
      else if ((v58 & v47) != v48) {
        goto LABEL_168;
      }
      v56 = (_QWORD*)*v56;
      v37 = 0;
      if (v56 == nullptr) {
        goto LABEL_169;
      }
    }
  }
  while (2) {
    v57 = v56[1];
    if (v43 != v57) {
      if (v57 >= v45) {
        v57 %= v45;
      }
      if (v57 != v48) {
        goto LABEL_168;
      }
    }
    else if (v56[2] == v43) {
    LABEL_166:
      v65 = v56[3];
      if (v65 != 0) {
        v37 = *(_DWORD*)(v65 + 32);
        goto LABEL_169;
      }
    LABEL_168:
      v37 = 0;
    LABEL_169:
      if (a3 >= 1) {
        do {
          v79_.v80 = game_util_Format(GameData_1afb680, (unsigned int)a3);
          v79_.v79 = game_HashString((__int64)v79_.v80);
          if (game_GameModeData_instance_ != 0 &&
              (GameRoutine_65c660(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  &v79_.v79) &
               1) != 0) {
            if (game_GameModeData_instance_ == 0 || v79_.v79 == 0) {
              goto LABEL_203;
            }
            v67 = *(_QWORD**)(game_GameModeData_instance_ + 48);
            v68 = v67[2];
            if (v68 == 0 || v67[4] == 0) {
              goto LABEL_203;
            }
            v70 = v68 - 1;
            if ((v68 & (v68 - 1)) != 0) {
              v71 = v79_.v79;
              if (v79_.v79 >= v68) {
                v71 = v79_.v79 % v68;
              }
            }
            else {
              v71 = v70 & v79_.v79;
            }
            v73 = *(_QWORD**)(v67[1] + 8 * v71);
            if (v73 == nullptr) {
              goto LABEL_203;
            }
            v74 = (_QWORD*)*v73;
            if (v74 == nullptr) {
              goto LABEL_203;
            }
            if ((v68 & v70) == 0) {
              while (1) {
                v76 = v74[1];
                if (v79_.v79 == v76) {
                  if (v74[2] == v79_.v79) {
                    goto LABEL_201;
                  }
                }
                else if ((v76 & v70) != v71) {
                  goto LABEL_203;
                }
                v74 = (_QWORD*)*v74;
                v72 = 0;
                if (v74 == nullptr) {
                  return ((long long)vcvtas_s32_f32((float)(v72 * (v37 + v7)) /
                                                    0x1.9000000000000p+6f));
                }
              }
            }
            while (1) {
              v75 = v74[1];
              if (v79_.v79 == v75) {
                if (v74[2] == v79_.v79) {
                LABEL_201:
                  v77 = v74[3];
                  if (v77 != 0) {
                    v72 = *(_DWORD*)(v77 + 32);
                    return ((long long)vcvtas_s32_f32(
                        (float)(v72 * (v37 + v7)) / 0x1.9000000000000p+6f));
                  }
                LABEL_203:
                  v72 = 0;
                  return ((long long)vcvtas_s32_f32((float)(v72 * (v37 + v7)) /
                                                    0x1.9000000000000p+6f));
                }
              }
              else {
                if (v75 >= v68) {
                  v75 %= v68;
                }
                if (v75 != v71) {
                  goto LABEL_203;
                }
              }
              v74 = (_QWORD*)*v74;
              v72 = 0;
              if (v74 == nullptr) {
                return ((long long)vcvtas_s32_f32((float)(v72 * (v37 + v7)) /
                                                  0x1.9000000000000p+6f));
              }
            }
          }
          v66 = __OFSUB__(a3--, 1);
        } while (!((a3 < 0) ^ v66 | (a3 == 0)));
      }
      v72 = 100;
      return ((long long)vcvtas_s32_f32((float)(v72 * (v37 + v7)) /
                                        0x1.9000000000000p+6f));
    }
    v56 = (_QWORD*)*v56;
    v37 = 0;
    if (v56 == nullptr) {
      goto LABEL_169;
    }
    continue;
  }
}

#pragma GCC visibility pop
