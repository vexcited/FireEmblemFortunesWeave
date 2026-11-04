#include "game/menu/sub_menu_item.hpp"

namespace game::menu {

namespace {

class MenuItem : public menu::SubMenuItem {};

class SubEquipMenuItem : public MenuItem {
public:
  SubEquipMenuItem();

  const char* GetMid() override;
  void PlayDecideSe() override;
};

[[gnu::used]] SubEquipMenuItem::SubEquipMenuItem() = default;

class SubOpenMenuItem : public MenuItem {
public:
  SubOpenMenuItem();

  const char* GetMid() override { return "MID_Menu_Open"; }
};

[[gnu::used]] SubOpenMenuItem::SubOpenMenuItem() = default;

class SubSendMenuItem : public MenuItem {
public:
  SubSendMenuItem();

  const char* GetMid() override { return "MID_Menu_Store"; }
};

[[gnu::used]] SubSendMenuItem::SubSendMenuItem() = default;

class SubExchangeMenuItem : public MenuItem {
public:
  SubExchangeMenuItem();

  const char* GetMid() override { return "MID_Menu_Trade"; }
  void PlayDecideSe() override;
};

[[gnu::used]] SubExchangeMenuItem::SubExchangeMenuItem() = default;

class SubUseMenuItem : public MenuItem {
public:
  SubUseMenuItem();

  const char* GetMid() override { return "MID_Menu_Use"; }
};

[[gnu::used]] SubUseMenuItem::SubUseMenuItem() = default;

class SubDiscardMenuItem : public MenuItem {
public:
  SubDiscardMenuItem();

  const char* GetMid() override { return "MID_Menu_Discard"; }
};

[[gnu::used]] SubDiscardMenuItem::SubDiscardMenuItem() = default;

class SubReceiveMenuItem : public MenuItem {
public:
  SubReceiveMenuItem();

  const char* GetMid() override { return "MID_Menu_Receive"; }
};

[[gnu::used]] SubReceiveMenuItem::SubReceiveMenuItem() = default;

}

}
