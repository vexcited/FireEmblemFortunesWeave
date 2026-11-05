#include "game/map/stream_data.hpp"

namespace game {

#pragma GCC visibility push(hidden)

template<>
struct DataFileOf<AISequenceData> {
  using type = AIFile;
};

template const LegionData* Stream::ReadData<LegionData>();
template const BattleFieldData* Stream::ReadData<BattleFieldData>();
template const BattleFieldData* Stream::ReadShortData<BattleFieldData>();
template const SideStoryData* Stream::ReadData<SideStoryData>();
template const TerrainData* Stream::ReadData<TerrainData>();
template const GmapSpotData* Stream::ReadData<GmapSpotData>();
template const GmapSpotData* Stream::ReadShortData<GmapSpotData>();
template const ProfileData* Stream::ReadShortData<ProfileData>();
template const ExteriorData* Stream::ReadShortData<ExteriorData>();
template const AISequenceData* Stream::ReadData<AISequenceData>();
template const SubquestData* Stream::ReadData<SubquestData>();

#pragma GCC visibility pop

}
