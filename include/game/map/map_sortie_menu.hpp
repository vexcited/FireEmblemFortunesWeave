#pragma once

#include <cstdint>

#include "game/map/map_base_map.hpp"
#include "game/menu/system_menu.hpp"

namespace game::map {

// Only its own translation unit addresses the vtable directly.
class MapSortieMenu : public menu::SystemMenu {
public:
  static int last_index_;

  void Unknown30(bool enable) override;
  void Unknown03() override;
  int Unknown24() override { return 7; }
  const char* Unknown32() override { return "Layout/Battle.arc"; }
  const char* Unknown33() override { return "Battle_SystemMenu_Top"; }
  const char* Unknown35() override { return "L_List"; }
  int Unknown38() override { return 0x200000; }
  int Unknown40() override { return 128; }
  int Unknown56() override { return 7; }
  bool Unknown60() override { return false; }
  int Unknown61() override { return 1; }
  const char* Unknown65() override;
  void Unknown75() override;
  void Unknown78(int result) override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown96() override;
  void Unknown99() override;
  int Unknown102() override;
  int Unknown107() override;
  int Unknown112() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  int Unknown136(std::vector<int64_t>& handles) override;
  int ImplUnknown00() override { return 0; }
  int ImplUnknown10() override;
  const char* ImplUnknown03() override;

protected:
  void UpdateHint();

  MapBaseMap map_;
  bool hint_;
  bool hint_enabled_;
  int32_t unknown_514_;
};

}
