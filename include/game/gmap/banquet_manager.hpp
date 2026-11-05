#pragma once

#include <stdint.h>

#include <functional>
#include <unordered_map>

#include "game/unit_item.hpp"

namespace game::gmap {

class BanquetManager {
public:
  // Passes each reserved transporter item with its count.
  void EachItem(
    const std::function<void(const UnitItem&, int)>& function) const;

private:
  void EachStock(const std::function<void(int, int)>& function) const {
    for (const auto& [stock, count] : stocks_) {
      function(stock, count);
    }
  }

  uint8_t unknown_00_[0x10];
  // Transporter stock indices mapped to counts.
  std::unordered_map<int, int> stocks_;
};

}
