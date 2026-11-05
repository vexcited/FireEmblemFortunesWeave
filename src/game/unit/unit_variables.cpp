#include "game/unit.hpp"

namespace game {

#pragma GCC visibility push(hidden)

Unit::Variables& Unit::Variables::operator=(const Variables& other) {
  Clear();
  unknown_04_ = other.unknown_04_;
  unknown_00_ = other.unknown_00_;
  unknown_01_ = other.unknown_01_;
  unknown_02_ = other.unknown_02_;
  unknown_03_ = other.unknown_03_;
  flags = other.flags;
  if (this != &other) {
    name = other.name;
    values = other.values;
  }
  return *this;
}

#pragma GCC visibility pop

}
