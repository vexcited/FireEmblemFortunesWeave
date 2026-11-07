#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class TransportMenu : public GameMenu {
public:
  ~TransportMenu() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DeleteTransport"; }
  const char* Unknown35() override { return "L_EquipPool"; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown129() override;
  int InputUnknown12(int direction, bool loop) override;
};

namespace {

class GiftTransportMenu : public TransportMenu {
public:
  GiftTransportMenu();

  void Unknown85() override;
  int Unknown100() override;
  void Unknown128() override;
  const char* ImplUnknown03() override { return "MID_HubMenu_Scout"; }
  const char* ImplUnknown05() override { return "MID_ScoutMenu_Give_Help"; }
};

[[gnu::used]] GiftTransportMenu::GiftTransportMenu() = default;

class ProcDeliveryTransportMenu : public TransportMenu {
public:
  ProcDeliveryTransportMenu();

  const char* Unknown33() override { return "Common_Quest_Transporter"; }
  void Unknown85() override;
  int Unknown100() override;
  int Unknown101() override;
  void Unknown128() override;
  bool Unknown137() override;

private:
  uint8_t unknown_428_[0x10];
  std::vector<const void*> unknown_438_;
};

[[gnu::used]] ProcDeliveryTransportMenu::ProcDeliveryTransportMenu() = default;

}

TransportMenu::~TransportMenu() = default;

int TransportMenu::InputUnknown12(int direction, bool loop) {
  if (tab_.GetCount() < 1) {
    return 0;
  }
  if (!tab_.Move(direction, loop)) {
    return 14;
  }
  Unknown16de4d0();
  return 13;
}

}
