#pragma GCC visibility push(hidden)
#include "game/gmap/gmap_talk_menu.hpp"
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
  int InputUnknown01() override { return 11; }
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

  const char* ImplUnknown03() override {
    return unknown_428_ == nullptr ? "MID_HubMenu_Scout"
      : "MID_DeliveryMenu_Title";
  }

  const char* ImplUnknown05() override {
    return unknown_428_ == nullptr ? "MID_ScoutMenu_Give_Help"
      : "MID_DeliveryMenu_ItemSelect_Help";
  }

private:
  const void* unknown_428_;
  uint8_t unknown_430_[0x8];
  std::vector<const void*> unknown_438_;
};

[[gnu::used]] ProcDeliveryTransportMenu::ProcDeliveryTransportMenu() = default;

// Stays shown under the talk menu of the world map.
bool ProcDeliveryTransportMenu::Unknown137() {
  return gmap::IsUnderTalkMenu(this) || IsShown();
}

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
