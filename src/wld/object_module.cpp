#pragma GCC visibility push(hidden)
#include "wld/object.hpp"
#include "wld/object_module.hpp"
#pragma GCC visibility pop

namespace wld {

void ObjectModule::UpdateStage0() {
  if (!stages_[0].left) {
    stages_[0].left = true;
    object_->MarkStageStale(0);
  }
}

void ObjectModule::UpdateStage1() {
  if (!stages_[1].left) {
    stages_[1].left = true;
    object_->MarkStageStale(1);
  }
}

void ObjectModule::UpdateStage2() {
  if (!stages_[2].left) {
    stages_[2].left = true;
    object_->MarkStageStale(2);
  }
}

void ObjectModule::UpdateStage3() {
  if (!stages_[3].left) {
    stages_[3].left = true;
    object_->MarkStageStale(3);
  }
}

}
