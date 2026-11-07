#pragma once

#include <cstdint>
#include <map>
#include <string>

namespace game::menu {

// An entry listed by the item result telop and the delivery dialog, its
// variables are laid out like those of a unit and clear themselves too.
struct ItemResultEntry {
  struct Variables {
    ~Variables() {
      flags = 0;
      unknown_00_ = 0;
      name.clear();
      values.clear();
    }

    uint64_t unknown_00_;
    int flags;
    std::map<uint8_t, uint16_t> values;
    std::string name;
  };

  uint8_t unknown_00_[0x18];
  Variables variables;
  uint8_t unknown_58_[0x18];
};

static_assert(sizeof(ItemResultEntry) == 0x70);

}
