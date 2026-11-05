#pragma once

#include <cstdint>
#include <memory>

#include "ui/layout_accessor.hpp"

namespace game::map {

// Minimap drawn into a layout pane by the battle map menus.
class MapBaseMap {
public:
  virtual ~MapBaseMap();

  void Setup(const std::weak_ptr<ui::LayoutAccessor>& pane, float scale);

private:
  uint8_t unknown_08_[0xd8];
};

}
