#include "game/data/data_files.hpp"

namespace game {

template class DataFile<ThermaeData, ThermaeData>;
template class DataFile<SideStoryData, SideStoryData>;
template class DataFile<BattleFieldData, BattleFieldData>;
template class DataFile<LegionData, LegionData>;
template class DataFile<HonorData, HonorData>;
template class DataFile<NoticeData, NoticeData>;
template class DataFile<ObjectInfoData, ObjectInfoData>;
template class DataFile<GmapTutorialData, GmapTutorialData>;
template class DataFile<SubquestData, SubquestData>;
template class DataFile<AchieveInfoData, AchieveInfoData>;
template class DataFile<RideData, RideData>;
template class DataFile<JobIntroGroup, JobIntroData>;
template class DataFile<GmapDisposGroup, GmapDisposData>;
template class DataFile<GmapFixedTalkGroup, GmapFixedTalkData>;
template class DataFile<FacilitySceneMobArray, FacilitySceneMobData>;
template class DataFile<RecallCategoryData, RecallCategoryData>;
template class DataFile<VariationData, VariationData>;
template class DataFile<FacilityOpeningHourGroup, FacilityOpeningHourData>;
template class DataFile<DisposGroup, DisposData>;
template class DataFile<TempleData, TempleData>;
template class DataFile<CmdBtlPartyMemberDataArray, CmdBtlPartyMemberData>;
template class DataFile<TutorialGroup, TutorialData>;
template class DataFile<MiracleData, MiracleData>;
template class DataFile<GmapSpotData, GmapSpotData>;
template class DataFile<HubFacilityOpenData, HubFacilityOpenData>;
template class DataFile<BelongData, BelongData>;
template class DataFile<RelianceTalkData, RelianceTalkData>;
template class DataFile<RecallLabelData, RecallLabelData>;
template class DataFile<VariableData, VariableData>;
template class DataFile<
  FacilitySceneCameraWorkArray, FacilitySceneCameraWorkData
>;
template class DataFile<LessonData, LessonData>;
template class DataFile<
  FacilitySceneCharacterMotionData, FacilitySceneCharacterMotionData
>;
template class DataFile<GmapTroopData, GmapTroopData>;
template class DataFile<CmdBtlPartySettingData, CmdBtlPartySettingData>;
template class DataFile<TerrainData, TerrainData>;

// The rows using these references are not reconstructed yet.
template class DataRef<RideData>;
template class DataRef<VariationData>;
template class DataRef<ExteriorData>;
template class DataRef<DiffData>;
template class DataRef<TerrainData>;
template class DataRef<FacilitySceneCameraData>;
template class DataRef<RangeGroup>;
template class DataRef<SkillMotion>;
template class DataRef<ProfileData>;
template class DataRefList<SkillData>;
template class DataRefList<JobData>;
template class DataRefList<TerrainData>;
template class DataRefList<CategoryData>;

}
