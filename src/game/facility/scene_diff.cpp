#pragma GCC visibility push(hidden)
#include "game/facility/scene_diff.hpp"
#pragma GCC visibility pop

namespace game::facility {

[[gnu::used]] DiningSceneDiff::DiningSceneDiff() = default;
[[gnu::used]] VolunteerSceneDiff::VolunteerSceneDiff() = default;
[[gnu::used]] PerchSceneDiff::PerchSceneDiff() = default;
[[gnu::used]] TheaterSceneDiff::TheaterSceneDiff() = default;
[[gnu::used]] StableSceneDiff::StableSceneDiff() = default;
[[gnu::used]] TrainingSceneDiff::TrainingSceneDiff() = default;
[[gnu::used]] BanquetSceneDiff::BanquetSceneDiff() = default;
[[gnu::used]] SkillReinforceSceneDiff::SkillReinforceSceneDiff() = default;
[[gnu::used]] ShowmanSceneDiff::ShowmanSceneDiff() = default;

const char* DiningSceneDiff::Unknown04() {
  return args_->recipe_ != nullptr ? args_->recipe_->name_ : "";
}

const char* SkillReinforceSceneDiff::Unknown04() {
  const SceneNamed* unit = nullptr;
  if (reinforce_args_ != nullptr) {
    unit = reinforce_args_->unit_;
  }
  else if (educate_args_ != nullptr) {
    unit = educate_args_->unit_;
  }

  return unit != nullptr ? unit->name_ : "";
}

}
