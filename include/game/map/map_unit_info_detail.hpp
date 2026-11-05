#pragma once

#include <cstdint>
#include <memory>
#include <vector>

#include "game/menu/game_menu.hpp"
#include "game/unit.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// Detailed unit window of the battle map.
class MapUnitInfoDetail : public menu::GameMenu {
public:
  ~MapUnitInfoDetail() override {
    for (Owned*& part : parts_) {
      if (part != nullptr) {
        delete part;
        part = nullptr;
      }
    }
  }

  const char* Unknown32() override { return "Layout/Battle.arc"; }
  const char* Unknown33() override { return "Battle_UnitInfoDetail"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitInfo/L_UnitInfoDetail/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitInfo/L_UnitInfoDetail/L_ArrowR");
  }

  int Unknown56() override { return 7; }
  void Unknown57(std::vector<int64_t>& handles) override;
  bool Unknown60() override { return true; }
  bool Unknown64() override { return true; }
  void Unknown72() override;
  void Unknown75() override {}
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown82() override;
  int Unknown100() override { return 0; }
  int Unknown101() override { return 3; }
  int Unknown102() override { return Unknown16e1a00(); }
  int Unknown103() override;
  int Unknown105() override;
  void Unknown131() override;
  int ImplUnknown15() override { return 1; }
  int ImplUnknown10() override;
  int InputUnknown08(bool loop) override;
  int InputUnknown07(bool loop) override;

private:
  Unit* unit_;
  std::vector<Owned*> parts_;
};

#pragma GCC visibility pop

}
