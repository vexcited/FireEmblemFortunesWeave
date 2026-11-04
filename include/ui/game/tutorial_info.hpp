#pragma once

#include <cstdint>
#include <memory>

#include "ui/layout.hpp"
#include "ui/layout_control.hpp"

namespace game::menu {

#pragma GCC visibility push(hidden)

class TutorialInfoImpl {
public:
  TutorialInfoImpl(void* owner, void* context, bool delayed);
  virtual ~TutorialInfoImpl();

private:
  alignas(16) uint8_t unknown_10_[0x130];
};

// The game builds it inside a tutorial menu method that is not recovered yet.
std::shared_ptr<TutorialInfoImpl> MakeTutorialInfo(void* owner,
  void* context);

#pragma GCC visibility pop

}
