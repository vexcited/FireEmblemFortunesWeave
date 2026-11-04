#include "game/facility/facility_menu.hpp"

namespace game::facility {

namespace {

class ProcLessonMenu : public FacilityMenu {
public:
  ProcLessonMenu();

  const char* Unknown33() override { return "Hub_Lesson"; }
  const char* Unknown67() override { return "稽古"; }
  void Unknown88() override;
  int Unknown101() override;
  uint8_t ImplUnknown08() override { return 1; }
  int InputUnknown01() override { return 4; }
  const char* ImplUnknown03() override { return "MID_HubMenu_Lesson"; }
  const char* ImplUnknown05() override { return "MID_LessonMenu_Help"; }
};

[[gnu::used]] ProcLessonMenu::ProcLessonMenu() = default;

}

}
