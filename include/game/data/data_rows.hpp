#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

#include "game/data/flag_condition.hpp"

namespace game {

class BattleFieldFile;
class CalendarDetailFile;
class FacilitySceneEffectFile;
class GmapSpotFile;
class GmapTroopFile;
class ItemFile;
class JobFile;
class LegionFile;
class LotteryFile;
class PersonFile;
class PerchAnswerFile;
class ExpRatioFile;
class SideStoryFile;
class FacilitySceneMapVariationFile;
class FacilitySceneLocationFile;
class SkillFile;
class SubquestFile;
class RecallLabelFile;
class ShopFile;
class GmapEncountFile;
class CmdBtlFieldFile;
class CmdBtlPartyMemberFile;
class RideFile;
class VariationFile;
class ExteriorFile;
class DiffFile;
class TerrainFile;
class FacilitySceneCameraFile;
class RangeFile;
class SkillMotionFile;
class ProfileFile;
class CategoryFile;

}

#pragma GCC visibility push(hidden)

namespace game {

template<>
struct DataFileOf<BattleFieldData> {
  using type = BattleFieldFile;
};

template<>
struct DataFileOf<CalendarDetailData> {
  using type = CalendarDetailFile;
};

template<>
struct DataFileOf<FacilitySceneEffectData> {
  using type = FacilitySceneEffectFile;
};

template<>
struct DataFileOf<GmapSpotData> {
  using type = GmapSpotFile;
};

template<>
struct DataFileOf<GmapTroopData> {
  using type = GmapTroopFile;
};

template<>
struct DataFileOf<ItemData> {
  using type = ItemFile;
};

template<>
struct DataFileOf<JobData> {
  using type = JobFile;
};

template<>
struct DataFileOf<LegionData> {
  using type = LegionFile;
};

template<>
struct DataFileOf<LotteryGroup> {
  using type = LotteryFile;
};

template<>
struct DataFileOf<PersonData> {
  using type = PersonFile;
};

template<>
struct DataFileOf<ExpRatioGroup> {
  using type = ExpRatioFile;
};

template<>
struct DataFileOf<SideStoryData> {
  using type = SideStoryFile;
};

template<>
struct DataFileOf<FacilitySceneMapVariationGroup> {
  using type = FacilitySceneMapVariationFile;
};

template<>
struct DataFileOf<FacilitySceneLocationData> {
  using type = FacilitySceneLocationFile;
};

template<>
inline constexpr bool kInlineDataRef<ExpRatioGroup> = true;

template<>
inline constexpr bool kInlineDataRef<SideStoryData> = true;

template<>
inline constexpr bool kInlineDataRef<FacilitySceneMapVariationGroup> = true;

template<>
inline constexpr bool kInlineDataRef<FacilitySceneLocationData> = true;

template<>
struct DataFileOf<PerchAnswerData> {
  using type = PerchAnswerFile;
};

template<>
struct DataFileOf<SkillData> {
  using type = SkillFile;
};

template<>
struct DataFileOf<SubquestData> {
  using type = SubquestFile;
};

template<>
struct DataFileOf<RecallLabelData> {
  using type = RecallLabelFile;
};

template<>
struct DataFileOf<ShopGroup> {
  using type = ShopFile;
};

template<>
inline constexpr bool kInlineDataRef<ShopGroup> = true;

template<>
struct DataFileOf<GmapEncountData> {
  using type = GmapEncountFile;
};

template<>
struct DataFileOf<CmdBtlFieldData> {
  using type = CmdBtlFieldFile;
};

template<>
inline constexpr bool kInlineDataRef<CmdBtlFieldData> = true;

template<>
struct DataFileOf<CmdBtlPartyMemberDataArray> {
  using type = CmdBtlPartyMemberFile;
};

template<>
struct DataFileOf<RideData> {
  using type = RideFile;
};

template<>
struct DataFileOf<VariationData> {
  using type = VariationFile;
};

template<>
struct DataFileOf<ExteriorData> {
  using type = ExteriorFile;
};

template<>
struct DataFileOf<DiffData> {
  using type = DiffFile;
};

template<>
struct DataFileOf<TerrainData> {
  using type = TerrainFile;
};

template<>
struct DataFileOf<FacilitySceneCameraData> {
  using type = FacilitySceneCameraFile;
};

template<>
struct DataFileOf<RangeGroup> {
  using type = RangeFile;
};

template<>
struct DataFileOf<SkillMotion> {
  using type = SkillMotionFile;
};

template<>
struct DataFileOf<ProfileData> {
  using type = ProfileFile;
};

template<>
struct DataFileOf<CategoryData> {
  using type = CategoryFile;
};

struct RelianceSpecialData : Data {
  void Build() {
    person_20.Resolve();
    person_30.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<PersonData> person_20;
  DataRef<PersonData> person_30;
  unsigned char unknown_40[0x18];
};

static_assert(sizeof(RelianceSpecialData) == 0x58);

struct GmapSpotGroupData : Data {
  void Build() {
    gmap_spots_20.Resolve();
    item_30.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRefList<GmapSpotData> gmap_spots_20;
  DataRef<ItemData> item_30;
};

static_assert(sizeof(GmapSpotGroupData) == 0x40);

struct GmapMiasmaData : Data {
  void Build() {
    gmap_troop_38.Resolve();
    gmap_spot_28.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRef<GmapSpotData> gmap_spot_28;
  DataRef<GmapTroopData> gmap_troop_38;
  unsigned char unknown_48[0x18];
};

static_assert(sizeof(GmapMiasmaData) == 0x60);

struct GmapEncountData : Data {
  void Build() {
    persons_20.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRefList<PersonData> persons_20;
  unsigned char unknown_30[0x10];
};

static_assert(sizeof(GmapEncountData) == 0x40);

struct HubSubquestData : Data {
  void Build() {
    person_28.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRef<PersonData> person_28;
  unsigned char unknown_38[0x8];
};

static_assert(sizeof(HubSubquestData) == 0x40);

struct CmdBtlCallData : Data {
  void Build() {
    person_20.Resolve();
    person_30.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<PersonData> person_20;
  DataRef<PersonData> person_30;
  unsigned char unknown_40[0x20];
};

static_assert(sizeof(CmdBtlCallData) == 0x60);

struct DitChallengeData : Data {
  void Build() {
    battle_field_28.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRef<BattleFieldData> battle_field_28;
  unsigned char unknown_38[0x8];
};

static_assert(sizeof(DitChallengeData) == 0x40);

struct ScoutTobData : Data {
  void Build() {
    items_20.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRefList<ItemData> items_20;
};

static_assert(sizeof(ScoutTobData) == 0x30);

struct SubquestDeliveryKindData : Data {
  void Build() {
    items_28.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRefList<ItemData> items_28;
};

static_assert(sizeof(SubquestDeliveryKindData) == 0x38);

struct AutoGrowHeroItemData : Data {
  void Build() {
    person_20.Resolve();
    items_30.Resolve();
    items_40.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<PersonData> person_20;
  DataRefList<ItemData> items_30;
  DataRefList<ItemData> items_40;
};

static_assert(sizeof(AutoGrowHeroItemData) == 0x50);

struct AutoGrowJobData : Data {
  void Build() {
    job_20.Resolve();
    person_40.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<JobData> job_20;
  unsigned char unknown_30[0x10];
  DataRef<PersonData> person_40;
};

static_assert(sizeof(AutoGrowJobData) == 0x50);

struct CalendarBirthdayData : Data {
  void Build() {
    person_20.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<PersonData> person_20;
  unsigned char unknown_30[0x8];
};

static_assert(sizeof(CalendarBirthdayData) == 0x38);

struct CalendarData : Data {
  void Build() {
    calendar_detail_28.Resolve();
    calendar_detail_38.Resolve();
    calendar_detail_48.Resolve();
    calendar_detail_58.Resolve();
    calendar_detail_68.Resolve();
    calendar_detail_78.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRef<CalendarDetailData> calendar_detail_28;
  DataRef<CalendarDetailData> calendar_detail_38;
  DataRef<CalendarDetailData> calendar_detail_48;
  DataRef<CalendarDetailData> calendar_detail_58;
  DataRef<CalendarDetailData> calendar_detail_68;
  DataRef<CalendarDetailData> calendar_detail_78;
};

static_assert(sizeof(CalendarData) == 0x88);

struct Part2SuppliedItemData : Data {
  void Build() {
    items_38.Resolve();
  }

  unsigned char unknown_18[0x20];
  DataRefList<ItemData> items_38;
  unsigned char unknown_48[0x10];
};

static_assert(sizeof(Part2SuppliedItemData) == 0x58);

struct Part2SuppliedLegionData : Data {
  void Build() {
    legions_28.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRefList<LegionData> legions_28;
};

static_assert(sizeof(Part2SuppliedLegionData) == 0x38);

struct AutoGrowItemData : Data {
  void Build() {
    item_20.Resolve();
    item_30.Resolve();
    item_40.Resolve();
    item_50.Resolve();
    item_60.Resolve();
    item_70.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<ItemData> item_20;
  DataRef<ItemData> item_30;
  DataRef<ItemData> item_40;
  DataRef<ItemData> item_50;
  DataRef<ItemData> item_60;
  DataRef<ItemData> item_70;
};

static_assert(sizeof(AutoGrowItemData) == 0x80);

struct AutoGrowLegionData : Data {
  void Build() {
    legion_20.Resolve();
    legion_30.Resolve();
    legion_40.Resolve();
    legion_50.Resolve();
    legion_60.Resolve();
    legion_70.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<LegionData> legion_20;
  DataRef<LegionData> legion_30;
  DataRef<LegionData> legion_40;
  DataRef<LegionData> legion_50;
  DataRef<LegionData> legion_60;
  DataRef<LegionData> legion_70;
};

static_assert(sizeof(AutoGrowLegionData) == 0x80);

struct RecommendData : Data {
  void Build() {
    person_90.Resolve();
    gmap_spot_a0.Resolve();
  }

  unsigned char unknown_18[0x78];
  DataRef<PersonData> person_90;
  DataRef<GmapSpotData> gmap_spot_a0;
  unsigned char unknown_b0[0x80];
};

static_assert(sizeof(RecommendData) == 0x130);

struct FacilitySceneObjectData : Data {
  void Build() {
    facility_scene_effects_38.Resolve();
  }

  unsigned char unknown_18[0x20];
  DataRefList<FacilitySceneEffectData> facility_scene_effects_38;
  unsigned char unknown_48[0x8];
};

static_assert(sizeof(FacilitySceneObjectData) == 0x50);

struct TheaterActRewardData : Data {
  void Build() {
    lottery_28.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRef<LotteryGroup> lottery_28;
  unsigned char unknown_38[0x8];
};

static_assert(sizeof(TheaterActRewardData) == 0x40);

struct GmapRegionData : Data {
  void Build() {
    gmap_troop_30.Resolve();
    items_40.Resolve();
    gmap_troops_50.Resolve();
    gmap_troops_70.Resolve();
    gmap_troops_80.Resolve();
  }

  unsigned char unknown_18[0x18];
  DataRef<GmapTroopData> gmap_troop_30;
  DataRefList<ItemData> items_40;
  DataRefList<GmapTroopData> gmap_troops_50;
  unsigned char unknown_60[0x10];
  DataRefList<GmapTroopData> gmap_troops_70;
  DataRefList<GmapTroopData> gmap_troops_80;
  unsigned char unknown_90[0x38];
};

static_assert(sizeof(GmapRegionData) == 0xc8);

struct GmapCommandData : Data {
  void Build() {
    person_20.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<PersonData> person_20;
  unsigned char unknown_30[0x10];
  uint8_t unknown_40;
  uint8_t unknown_41;
  uint8_t unknown_42;
  unsigned char unknown_43[0x2d];
};

static_assert(sizeof(GmapCommandData) == 0x70);

struct GmapConstructionData : Data {
  void Build() {
    person_20.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<PersonData> person_20;
  uint8_t unknown_30;
  unsigned char unknown_31[0x2f];
};

static_assert(sizeof(GmapConstructionData) == 0x60);

struct GmapConstructedObjectData : Data {
  unsigned char unknown_18[0x8];
  uint8_t unknown_20;
  unsigned char unknown_21[0x27];
};

static_assert(sizeof(GmapConstructedObjectData) == 0x48);

struct GmapLegionTableData : Data {
  void Build() {
    legions_28.Resolve();
    legions_38.Resolve();
    legions_48.Resolve();
    legions_58.Resolve();
    legions_68.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRefList<LegionData> legions_28;
  DataRefList<LegionData> legions_38;
  DataRefList<LegionData> legions_48;
  DataRefList<LegionData> legions_58;
  DataRefList<LegionData> legions_68;
};

static_assert(sizeof(GmapLegionTableData) == 0x78);

struct GmapFarmTableData : Data {
  void Build() {
    item_28.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRef<ItemData> item_28;
};

static_assert(sizeof(GmapFarmTableData) == 0x38);

struct GmapShowData : Data {
  void Build() {
    gmap_spot_30.Resolve();
    gmap_troop_40.Resolve();
    items_50.Resolve();
    items_60.Resolve();
  }

  unsigned char unknown_18[0x18];
  DataRef<GmapSpotData> gmap_spot_30;
  DataRef<GmapTroopData> gmap_troop_40;
  DataRefList<ItemData> items_50;
  DataRefList<ItemData> items_60;
  unsigned char unknown_70[0x8];
};

static_assert(sizeof(GmapShowData) == 0x78);

struct GmapKetosTableData : Data {
  void Build() {
    gmap_spot_20.Resolve();
    gmap_troop_30.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<GmapSpotData> gmap_spot_20;
  DataRef<GmapTroopData> gmap_troop_30;
  unsigned char unknown_40[0x18];
};

static_assert(sizeof(GmapKetosTableData) == 0x58);

struct DivinationVisitorData : Data {
  void Build() {
    person_20.Resolve();
    lottery_40.Resolve();
    subquest_50.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<PersonData> person_20;
  unsigned char unknown_30[0x10];
  DataRef<LotteryGroup> lottery_40;
  DataRef<SubquestData> subquest_50;
};

static_assert(sizeof(DivinationVisitorData) == 0x60);


// Rows that keep a lazily created state object at 0x18, deleted by Unbuild.
template<typename State>
struct DataState : Data {
  [[gnu::always_inline]] void Unbuild() {
    delete state;
    state = nullptr;
  }

  State* state;
};

struct ChapterVariableData : DataState<FlagCondition> {
  void Build() {
    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  unsigned char unknown_20[0x8];
  NameList conditions;
  unsigned char unknown_38[0x20];
};

static_assert(sizeof(ChapterVariableData) == 0x58);

struct TalkRestrictData : DataState<FlagCondition> {
  void Build() {
    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  NameList conditions;
};

static_assert(sizeof(TalkRestrictData) == 0x30);

struct GmapHadesData : DataState<FlagCondition> {
  void Build() {
    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  NameList conditions;
  unsigned char unknown_30[0x8];
};

static_assert(sizeof(GmapHadesData) == 0x38);

struct GmapTalkData : DataState<FlagCondition> {
  void Build() {
    gmap_spot_20.Resolve();

    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  DataRef<GmapSpotData> gmap_spot_20;
  unsigned char unknown_30[0x10];
  NameList conditions;
  unsigned char unknown_50[0x10];
};

static_assert(sizeof(GmapTalkData) == 0x60);

struct GmapSpecialDisposData : DataState<FlagCondition> {
  void Build() {
    gmap_spot_28.Resolve();
    person_38.Resolve();

    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  unsigned char unknown_20[0x8];
  DataRef<GmapSpotData> gmap_spot_28;
  DataRef<PersonData> person_38;
  unsigned char unknown_48[0x8];
  NameList conditions;
  unsigned char unknown_60[0x10];
};

static_assert(sizeof(GmapSpecialDisposData) == 0x70);

struct CostumeData : DataState<FlagCondition> {
  void Build() {
    person_20.Resolve();
    job_30.Resolve();
    skill_40.Resolve();

    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  DataRef<PersonData> person_20;
  DataRef<JobData> job_30;
  DataRef<SkillData> skill_40;
  NameList conditions;
};

static_assert(sizeof(CostumeData) == 0x60);

struct LotteryData : DataState<FlagCondition> {
  void Build() {
    item_20.Resolve();

    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  DataRef<ItemData> item_20;
  unsigned char unknown_30[0x8];
  NameList conditions;
};

static_assert(sizeof(LotteryData) == 0x48);

struct GmapCarriageData : DataState<FlagCondition> {
  void Build() {
    gmap_spot_20.Resolve();
    gmap_spots_30.Resolve();

    if (state == nullptr) {
      state = new FlagCondition();
    }

    state->Set(conditions);
  }

  DataRef<GmapSpotData> gmap_spot_20;
  DataRefList<GmapSpotData> gmap_spots_30;
  unsigned char unknown_40[0x8];
  NameList conditions;
  unsigned char unknown_58[0x8];
};

static_assert(sizeof(GmapCarriageData) == 0x60);

struct HubAreaTagData : DataState<FlagConditionList> {
  void Build() {
    if (state == nullptr) {
      state = new FlagConditionList();
    }

    state->Assign(conditions);
  }

  unsigned char unknown_20[0x8];
  NameListArray conditions;
  unsigned char unknown_38[0x10];
};

static_assert(sizeof(HubAreaTagData) == 0x48);

struct GmapGateData : DataState<FlagConditionList> {
  void Build() {
    gmap_spots_20.Resolve();

    if (state == nullptr) {
      state = new FlagConditionList();
    }

    state->Assign(conditions);
  }

  DataRefList<GmapSpotData> gmap_spots_20;
  unsigned char unknown_30[0x8];
  NameListArray conditions;
  unsigned char unknown_48[0x30];
};

static_assert(sizeof(GmapGateData) == 0x78);

struct HubRandomDropData : DataState<FlagConditionList> {
  void Build() {
    if (state == nullptr) {
      state = new FlagConditionList();
    }

    state->Assign(conditions);
    items_38.Resolve();
  }

  unsigned char unknown_20[0x8];
  NameListArray conditions;
  DataRefList<ItemData> items_38;
  unsigned char unknown_48[0x18];
};

static_assert(sizeof(HubRandomDropData) == 0x60);

struct LearnState : FlagCondition {
  bool learned;
};

struct LearnData : DataState<LearnState> {
  void Build() {
    skill_28.Resolve();

    if (state == nullptr) {
      state = new LearnState();
    }

    state->Set(conditions);
    state->learned = false;
  }

  unsigned char unknown_20[0x8];
  DataRef<SkillData> skill_28;
  NameList conditions;
};

static_assert(sizeof(LearnData) == 0x48);

struct AssetConditionState : FlagConditionList {
  uint64_t unknown_30;
};

struct AssetConditionData : DataState<AssetConditionState> {
  void Build() {
    if (state == nullptr) {
      state = new AssetConditionState();
    }

    state->Assign(conditions);
    state->unknown_30 = 0;
  }

  NameListArray conditions;
  unsigned char unknown_30[0x10];
};

static_assert(sizeof(AssetConditionData) == 0x40);

struct ResponseState {
  const Data* owner;
  FlagCondition condition;
};

struct FacilitySceneCharacterResponseData : DataState<ResponseState> {
  void Build() {
    person_20.Resolve();

    if (state == nullptr) {
      state = new ResponseState();
    }

    state->owner = this;
    state->condition.Set(conditions);
  }

  DataRef<PersonData> person_20;
  NameList conditions;
  unsigned char unknown_40[0x10];
};

static_assert(sizeof(FacilitySceneCharacterResponseData) == 0x50);

struct IndependentState {};

struct IndependentData : DataState<IndependentState> {
  void Build() {
    lottery_38.Resolve();

    if (state == nullptr) {
      state = new IndependentState;
    }
  }

  unsigned char unknown_20[0x18];
  DataRef<LotteryGroup> lottery_38;
  unsigned char unknown_48[0x8];
};

static_assert(sizeof(IndependentData) == 0x50);

struct CausationState {
  void Reset() {
    unknown_00 = 0;
    unknown_08 = 0;
    unknown_10 = 0;
  }

  int32_t unknown_00;
  uint64_t unknown_08;
  uint64_t unknown_10;
};

struct CausationData : DataState<CausationState> {
  void Build() {
    if (state == nullptr) {
      state = new CausationState();
    }

    state->Reset();
  }

  unsigned char unknown_20[0x20];
};

static_assert(sizeof(CausationData) == 0x40);

struct WatchingArenaData : DataState<std::string> {
  void Build() {
    if (state == nullptr) {
      state = new std::string();
    }
  }

  unsigned char unknown_20[0x40];
};

static_assert(sizeof(WatchingArenaData) == 0x60);


struct ExpCalcData : Data {
  void Build() {
    exp_ratio_20.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<ExpRatioGroup> exp_ratio_20;
};

static_assert(sizeof(ExpCalcData) == 0x30);

struct CalendarSideStoryData : Data {
  void Build() {
    side_story_20.Resolve();
  }

  unsigned char unknown_18[0x8];
  DataRef<SideStoryData> side_story_20;
  unsigned char unknown_30[0x8];
};

static_assert(sizeof(CalendarSideStoryData) == 0x38);

struct FacilitySceneMapData : Data {
  void Build() {
    variation_38.Resolve();
  }

  unsigned char unknown_18[0x20];
  DataRef<FacilitySceneMapVariationGroup> variation_38;
  unsigned char unknown_48[0x28];
};

static_assert(sizeof(FacilitySceneMapData) == 0x70);

struct FacilitySceneLocationData : Data {
  void Build() {
    location_30.Resolve();
  }

  unsigned char unknown_18[0x18];
  DataRef<FacilitySceneLocationData> location_30;
  unsigned char unknown_40[0x10];
};

static_assert(sizeof(FacilitySceneLocationData) == 0x50);

struct ExteriorData : Data {
  // The placeholder face name means no face.
  void Build() {
    if (face != nullptr && face[0] != '\0' &&
        std::string_view(face) == "NoFace") {
      face = nullptr;
    }
  }

  unsigned char unknown_18[0x10];
  const char* face;
  unsigned char unknown_30[0x20];
};

static_assert(sizeof(ExteriorData) == 0x50);

struct GmapReconstructionData : Data {
  // Only the hashing of a release build check survived.
  void Build() {
    const size_t count = names.count;

    for (size_t i = 0; i < count; ++i) {
      HashString(names.names[i]);
    }
  }

  unsigned char unknown_18[0x8];
  NameList names;
  unsigned char unknown_30[0x20];
};

static_assert(sizeof(GmapReconstructionData) == 0x50);

struct SituationState {
  SituationState() = default;
  [[gnu::always_inline]] ~SituationState() = default;

  uint16_t unknown_00;
  uint16_t unknown_02;
  uint16_t unknown_04;
  uint16_t hour;
  uint32_t unknown_08;
  FlagConditionList conditions;
};

struct SituationData : DataState<SituationState> {
  void Build() {
    gmap_spot_38.Resolve();
    person_50.Resolve();

    if (state == nullptr) {
      state = new SituationState();
    }

    state->unknown_00 = unknown_30;
    state->unknown_02 = unknown_32;
    state->unknown_04 = unknown_33;
    state->hour = time % 4 * 6;
    state->unknown_08 = 0;
    state->conditions.Assign(conditions);
  }

  NameListArray conditions;
  uint16_t unknown_30;
  uint8_t unknown_32;
  uint8_t unknown_33;
  uint8_t time;
  DataRef<GmapSpotData> gmap_spot_38;
  unsigned char unknown_48[0x8];
  DataRef<PersonData> person_50;
};

static_assert(sizeof(SituationData) == 0x60);


struct GmapExploreData : DataState<FlagCondition> {
  unsigned char unknown_20[0x30];
};

static_assert(sizeof(GmapExploreData) == 0x50);

struct ScoutState {
  uint64_t unknown_00;
  std::vector<const void*> unknown_08;
  std::vector<const void*> unknown_20;
  std::vector<const void*> unknown_38;
  std::vector<const void*> unknown_50;
};

struct ScoutData : DataState<ScoutState> {
  unsigned char unknown_20[0x80];
};

static_assert(sizeof(ScoutData) == 0xa0);

struct TrainingState {
  uint64_t unknown_00;
  std::vector<const void*> unknown_08;
  std::vector<const void*> unknown_20;
  std::vector<const void*> unknown_38;
  std::vector<const void*> unknown_50;
};

struct TrainingData : DataState<TrainingState> {
  unsigned char unknown_20[0x88];
};

static_assert(sizeof(TrainingData) == 0xa8);

struct ProfileState {
  uint64_t unknown_00;
  std::vector<const void*> unknown_08;
  std::vector<const void*> unknown_20;
  std::vector<const void*> unknown_38;
  std::vector<const void*> unknown_50;
};

struct ProfileData : DataState<ProfileState> {
  unsigned char unknown_20[0x128];
};

static_assert(sizeof(ProfileData) == 0x148);

struct GmapHubSimpleState {
  std::vector<const void*> unknown_00;
};

struct GmapHubSimpleData : DataState<GmapHubSimpleState> {
  unsigned char unknown_20[0x18];
};

static_assert(sizeof(GmapHubSimpleData) == 0x38);

struct EntrustEquipState {
  std::vector<const void*> unknown_00;
};

struct EntrustEquipData : DataState<EntrustEquipState> {
  unsigned char unknown_20[0x20];
};

static_assert(sizeof(EntrustEquipData) == 0x40);

struct DramaState {
  std::vector<const void*> unknown_00;
};

struct DramaData : DataState<DramaState> {
  unsigned char unknown_20[0xb8];
};

static_assert(sizeof(DramaData) == 0xd8);

struct HubFastTravelData : DataState<std::string> {
  unsigned char unknown_20[0x20];
};

static_assert(sizeof(HubFastTravelData) == 0x40);

struct FacilitySceneObjectLocationData : DataState<std::string> {
  unsigned char unknown_20[0x28];
};

static_assert(sizeof(FacilitySceneObjectLocationData) == 0x48);

struct DramaScenarioData : DataState<std::string> {
  unsigned char unknown_20[0x140];
};

static_assert(sizeof(DramaScenarioData) == 0x160);

struct DramaHighlightData : DataState<std::string> {
  unsigned char unknown_20[0x28];
};

static_assert(sizeof(DramaHighlightData) == 0x48);

struct ExSpotData : DataState<std::string> {
  unsigned char unknown_20[0x30];
};

static_assert(sizeof(ExSpotData) == 0x50);

struct PerchAnswerData : DataState<std::string> {
  unsigned char unknown_20[0x8];
};

static_assert(sizeof(PerchAnswerData) == 0x28);

struct PerchQuestionState {
  const Data* owner;
  FlagCondition condition;
  uint64_t unknown_38;
  uint64_t unknown_40;
};

struct PerchQuestionData : DataState<PerchQuestionState> {
  void Build() {
    person_20.Resolve();
    answer_40.Resolve();
    answer_50.Resolve();
    answer_60.Resolve();
    answer_70.Resolve();
    answer_80.Resolve();
    answer_90.Resolve();
    answer_a0.Resolve();
    answer_b0.Resolve();
    answer_c0.Resolve();
    answer_d0.Resolve();

    if (state == nullptr) {
      state = new PerchQuestionState();
    }

    state->owner = this;
    state->condition.Set(conditions);
    state->unknown_38 = 0;
    state->unknown_40 = 0;
  }

  DataRef<PersonData> person_20;
  NameList conditions;
  DataRef<PerchAnswerData> answer_40;
  DataRef<PerchAnswerData> answer_50;
  DataRef<PerchAnswerData> answer_60;
  DataRef<PerchAnswerData> answer_70;
  DataRef<PerchAnswerData> answer_80;
  DataRef<PerchAnswerData> answer_90;
  DataRef<PerchAnswerData> answer_a0;
  DataRef<PerchAnswerData> answer_b0;
  DataRef<PerchAnswerData> answer_c0;
  DataRef<PerchAnswerData> answer_d0;
};

static_assert(sizeof(PerchQuestionData) == 0xe0);

struct FacilityUsedDemoState {
  uint64_t unknown_00;
  uint64_t unknown_08;
  FlagCondition condition;
  uint8_t unknown_40;
  uint32_t begin;
  uint32_t end;
};

struct FacilityUsedDemoData : DataState<FacilityUsedDemoState> {
  void Build() {
    if (state == nullptr) {
      state = new FacilityUsedDemoState();
    }

    state->unknown_00 = unknown_20;
    state->unknown_08 = unknown_28;
    state->condition.Set(conditions);
    state->unknown_40 = unknown_34;
    state->begin = begin_major * 1000 + begin_minor;
    state->end = (end_major != 0 ? end_major : 10) * 1000 +
      (end_minor != 0 ? end_minor : 100);
  }

  uint64_t unknown_20;
  uint64_t unknown_28;
  uint8_t begin_major;
  uint8_t begin_minor;
  uint8_t end_major;
  uint8_t end_minor;
  uint8_t unknown_34;
  NameList conditions;
};

static_assert(sizeof(FacilityUsedDemoData) == 0x48);

struct FacilitySceneCameraMotionData : DataState<bool> {
  // Marks motions whose seven parameters are all zero.
  void Build() {
    if (state == nullptr) {
      state = new bool(false);
    }

    if (parameters[0] == 0.0f && parameters[1] == 0.0f &&
        parameters[2] == 0.0f && parameters[3] == 0.0f &&
        parameters[4] == 0.0f && parameters[5] == 0.0f &&
        parameters[6] == 0.0f) {
      *state = true;
    }
  }

  float parameters[7];
  unsigned char unknown_3c[0xc];
};

static_assert(sizeof(FacilitySceneCameraMotionData) == 0x48);

// Rows whose build code is not reconstructed yet. Their states are only known
// from the destruction in Unbuild, so unread members are placeholders.
struct ThermaeDataState {
  uint64_t unknown_00;
};

struct ThermaeData : DataState<ThermaeDataState> {
  unsigned char unknown_20[0x50];
};

static_assert(sizeof(ThermaeData) == 0x70);

struct SideStoryDataState {
  unsigned char unknown_00[0x58];
  std::unique_ptr<unsigned char[]> unknown_58;
};

struct SideStoryData : DataState<SideStoryDataState> {
  unsigned char unknown_20[0x160];
};

static_assert(sizeof(SideStoryData) == 0x180);

struct BattleFieldDataState {
  std::string unknown_00;
  unsigned char unknown_18[0x58];
  std::vector<const void*> unknown_70;
};

struct BattleFieldData : DataState<BattleFieldDataState> {
  unsigned char unknown_20[0x1c0];
};

static_assert(sizeof(BattleFieldData) == 0x1e0);

struct LegionDataState {
  std::string unknown_00;
  unsigned char unknown_18[0x10];
  std::vector<const void*> unknown_28;
  std::vector<const void*> unknown_40;
};

struct LegionData : DataState<LegionDataState> {
  unsigned char unknown_20[0xa0];
};

static_assert(sizeof(LegionData) == 0xc0);

struct HonorDataState {
  std::vector<const void*> unknown_00;
  std::vector<const void*> unknown_18;
  std::vector<const void*> unknown_30;
};

struct HonorData : DataState<HonorDataState> {
  unsigned char unknown_20[0x58];
};

static_assert(sizeof(HonorData) == 0x78);

struct NoticeDataState {
  std::vector<const void*> unknown_00;
  std::vector<const void*> unknown_18;
  unsigned char unknown_30[0x10];
  std::string unknown_40;
};

struct NoticeData : DataState<NoticeDataState> {
  unsigned char unknown_20[0xa0];
};

static_assert(sizeof(NoticeData) == 0xc0);

struct ObjectInfoDataState {
  std::unordered_map<uint64_t, const void*> unknown_00;
  std::vector<const void*> unknown_28;
};

struct ObjectInfoData : DataState<ObjectInfoDataState> {
  unsigned char unknown_20[0x78];
};

static_assert(sizeof(ObjectInfoData) == 0x98);

struct GmapTutorialDataState {
  std::vector<const void*> unknown_00;
  std::vector<const void*> unknown_18;
  std::string unknown_30;
  std::string unknown_48;
  std::string unknown_60;
};

struct GmapTutorialData : DataState<GmapTutorialDataState> {
  unsigned char unknown_20[0x20];
};

static_assert(sizeof(GmapTutorialData) == 0x40);

struct SubquestDataState {
  unsigned char unknown_00[0x40];
  std::string unknown_40;
  std::vector<const void*> unknown_58;
  std::vector<const void*> unknown_70;
  std::vector<const void*> unknown_88;
  std::vector<const void*> unknown_a0;
  unsigned char unknown_b8[0x8];
  std::unique_ptr<unsigned char[]> unknown_c0;
};

struct SubquestData : DataState<SubquestDataState> {
  unsigned char unknown_20[0x218];
};

static_assert(sizeof(SubquestData) == 0x238);

struct AchieveInfoDataState {
  unsigned char unknown_00[0x30];
  std::string unknown_30;
  unsigned char unknown_48[0x10];
  std::string unknown_58;
  std::vector<const void*> unknown_70;
  std::vector<const void*> unknown_88;
  std::vector<const void*> unknown_a0;
  std::vector<const void*> unknown_b8;
};

struct AchieveInfoData : DataState<AchieveInfoDataState> {
  unsigned char unknown_20[0x48];
};

static_assert(sizeof(AchieveInfoData) == 0x68);

struct RideDataState {
  unsigned char unknown_00[0x88];
  std::vector<const void*> unknown_88;
  std::vector<const void*> unknown_a0;
  std::vector<const void*> unknown_b8;
  std::vector<const void*> unknown_d0;
  std::vector<const void*> unknown_e8;
  std::vector<const void*> unknown_100;
  std::vector<const void*> unknown_118;
};

struct RideData : DataState<RideDataState> {
  unsigned char unknown_20[0x130];
};

static_assert(sizeof(RideData) == 0x150);

struct RecallCategoryDataEntry {
  unsigned char unknown_00[0x20];
  std::string unknown_20;
  unsigned char unknown_38[0x10];
  std::string unknown_48;
  std::vector<const void*> unknown_60;
  unsigned char unknown_78[0x8];
};

static_assert(sizeof(RecallCategoryDataEntry) == 0x80);

struct RecallCategoryDataState {
  const Data* owner;
  std::vector<RecallCategoryDataEntry> unknown_08;
  std::vector<const void*> unknown_20;
};

struct RecallCategoryData : DataState<RecallCategoryDataState> {
  void Build() {
    recall_label_20.Resolve();

    if (state == nullptr) {
      state = new RecallCategoryDataState();
    }

    state->owner = this;
  }

  DataRef<RecallLabelData> recall_label_20;
  unsigned char unknown_30[0x8];
};

static_assert(sizeof(RecallCategoryData) == 0x38);

struct JobIntroDataState {
  virtual ~JobIntroDataState();
};

struct JobIntroData : DataState<JobIntroDataState> {
  unsigned char unknown_20[0x68];
};

static_assert(sizeof(JobIntroData) == 0x88);

struct GmapDisposDataState {
  uint64_t unknown_00;
};

struct GmapDisposData : DataState<GmapDisposDataState> {
  unsigned char unknown_20[0x70];
};

static_assert(sizeof(GmapDisposData) == 0x90);

struct GmapFixedTalkDataState {
  uint64_t unknown_00;
};

struct GmapFixedTalkData : DataState<GmapFixedTalkDataState> {
  unsigned char unknown_20[0x10];
};

static_assert(sizeof(GmapFixedTalkData) == 0x30);

struct FacilitySceneMobDataState {
  uint64_t unknown_00;
};

struct FacilitySceneMobData : DataState<FacilitySceneMobDataState> {
  unsigned char unknown_20[0x88];
};

static_assert(sizeof(FacilitySceneMobData) == 0xa8);

struct VariationDataState {
  unsigned char unknown_00[0x8];
  std::vector<const void*> unknown_08;
  std::vector<const void*> unknown_20;
  std::vector<const void*> unknown_38;
  std::vector<const void*> unknown_50;
  std::vector<const void*> unknown_68;
  std::vector<const void*> unknown_80;
  std::vector<const void*> unknown_98;
  std::vector<const void*> unknown_b0;
  std::vector<const void*> unknown_c8;
  std::vector<const void*> unknown_e0;
};

struct VariationData : DataState<VariationDataState> {
  unsigned char unknown_20[0xa0];
};

static_assert(sizeof(VariationData) == 0xc0);

struct FacilityOpeningHourDataState {
  std::vector<const void*> unknown_00;
  std::vector<const void*> unknown_18;
};

struct FacilityOpeningHourData : DataState<FacilityOpeningHourDataState> {
  unsigned char unknown_20[0x20];
};

static_assert(sizeof(FacilityOpeningHourData) == 0x40);

struct DisposDataState {
  uint64_t unknown_00;
};

struct DisposData : DataState<DisposDataState> {
  unsigned char unknown_20[0x128];
};

static_assert(sizeof(DisposData) == 0x148);

struct TempleDataEntry {
  std::vector<const void*> unknown_00;
  std::vector<const void*> unknown_18;
};

struct TempleDataState {
  std::vector<TempleDataEntry> unknown_00;
  std::string unknown_18;
  std::string unknown_30;
};

struct TempleData : DataState<TempleDataState> {
  unsigned char unknown_20[0x120];
};

static_assert(sizeof(TempleData) == 0x140);

struct CmdBtlPartyMemberDataEntry {
  std::vector<const void*> unknown_00;
  std::vector<const void*> unknown_18;
};

struct CmdBtlPartyMemberDataState {
  std::vector<CmdBtlPartyMemberDataEntry> unknown_00;
  std::vector<const void*> unknown_18;
};

struct CmdBtlPartyMemberData : DataState<CmdBtlPartyMemberDataState> {
  unsigned char unknown_20[0x48];
};

static_assert(sizeof(CmdBtlPartyMemberData) == 0x68);

struct TutorialDataState {
  unsigned char unknown_00[0x10];
  std::string unknown_10;
  std::vector<const void*> unknown_28;
  std::vector<const void*> unknown_40;
  std::vector<const void*> unknown_58;
  std::vector<const void*> unknown_70;
};

struct TutorialData : DataState<TutorialDataState> {
  unsigned char unknown_20[0x58];
};

static_assert(sizeof(TutorialData) == 0x78);

struct MiracleDataState {
  unsigned char unknown_00[0x10];
  std::vector<const void*> unknown_10;
  unsigned char unknown_28[0x8];
  std::vector<const void*> unknown_30;
  std::vector<const void*> unknown_48;
  unsigned char unknown_60[0x10];
  std::vector<const void*> unknown_70;
  unsigned char unknown_88[0x8];
  std::vector<const void*> unknown_90;
  std::vector<const void*> unknown_a8;
  unsigned char unknown_c0[0x10];
  std::vector<const void*> unknown_d0;
  unsigned char unknown_e8[0x8];
  std::vector<const void*> unknown_f0;
  std::vector<const void*> unknown_108;
  unsigned char unknown_120[0x10];
  std::vector<const void*> unknown_130;
  unsigned char unknown_148[0x8];
  std::vector<const void*> unknown_150;
  std::vector<const void*> unknown_168;
};

struct MiracleData : DataState<MiracleDataState> {
  unsigned char unknown_20[0x90];
};

static_assert(sizeof(MiracleData) == 0xb0);

struct VectorPair {
  std::vector<const void*> first;
  std::vector<const void*> second;
};

struct GmapSpotDataState {
  std::vector<const void*> unknown_00;
  std::vector<const void*> unknown_18;
  std::vector<std::string> unknown_30;
  std::vector<const void*> unknown_48;
};

struct GmapSpotData : DataState<GmapSpotDataState> {
  unsigned char unknown_20[0xe8];
};

static_assert(sizeof(GmapSpotData) == 0x108);

struct HubFacilityOpenDataState {
  std::string unknown_00;
  std::vector<VectorPair> unknown_18;
  std::vector<const void*> unknown_30;
};

struct HubFacilityOpenData : DataState<HubFacilityOpenDataState> {
  unsigned char unknown_20[0x30];
};

static_assert(sizeof(HubFacilityOpenData) == 0x50);

struct BelongDataState {
  std::vector<VectorPair> unknown_00;
  std::vector<const void*> unknown_18;
};

struct BelongData : DataState<BelongDataState> {
  unsigned char unknown_20[0x38];
};

static_assert(sizeof(BelongData) == 0x58);

struct RelianceTalkDataState {
  unsigned char unknown_00[0x10];
  std::string unknown_10;
  unsigned char unknown_28[0x10];
  std::string unknown_38;
  std::string unknown_50;
  unsigned char unknown_68[0x28];
  std::vector<const void*> unknown_90;
  std::vector<const void*> unknown_a8;
  std::vector<VectorPair> unknown_c0;
  std::vector<const void*> unknown_d8;
};

struct RelianceTalkData : DataState<RelianceTalkDataState> {
  unsigned char unknown_20[0x68];
};

static_assert(sizeof(RelianceTalkData) == 0x88);

struct RecallLabelDataEntry {
  unsigned char unknown_00[0x10];
  std::string unknown_10;
};

struct RecallLabelDataState {
  unsigned char unknown_00[0x28];
  std::vector<const void*> unknown_28;
  std::vector<const void*> unknown_40;
  unsigned char unknown_58[0x10];
  std::string unknown_68;
  std::vector<const void*> unknown_80;
  std::vector<const void*> unknown_98;
  std::vector<RecallLabelDataEntry> unknown_b0;
  std::unordered_map<uint64_t, const void*> unknown_c8;
};

struct RecallLabelData : DataState<RecallLabelDataState> {
  unsigned char unknown_20[0x80];
};

static_assert(sizeof(RecallLabelData) == 0xa0);

struct VariableDataEntry {
  unsigned char unknown_00[0x10];
  std::vector<VectorPair> unknown_10;
  std::vector<const void*> unknown_28;
  unsigned char unknown_40[0x8];
};

static_assert(sizeof(VariableDataEntry) == 0x48);

struct VariableDataState {
  unsigned char unknown_00[0x10];
  std::vector<VariableDataEntry> unknown_10;
};

struct VariableData : DataState<VariableDataState> {
  unsigned char unknown_20[0x48];
};

static_assert(sizeof(VariableData) == 0x68);

struct FacilitySceneCameraWorkDataState {
  ~FacilitySceneCameraWorkDataState() {
    unknown_08.clear();
    unknown_20.clear();
  }

  unsigned char unknown_00[0x8];
  std::vector<const void*> unknown_08;
  std::vector<const void*> unknown_20;
};

struct FacilitySceneCameraWorkData
  : DataState<FacilitySceneCameraWorkDataState> {
  unsigned char unknown_20[0xb0];
};

static_assert(sizeof(FacilitySceneCameraWorkData) == 0xd0);

// Cleared on destruction without being released.
struct LessonHandle {
  ~LessonHandle() {
    value = nullptr;
  }

  const void* value;
};

struct LessonDataState {
  std::string unknown_00;
  LessonHandle unknown_18;
};

struct LessonData : DataState<LessonDataState> {
  unsigned char unknown_20[0x70];
};

static_assert(sizeof(LessonData) == 0x90);

struct FacilitySceneCharacterMotionData : Data {
  // Non positive values fall back to -1.
  void Build() {
    if (unknown_38 <= 0.0f) {
      unknown_38 = -1.0f;
    }

    if (unknown_3c <= 0.0f) {
      unknown_3c = -1.0f;
    }
  }

  unsigned char unknown_18[0x20];
  float unknown_38;
  float unknown_3c;
  unsigned char unknown_40[0x8];
};

static_assert(sizeof(FacilitySceneCharacterMotionData) == 0x48);

struct GmapTroopData : Data {
  void Build() {
    shop_48.Resolve();
    battle_field_30.Resolve();
    persons_88.Resolve();
    persons_98.Resolve();
    gmap_encount_a8.Resolve();
    gmap_encount_b8.Resolve();
    items_58.Resolve();
  }

  unsigned char unknown_18[0x18];
  DataRef<BattleFieldData> battle_field_30;
  unsigned char unknown_40[0x8];
  DataRef<ShopGroup> shop_48;
  DataRefList<ItemData> items_58;
  unsigned char unknown_68[0x20];
  DataRefList<PersonData> persons_88;
  DataRefList<PersonData> persons_98;
  DataRef<GmapEncountData> gmap_encount_a8;
  DataRef<GmapEncountData> gmap_encount_b8;
};

static_assert(sizeof(GmapTroopData) == 0xc8);

struct CmdBtlPartySettingData : Data {
  void Build() {
    field_28.Resolve();
    persons_48.Resolve();
    party_member_58.Resolve();
    party_member_68.Resolve();
  }

  unsigned char unknown_18[0x10];
  DataRef<CmdBtlFieldData> field_28;
  unsigned char unknown_38[0x10];
  DataRefList<PersonData> persons_48;
  DataRef<CmdBtlPartyMemberDataArray> party_member_58;
  DataRef<CmdBtlPartyMemberDataArray> party_member_68;
  unsigned char unknown_78[0x30];
};

static_assert(sizeof(CmdBtlPartySettingData) == 0xa8);

struct TerrainDataState {
  std::vector<const void*> unknown_00;
  unsigned char unknown_18[0x8];
  std::vector<const void*> unknown_20;
  std::vector<const void*> unknown_38;
  unsigned char unknown_50[0x10];
  std::vector<const void*> unknown_60;
  unsigned char unknown_78[0x8];
  std::vector<const void*> unknown_80;
  std::vector<const void*> unknown_98;
  unsigned char unknown_b0[0x10];
  std::vector<const void*> unknown_c0;
  unsigned char unknown_d8[0x8];
  std::vector<const void*> unknown_e0;
  std::vector<const void*> unknown_f8;
  unsigned char unknown_110[0x10];
  std::vector<const void*> unknown_120;
  unsigned char unknown_138[0x8];
  std::vector<const void*> unknown_140;
  std::vector<const void*> unknown_158;
  unsigned char unknown_170[0x10];
  std::vector<const void*> unknown_180;
  unsigned char unknown_198[0x8];
  std::vector<const void*> unknown_1a0;
  std::vector<const void*> unknown_1b8;
  unsigned char unknown_1d0[0x10];
  std::vector<const void*> unknown_1e0;
  std::vector<const void*> unknown_1f8;
};

struct TerrainData : DataState<TerrainDataState> {
  unsigned char unknown_20[0x180];
};

static_assert(sizeof(TerrainData) == 0x1a0);

}

#pragma GCC visibility pop
