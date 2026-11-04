#include "game/unit.hpp"

namespace game {

int Unit::count_ = 0;

Unit::~Unit() {
  if (work_ != nullptr) {
    delete work_;
    work_ = nullptr;
  }
  --count_;
}

}
