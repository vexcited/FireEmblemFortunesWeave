#pragma GCC visibility push(hidden)
#include "game/facility/facility_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

#pragma GCC visibility push(hidden)

class ClassJobRecycleMenu : public FacilityMenu {
public:
  const char* Unknown33() override;
  const char* Unknown65() override;
  const char* Unknown67() override;
  void Unknown88() override;
  void Unknown96() override;
  int Unknown100() override;
  void Unknown128() override;
  void Unknown129() override;
  uint8_t ImplUnknown08() override;
  int InputUnknown01() override;
  const char* ImplUnknown03() override;
  const char* ImplUnknown05() override;
};

#pragma GCC visibility pop

const char* ClassJobRecycleMenu::Unknown33() {
  return "Hub_Temple_Recycle";
}

const char* ClassJobRecycleMenu::Unknown65() {
  return "資格返還";
}

const char* ClassJobRecycleMenu::Unknown67() {
  return "資格返還";
}

uint8_t ClassJobRecycleMenu::ImplUnknown08() {
  return 0;
}

int ClassJobRecycleMenu::InputUnknown01() {
  return 8;
}

const char* ClassJobRecycleMenu::ImplUnknown03() {
  return "MID_TempleMenu_ClassRecycle";
}

const char* ClassJobRecycleMenu::ImplUnknown05() {
  return "MID_ClassRecycleMenu_JobSelect_Help";
}

}
