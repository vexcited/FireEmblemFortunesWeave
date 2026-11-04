#pragma GCC visibility push(hidden)
#include "game/facility/scene_args.hpp"
#pragma GCC visibility pop

namespace game::facility {

void TrainingArgs::Unknown02(void* out, int index) {
  SetupTrainingEntry(out, index != 0 ? &entries_[1] : &entries_[0], {});
}

void SortiePlanTrainingArgs::Unknown02(void* out, int index) {
  if (index < static_cast<int>(entries_.size())) {
    SetupTrainingEntry(out, &entries_[index], {1, 0});
  }
}

void SortiePlanBottomUpArgs::Unknown02(void* out, int index) {
  if (index < static_cast<int>(entries_.size())) {
    SetupTrainingEntry(out, &entries_[index], {1, 0});
  }
}

}
