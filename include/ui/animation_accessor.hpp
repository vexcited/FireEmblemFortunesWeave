#pragma once

#include <string>

#include "ui/layout_accessor.hpp"

namespace ui {

// A layout accessor that plays one named animation at a time.
class AnimationAccessor : public LayoutAccessor {
public:
  ~AnimationAccessor();

  bool IsFinished();
  void Stop();

  const std::string& GetName() const {
    return name_;
  }

private:
  void* animation_;
  float speed_;
  std::string name_;
  std::string next_;
};

static_assert(sizeof(AnimationAccessor) == 0xa8);

}
