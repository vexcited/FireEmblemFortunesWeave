#pragma GCC visibility push(hidden)
#include "game/data/data_files.hpp"
#include "game/facility/mind.hpp"
#include "game/facility/scene_args.hpp"
#pragma GCC visibility pop

namespace game::facility {

int GetVolunteerUnknown(const TempleData* temple, uint8_t result);
int GetSortiePlanVolunteerUnknown(const TempleData* temple, uint8_t result);

void VolunteerArgs::Setup() {
  Clear();

  Mind* mind = Mind::GetInstance();
  int index = mind->data_index_;
  temple_ = index < 0 ? nullptr : TempleFile::GetInstance()->At(index);

  for (map::Unit* unit : mind->units_) {
    units_.push_back(unit);
  }
}

int VolunteerArgs::Unknown09() {
  return GetVolunteerUnknown(temple_, result_);
}

void SortiePlanVolunteerArgs::Setup() {
  Clear();

  int index = Mind::GetInstance()->data_index_;
  temple_ = index < 0 ? nullptr : TempleFile::GetInstance()->At(index);
}

const std::vector<map::Unit*>& SortiePlanVolunteerArgs::GetUnits() {
  static const std::vector<map::Unit*> units;
  return units;
}

const VolunteerPair& SortiePlanVolunteerArgs::Unknown08() {
  static const VolunteerPair pair{};
  return pair;
}

int SortiePlanVolunteerArgs::Unknown09() {
  return GetSortiePlanVolunteerUnknown(temple_, result_);
}

}
