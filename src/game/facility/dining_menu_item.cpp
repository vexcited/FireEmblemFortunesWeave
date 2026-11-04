#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class DiningMenuItem : public menu::TopMenuItem {
public:
  DiningMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Dining"; }
  const char* GetHelpMid() override { return "食事"; }
  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
  bool Unknown72() override;
  void Unknown73() override;
};

[[gnu::used]] DiningMenuItem::DiningMenuItem() = default;

class IndividualMenuItem : public menu::TopMenuItem {
public:
  IndividualMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Individual"; }
  const char* GetHelpMid() override { return "個別行動"; }
  bool IsDecidable() override;
  void OnClose() override;
  int ACall() override;
  bool IsActive() override;
  bool Unknown70() override { return true; }
  void Unknown73() override;
};

[[gnu::used]] IndividualMenuItem::IndividualMenuItem() = default;

class RelianceMenuItem : public menu::TopMenuItem {
public:
  RelianceMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Reliance"; }
  int ACall() override;
  void DrawText() override;
  void Unknown73() override;
};

[[gnu::used]] RelianceMenuItem::RelianceMenuItem() = default;

}

}
