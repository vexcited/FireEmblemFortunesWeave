#pragma once

#include <cstdint>

#include "game/singleton.hpp"

namespace game::facility {

#pragma GCC visibility push(hidden)

// Facility state shared by the menus, such as the selected unit.
class Mind : public Singleton<Mind> {
public:
  int32_t unit_index_;
  uint8_t unknown_0c_[0x8];
  int32_t unknown_14_;
};

#pragma GCC visibility pop

}

namespace game {

// The menus reach these through the global offset table.
template<>
[[gnu::visibility("default")]] facility::Mind* Singleton<facility::Mind>::instance_;

template<>
[[gnu::visibility("default")]] int Singleton<facility::Mind>::registered_;

}
