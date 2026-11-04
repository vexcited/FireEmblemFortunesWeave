#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class ClassTrialMenuItem : public menu::TopMenuItem {
public:
  ClassTrialMenuItem();

  const char* GetMid() override { return "MID_TempleMenu_ClassTrial"; }
  const char* GetHelpMid() override { return "資格試験"; }
  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] ClassTrialMenuItem::ClassTrialMenuItem() = default;

class ClassChangeMenuItem : public menu::TopMenuItem {
public:
  ClassChangeMenuItem();

  const char* GetMid() override { return "MID_TempleMenu_ClassChange"; }
  const char* GetHelpMid() override { return "兵種変更"; }
  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] ClassChangeMenuItem::ClassChangeMenuItem() = default;

class ClassRecycleMenuItem : public menu::TopMenuItem {
public:
  ClassRecycleMenuItem();

  const char* GetMid() override { return "MID_TempleMenu_ClassRecycle"; }
  const char* GetHelpMid() override { return "資格返還"; }
  bool IsDecidable() override { return (unknown_54_ & 0x400000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown73() override;
};

[[gnu::used]] ClassRecycleMenuItem::ClassRecycleMenuItem() = default;

}

}
