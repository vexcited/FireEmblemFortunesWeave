#pragma once

#include <cstdint>
#include <vector>

namespace game {

class Unit;

}

namespace game::menu {

class BasicMenu;

struct UnitListParam {
  int32_t kind;
  std::vector<const Unit*> units;
};

void OpenRoster(BasicMenu* menu, const UnitListParam& param);

}
