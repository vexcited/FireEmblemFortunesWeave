#include "game/data/data_files.hpp"
#include "game/data/data_rows.hpp"

namespace game {

// The larger OnBuild overrides of these files also index short hashes, each
// through its own out of line copy.
template void DataFile<JobData, JobData>::AddShortHash(uint32_t, JobData*);
template void DataFile<PersonData, PersonData>::AddShortHash(
  uint32_t, PersonData*
);
template void DataFile<TerrainData, TerrainData>::AddShortHash(
  uint32_t, TerrainData*
);
template void DataFile<ItemData, ItemData>::AddShortHash(uint32_t, ItemData*);
template void DataFile<SkillData, SkillData>::AddShortHash(
  uint32_t, SkillData*
);
template void DataFile<RideData, RideData>::AddShortHash(uint32_t, RideData*);
template void DataFile<ProfileData, ProfileData>::AddShortHash(
  uint32_t, ProfileData*
);
template void DataFile<SubquestData, SubquestData>::AddShortHash(
  uint32_t, SubquestData*
);

}
