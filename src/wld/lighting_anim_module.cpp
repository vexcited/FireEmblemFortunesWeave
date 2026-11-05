#include <float.h>

#include "wld/object.hpp"
#include "wld/object_module.hpp"

namespace wld {

LightingAnimModule::~LightingAnimModule() = default;

// The clock delta is scaled to 60 frames per second.
void LightingAnimModule::UpdateStage1() {
  const float step =
    speed_ * (object_->GetClock()->delta * 16.683f * 0.001f);
  if (!(step > 0)) {
    return;
  }
  for (Animation& animation : animations_) {
    float value;
    if (animation.current > animation.target + FLT_EPSILON) {
      value = animation.current - step;
      value = value < animation.target ? animation.target : value;
    }
    else if (animation.current < animation.target - FLT_EPSILON) {
      value = step + animation.current;
      value = value > animation.target ? animation.target : value;
    }
    else {
      continue;
    }
    animation.current = value;
    lights_->Apply(animation.light, false);
  }
}

}
