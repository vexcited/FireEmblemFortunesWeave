// Files whose own destructor unloads the instance, they default to the
// plain declaration. The custom ones also override the build hooks.
#ifndef GAME_DATA_FILE_UNLOADING
#define GAME_DATA_FILE_UNLOADING(T, U, V) GAME_DATA_FILE(T, U, V)
#define GAME_DATA_FILE_UNLOADING_CUSTOM(T, U, V) GAME_DATA_FILE(T, U, V)
#define GAME_DATA_FILE_UNLOADING_DEFAULT
#endif

GAME_DATA_FILE(GroundAttributeFile, GroundAttributeData, GroundAttributeData)
GAME_DATA_FILE(MapSoundFile, MapSoundData, MapSoundData)
GAME_DATA_FILE(JobFile, JobData, JobData)
GAME_DATA_FILE_UNLOADING_CUSTOM(PersonFile, PersonData, PersonData)
GAME_DATA_FILE(TerrainFile, TerrainData, TerrainData)
GAME_DATA_FILE(TerrainCostFile, TerrainCost, TerrainCost)
GAME_DATA_FILE(DisposFile, DisposGroup, DisposData)
GAME_DATA_FILE(ItemFile, ItemData, ItemData)
GAME_DATA_FILE_CUSTOM(LegionFile, LegionData, LegionData)
GAME_DATA_FILE(SkillFile, SkillData, SkillData)
GAME_DATA_FILE(SkillMotionFile, SkillMotion, SkillMotion)
GAME_DATA_FILE(ExpTableFile, ExpTableArray, ExpTableData)
GAME_DATA_FILE(ExpRatioFile, ExpRatioGroup, ExpRatioData)
GAME_DATA_FILE(ExpCalcFile, ExpCalcData, ExpCalcData)
GAME_DATA_FILE(AssetTableFile, AssetTableData, AssetTableData)
GAME_DATA_FILE(RangeFile, RangeGroup, RangeData)
GAME_DATA_FILE(VariableFile, VariableData, VariableData)
GAME_DATA_FILE(LearnFile, LearnGroup, LearnData)
GAME_DATA_FILE(VariationFile, VariationData, VariationData)
GAME_DATA_FILE_CUSTOM(BattleFieldFile, BattleFieldData, BattleFieldData)
GAME_DATA_FILE(BattleLevelFile, BattleLevelData, BattleLevelData)
GAME_DATA_FILE(TimelineFile, TimelineGroup, TimelineData)
GAME_DATA_FILE(ShopFile, ShopGroup, ShopData)
GAME_DATA_FILE(AssetInfoFile, AssetInfoData, AssetInfoData)
GAME_DATA_FILE(RelianceFile, RelianceData, RelianceData)
GAME_DATA_FILE(RelianceTalkFile, RelianceTalkData, RelianceTalkData)
GAME_DATA_FILE(RelianceSpecialFile, RelianceSpecialData, RelianceSpecialData)
GAME_DATA_FILE(RelianceSupportFile, RelianceSupportData, RelianceSupportData)
GAME_DATA_FILE(RelianceOffsetFile, RelianceOffsetGroup, RelianceOffsetData)
GAME_DATA_FILE_CUSTOM(ExteriorFile, ExteriorData, ExteriorData)
GAME_DATA_FILE_UNLOADING_CUSTOM(SituationFile, SituationData, SituationData)
GAME_DATA_FILE(MiracleFile, MiracleData, MiracleData)
GAME_DATA_FILE(ScoutFile, ScoutData, ScoutData)
GAME_DATA_FILE(DiffFile, DiffData, DiffData)
GAME_DATA_FILE(CookingFile, CookingData, CookingData)
GAME_DATA_FILE(RideFile, RideData, RideData)
GAME_DATA_FILE(TrainingFile, TrainingData, TrainingData)
GAME_DATA_FILE(ThermaeFile, ThermaeData, ThermaeData)
GAME_DATA_FILE(TempleFile, TempleData, TempleData)
GAME_DATA_FILE(BelongFile, BelongData, BelongData)
GAME_DATA_FILE(ProfileFile, ProfileData, ProfileData)
GAME_DATA_FILE(TutorialFile, TutorialGroup, TutorialData)
GAME_DATA_FILE(TipsFile, TipsData, TipsData)
GAME_DATA_FILE(ObjectInfoFile, ObjectInfoData, ObjectInfoData)
GAME_DATA_FILE(AchieveInfoFile, AchieveInfoData, AchieveInfoData)
GAME_DATA_FILE(LotteryFile, LotteryGroup, LotteryData)
GAME_DATA_FILE(IndependentFile, IndependentData, IndependentData)
GAME_DATA_FILE(AmountFile, AmountData, AmountData)
GAME_DATA_FILE(HonorFile, HonorData, HonorData)
GAME_DATA_FILE(NoticeFile, NoticeData, NoticeData)
GAME_DATA_FILE(CategoryFile, CategoryData, CategoryData)
GAME_DATA_FILE(CausationFile, CausationData, CausationData)
GAME_DATA_FILE(EffectInfoFile, EffectInfoData, EffectInfoData)
GAME_DATA_FILE(RecallLabelFile, RecallLabelData, RecallLabelData)
GAME_DATA_FILE(RecallCategoryFile, RecallCategoryData, RecallCategoryData)
GAME_DATA_FILE(RecallIgnoreFile, RecallIgnoreData, RecallIgnoreData)
GAME_DATA_FILE(RecallUpdateFile, RecallUpdateData, RecallUpdateData)
GAME_DATA_FILE(CostumeFile, CostumeData, CostumeData)
GAME_DATA_FILE(AssetConditionFile, AssetConditionData, AssetConditionData)
GAME_DATA_FILE_CUSTOM(ReplacementFile, ReplacementData, ReplacementData)
GAME_DATA_FILE_CUSTOM(GmapSpotFile, GmapSpotData, GmapSpotData)
GAME_DATA_FILE(GmapSpotGroupFile, GmapSpotGroupData, GmapSpotGroupData)
GAME_DATA_FILE(GmapHubSimpleFile, GmapHubSimpleData, GmapHubSimpleData)
GAME_DATA_FILE(GmapGateFile, GmapGateData, GmapGateData)
GAME_DATA_FILE(GmapExploreFile, GmapExploreData, GmapExploreData)
GAME_DATA_FILE(GmapCarriageFile, GmapCarriageGroup, GmapCarriageData)
GAME_DATA_FILE(GmapTroopFile, GmapTroopData, GmapTroopData)
GAME_DATA_FILE(GmapDisposFile, GmapDisposGroup, GmapDisposData)
GAME_DATA_FILE(GmapMiasmaFile, GmapMiasmaData, GmapMiasmaData)
GAME_DATA_FILE(
  GmapReconstructionFile, GmapReconstructionData, GmapReconstructionData
)
GAME_DATA_FILE(GmapEncountFile, GmapEncountData, GmapEncountData)
GAME_DATA_FILE(GmapTalkFile, GmapTalkData, GmapTalkData)
GAME_DATA_FILE(GmapTutorialFile, GmapTutorialData, GmapTutorialData)
GAME_DATA_FILE(GmapMonthTalkFile, GmapMonthTalkData, GmapMonthTalkData)
GAME_DATA_FILE(
  GmapSpecialDisposFile, GmapSpecialDisposData, GmapSpecialDisposData
)
GAME_DATA_FILE_UNLOADING(HubScriptFile, HubScriptDataArray, HubScriptData)
GAME_DATA_FILE_UNLOADING(
  HubTimelineScriptFile, HubTimelineScriptData, HubTimelineScriptData
)
GAME_DATA_FILE_UNLOADING(HubConnectFile, HubConnectData, HubConnectData)
GAME_DATA_FILE_UNLOADING(
  HubFastTravelFile, HubFastTravelDataArray, HubFastTravelData
)
GAME_DATA_FILE_UNLOADING(HubDivisionFile, HubDivisionData, HubDivisionData)
GAME_DATA_FILE_UNLOADING(HubAreaFile, HubAreaData, HubAreaData)
GAME_DATA_FILE(HubSubquestFile, HubSubquestData, HubSubquestData)
GAME_DATA_FILE_UNLOADING(
  HubRandomDropFile, HubRandomDropDataArray, HubRandomDropData
)
GAME_DATA_FILE(HubFacilityOpenFile, HubFacilityOpenData, HubFacilityOpenData)
GAME_DATA_FILE_UNLOADING(
  DungeonSettingFile, DungeonSettingData, DungeonSettingData
)
GAME_DATA_FILE_UNLOADING_CUSTOM(
  DungeonEachFile, DungeonEachData, DungeonEachData
)
GAME_DATA_FILE_UNLOADING(
  DungeonSymbolFile, DungeonSymbolData, DungeonSymbolData
)
GAME_DATA_FILE(
  CmdBtlPartySettingFile, CmdBtlPartySettingData, CmdBtlPartySettingData
)
GAME_DATA_FILE(
  CmdBtlPartyMemberFile, CmdBtlPartyMemberDataArray, CmdBtlPartyMemberData
)
GAME_DATA_FILE(CmdBtlFieldFile, CmdBtlFieldData, CmdBtlFieldData)
GAME_DATA_FILE(ExSpotFile, ExSpotData, ExSpotData)
GAME_DATA_FILE_UNLOADING(
  HubMapReplaceFile, HubMapReplaceData, HubMapReplaceData
)
GAME_DATA_FILE_UNLOADING(
  HubScriptExternalFile, HubScriptExternalData, HubScriptExternalData
)
GAME_DATA_FILE_UNLOADING(HubAreaTagFile, HubAreaTagData, HubAreaTagData)
GAME_DATA_FILE(WatchingArenaFile, WatchingArenaData, WatchingArenaData)
GAME_DATA_FILE(CmdBtlCallFile, CmdBtlCallData, CmdBtlCallData)
GAME_DATA_FILE(DitChallengeFile, DitChallengeData, DitChallengeData)
GAME_DATA_FILE(ChapterVariableFile, ChapterVariableData, ChapterVariableData)
GAME_DATA_FILE(ScoutTobFile, ScoutTobData, ScoutTobData)
GAME_DATA_FILE(
  CharaViewerAdjustmentsFile, CharaViewerAdjustmentsData,
  CharaViewerAdjustmentsData
)
GAME_DATA_FILE_UNLOADING(AnimSetFile, AnimSetData, AnimSetData)
GAME_DATA_FILE(AnimSetFileEv, AnimSetDataEv, AnimSetDataEv)
GAME_DATA_FILE_UNLOADING(MotionGroupFile, MotionGroupData, MotionGroupData)
GAME_DATA_FILE_UNLOADING(FaceSetFile, FaceSetData, FaceSetData)
GAME_DATA_FILE_UNLOADING(RaceFile, RaceData, RaceData)
GAME_DATA_FILE(BattleCameraFile, BattleCameraGroup, BattleCameraData)
GAME_DATA_FILE(
  EventDemoLocationFile, EventDemoLocationData, EventDemoLocationData
)
GAME_DATA_FILE(EventDemoCameraFile, EventDemoCameraData, EventDemoCameraData)
GAME_DATA_FILE(
  EventDemoCameraMotionFile, EventDemoCameraMotionData,
  EventDemoCameraMotionData
)
GAME_DATA_FILE(EventDemoMapFile, EventDemoMapData, EventDemoMapData)
GAME_DATA_FILE(
  EventDemoSceneObjectFile, EventDemoSceneObjectData, EventDemoSceneObjectData
)
GAME_DATA_FILE(EventDemoEffectFile, EventDemoEffectData, EventDemoEffectData)
GAME_DATA_FILE(
  EventDemoLocationOverwriteFile, EventDemoLocationOverwriteData,
  EventDemoLocationOverwriteData
)
GAME_DATA_FILE(
  EventDemoSpecialCharacterFile, EventDemoSpecialCharacterData,
  EventDemoSpecialCharacterData
)
GAME_DATA_FILE(EventDemoDoFFile, EventDemoDoFData, EventDemoDoFData)
GAME_DATA_FILE(MovieDataFile, MovieData, MovieData)
GAME_DATA_FILE(MovieCaptionDataFile, MovieCaptionData, MovieCaptionData)
GAME_DATA_FILE(MovieBgmCtrlDataFile, MovieBgmCtrlData, MovieBgmCtrlData)
GAME_DATA_FILE_UNLOADING(AIFile, AISequenceData, AICommandData)
GAME_DATA_FILE(
  SubquestUnlockJobsFile, SubquestUnlockJobsArray, SubquestUnlockJobsData
)
GAME_DATA_FILE(SubquestFile, SubquestData, SubquestData)
GAME_DATA_FILE(
  SubquestDeliveryKindFile, SubquestDeliveryKindData, SubquestDeliveryKindData
)
GAME_DATA_FILE_CUSTOM(GrowthListFile, GrowthListArray, GrowthListData)
GAME_DATA_FILE_UNLOADING(
  AutoGrowMasteryExpFile, AutoGrowMasteryExpArray, AutoGrowMasteryExpData
)
GAME_DATA_FILE_CUSTOM(SideStoryFile, SideStoryData, SideStoryData)
GAME_DATA_FILE_UNLOADING(
  AutoGrowHeroItemFile, AutoGrowHeroItemData, AutoGrowHeroItemData
)
GAME_DATA_FILE(AutoGrowJobFile, AutoGrowJobData, AutoGrowJobData)
GAME_DATA_FILE(CalendarBirthdayFile, CalendarBirthdayData, CalendarBirthdayData)
GAME_DATA_FILE(
  CalendarSideStoryFile, CalendarSideStoryData, CalendarSideStoryData
)
GAME_DATA_FILE(CalendarDetailFile, CalendarDetailData, CalendarDetailData)
GAME_DATA_FILE(CalendarFile, CalendarData, CalendarData)
GAME_DATA_FILE_UNLOADING(AIIndividualFile, AIIndividualData, AIIndividualData)
GAME_DATA_FILE(
  Part2SuppliedItemFile, Part2SuppliedItemData, Part2SuppliedItemData
)
GAME_DATA_FILE_CUSTOM(
  Part2SuppliedLegionFile, Part2SuppliedLegionData, Part2SuppliedLegionData
)
GAME_DATA_FILE(EntrustEquipFile, EntrustEquipData, EntrustEquipData)
GAME_DATA_FILE_UNLOADING(AutoGrowItemFile, AutoGrowItemData, AutoGrowItemData)
GAME_DATA_FILE_UNLOADING(
  AutoGrowLegionFile, AutoGrowLegionData, AutoGrowLegionData
)
GAME_DATA_FILE_CUSTOM(RecommendFile, RecommendData, RecommendData)
GAME_DATA_FILE(TalkExpressionFile, TalkExpressionData, TalkExpressionData)
GAME_DATA_FILE(TalkRestrictFile, TalkRestrictData, TalkRestrictData)
GAME_DATA_FILE(
  FacilitySceneCharacterResponseFile, FacilitySceneCharacterResponseData,
  FacilitySceneCharacterResponseData
)
GAME_DATA_FILE(
  FacilitySceneObjectFile, FacilitySceneObjectData, FacilitySceneObjectData
)
GAME_DATA_FILE(FacilitySceneMapFile, FacilitySceneMapData, FacilitySceneMapData)
GAME_DATA_FILE(
  FacilitySceneMapVariationFile, FacilitySceneMapVariationGroup,
  FacilitySceneMapVariationData
)
GAME_DATA_FILE(
  FacilitySceneLocationFile, FacilitySceneLocationData,
  FacilitySceneLocationData
)
GAME_DATA_FILE(
  FacilitySceneSoundFile, FacilitySceneSoundData, FacilitySceneSoundData
)
GAME_DATA_FILE(
  FacilitySceneCameraFile, FacilitySceneCameraData, FacilitySceneCameraData
)
GAME_DATA_FILE(
  FacilitySceneCameraMotionFile, FacilitySceneCameraMotionData,
  FacilitySceneCameraMotionData
)
GAME_DATA_FILE(
  FacilitySceneCameraWorkFile, FacilitySceneCameraWorkArray,
  FacilitySceneCameraWorkData
)
GAME_DATA_FILE(
  FacilitySceneCharacterMotionFile, FacilitySceneCharacterMotionData,
  FacilitySceneCharacterMotionData
)
GAME_DATA_FILE(
  FacilityScenePartVoiceFile, FacilityScenePartVoiceData,
  FacilityScenePartVoiceData
)
GAME_DATA_FILE(
  FacilitySceneAppearanceFile, FacilitySceneAppearanceData,
  FacilitySceneAppearanceData
)
GAME_DATA_FILE(
  FacilitySceneCharacterDisposFile, FacilitySceneCharacterDisposData,
  FacilitySceneCharacterDisposData
)
GAME_DATA_FILE(
  FacilitySceneMobFile, FacilitySceneMobArray, FacilitySceneMobData
)
GAME_DATA_FILE(
  FacilitySceneEffectFile, FacilitySceneEffectData, FacilitySceneEffectData
)
GAME_DATA_FILE(
  FacilitySceneObjectLocationFile, FacilitySceneObjectLocationArray,
  FacilitySceneObjectLocationData
)
GAME_DATA_FILE(
  FacilitySceneVariableFile, FacilitySceneVariableData,
  FacilitySceneVariableData
)
GAME_DATA_FILE(DramaFile, DramaData, DramaData)
GAME_DATA_FILE(DramaScenarioFile, DramaScenarioArray, DramaScenarioData)
GAME_DATA_FILE(DramaHighlightFile, DramaHighlightArray, DramaHighlightData)
GAME_DATA_FILE(TheaterActRewardFile, TheaterActRewardData, TheaterActRewardData)
GAME_DATA_FILE(
  FacilityOpeningHourFile, FacilityOpeningHourGroup, FacilityOpeningHourData
)
GAME_DATA_FILE(
  FacilitySituationFile, FacilitySituationGroup, FacilitySituationData
)
GAME_DATA_FILE(
  FacilityRewardScaleFile, FacilityRewardScaleData, FacilityRewardScaleData
)
GAME_DATA_FILE(LessonFile, LessonData, LessonData)
GAME_DATA_FILE(PerchQuestionFile, PerchQuestionData, PerchQuestionData)
GAME_DATA_FILE(PerchAnswerFile, PerchAnswerData, PerchAnswerData)
GAME_DATA_FILE(JobIntroFile, JobIntroGroup, JobIntroData)
GAME_DATA_FILE(PersonOrderFile, PersonOrderData, PersonOrderData)
GAME_DATA_FILE(GmapRegionFile, GmapRegionData, GmapRegionData)
GAME_DATA_FILE(GmapFixedTalkFile, GmapFixedTalkGroup, GmapFixedTalkData)
GAME_DATA_FILE(GmapCommandFile, GmapCommandData, GmapCommandData)
GAME_DATA_FILE(GmapCallAnimalFile, GmapCallAnimalData, GmapCallAnimalData)
GAME_DATA_FILE(GmapAnimalTableFile, GmapAnimalTableData, GmapAnimalTableData)
GAME_DATA_FILE(GmapConstructionFile, GmapConstructionData, GmapConstructionData)
GAME_DATA_FILE(GmapLegionTableFile, GmapLegionTableGroup, GmapLegionTableData)
GAME_DATA_FILE(
  GmapConstructedObjectFile, GmapConstructedObjectData,
  GmapConstructedObjectData
)
GAME_DATA_FILE(GmapFarmTableFile, GmapFarmTableData, GmapFarmTableData)
GAME_DATA_FILE(GmapBoostFarmFile, GmapBoostFarmData, GmapBoostFarmData)
GAME_DATA_FILE(GmapSpeechFile, GmapSpeechData, GmapSpeechData)
GAME_DATA_FILE(GmapDispatchFile, GmapDispatchData, GmapDispatchData)
GAME_DATA_FILE(
  GmapDispatchDungeonFile, GmapDispatchDungeonGroup, GmapDispatchDungeonData
)
GAME_DATA_FILE(GmapShowFile, GmapShowData, GmapShowData)
GAME_DATA_FILE(GmapKetosTableFile, GmapKetosTableData, GmapKetosTableData)
GAME_DATA_FILE(GmapHadesFile, GmapHadesData, GmapHadesData)
GAME_DATA_FILE(HubMiniMapFile, HubMiniMapData, HubMiniMapData)
GAME_DATA_FILE(HexagramFile, HexagramData, HexagramData)
GAME_DATA_FILE(
  DivinationVisitorFile, DivinationVisitorData, DivinationVisitorData
)
GAME_DATA_FILE(FacilityDialogueFile, FacilityDialogueData, FacilityDialogueData)
GAME_DATA_FILE(FacilityUsedDemoFile, FacilityUsedDemoData, FacilityUsedDemoData)
GAME_DATA_FILE(
  FacilityInstructionTalkFile, FacilityInstructionTalkData,
  FacilityInstructionTalkData
)
GAME_DATA_FILE(HotelFile, HotelData, HotelData)
GAME_DATA_FILE(WarRecordParamFile, WarRecordParamData, WarRecordParamData)
GAME_DATA_FILE(
  AfterEpisodeParamFile, AfterEpisodeParamData, AfterEpisodeParamData
)
GAME_DATA_FILE(
  AfterEpisodePersonOrderFile, AfterEpisodePersonOrderData,
  AfterEpisodePersonOrderData
)
GAME_DATA_FILE(AfterEpisodePairFile, AfterEpisodePairData, AfterEpisodePairData)
GAME_DATA_FILE(
  AfterEpisodeConditionFile, AfterEpisodeConditionData,
  AfterEpisodeConditionData
)
GAME_DATA_FILE(StaffRollParamFile, StaffRollParamData, StaffRollParamData)
GAME_DATA_FILE(StaffRollStaffFile, StaffRollStaffData, StaffRollStaffData)
GAME_DATA_FILE(
  StaffRollMemorialImageFile, StaffRollMemorialImageData,
  StaffRollMemorialImageData
)

#ifdef GAME_DATA_FILE_UNLOADING_DEFAULT
#undef GAME_DATA_FILE_UNLOADING
#undef GAME_DATA_FILE_UNLOADING_CUSTOM
#undef GAME_DATA_FILE_UNLOADING_DEFAULT
#endif
