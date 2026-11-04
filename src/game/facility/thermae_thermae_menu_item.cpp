#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class ThermaeThermaeMenuItem : public menu::TopMenuItem {
public:
  ThermaeThermaeMenuItem();

  const char* GetMid() override { return "MID_ThermaeMenu_Thermae"; }
  const char* GetHelpMid() override { return "テルマエ"; }
  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] ThermaeThermaeMenuItem::ThermaeThermaeMenuItem() = default;

}

}
