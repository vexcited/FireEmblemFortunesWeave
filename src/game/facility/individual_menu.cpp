#pragma GCC visibility push(hidden)
#include "game/menu/multi_menu_sequence.hpp"

namespace game::facility {

class IndividualMenu : public menu::MultiMenuSequence {
public:
  ~IndividualMenu() override;

  const char* GetLayoutArchive() override { return "Layout/Hub.arc"; }
  const char* GetLayoutName() override { return "Hub_Individual"; }
  void Unknown33() override;
  void* Unknown35() override;
  void* Unknown36() override;
  void Unknown39() override;
  int ImplUnknown00() override { return 1; }
  const char* ImplUnknown03() override { return "MID_HotelMenu_Individual"; }
  const char* ImplUnknown05() override { return "MID_IndividualMenu_Help"; }
  uint8_t ImplUnknown08() override { return 2; }
  int ImplUnknown10() override;
};

IndividualMenu::~IndividualMenu() = default;

}

#pragma GCC visibility pop
