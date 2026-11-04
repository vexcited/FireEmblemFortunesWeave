#pragma once

#include "game/facility/mind.hpp"
#include "game/facility/scene_base.hpp"
#include "game/menu/game_menu.hpp"

namespace game::facility {

// Hub facility menus share the Mind state for as long as one is open.
// Only its own translation unit addresses the vtable directly.
class FacilityMenu : public menu::GameMenu {
public:
  ~FacilityMenu() override {
    SingletonControl<Mind>::Release();
  }

  const char* Unknown32() override;
  uint8_t ImplUnknown08() override;
};

}
