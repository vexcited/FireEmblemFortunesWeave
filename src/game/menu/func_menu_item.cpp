#include <cstdint>

#include "game/menu/sub_menu_item.hpp"
#include "game/menu/unit_command_menu_item.hpp"

namespace game::menu {

namespace {

template <typename Base>
class TalkSelectMenuItem : public Base {};

template <typename Base>
class FuncMenuItem : public Base {
public:
  FuncMenuItem();

  const char* GetMid() override;
  int ACall() override;
  bool IsActive() override;
};

template <typename Base>
[[gnu::used]] FuncMenuItem<Base>::FuncMenuItem() = default;

template class FuncMenuItem<menu::SubMenuItem>;

template <typename Base>
class GiftMenuItem : public Base {
public:
  GiftMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Gift"; }
  const char* GetHelpMid() override { return "贈り物"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

template <typename Base>
[[gnu::used]] GiftMenuItem<Base>::GiftMenuItem() = default;

template class GiftMenuItem<menu::SubMenuItem>;

template <typename Base>
class ScoutMenuItem : public Base {
public:
  ScoutMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Scout"; }
  const char* GetHelpMid() override { return "スカウト"; }
  int ACall() override;
  bool IsActive() override;
};

template <typename Base>
[[gnu::used]] ScoutMenuItem<Base>::ScoutMenuItem() = default;

template class ScoutMenuItem<menu::SubMenuItem>;

template <typename Base>
class PersonInfoMenuItem : public Base {
public:
  PersonInfoMenuItem();

  const char* GetMid() override { return "MID_HubMenu_ScoutInfo"; }
  int ACall() override;
};

template <typename Base>
[[gnu::used]] PersonInfoMenuItem<Base>::PersonInfoMenuItem() = default;

template class PersonInfoMenuItem<menu::SubMenuItem>;

template <typename Base>
class LessonMenuItem : public Base {
public:
  LessonMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Lesson"; }
  const char* GetHelpMid() override { return "稽古"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

template <typename Base>
[[gnu::used]] LessonMenuItem<Base>::LessonMenuItem() = default;

template class LessonMenuItem<menu::SubMenuItem>;

template <typename Base>
class ProcurementMenuItem : public Base {
public:
  ProcurementMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Procurement"; }
  const char* GetHelpMid() override { return "仕送り"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

template <typename Base>
[[gnu::used]] ProcurementMenuItem<Base>::ProcurementMenuItem() = default;

template class ProcurementMenuItem<menu::SubMenuItem>;

class FuncUnitMenuItem : public FuncMenuItem<menu::UnitCommandMenuItem> {
public:
  FuncUnitMenuItem();

  const char* GetMid() override;
  int ACall() override;
  bool IsActive() override { return unknown_54_; }
  void Unknown70() override;

private:
  uint8_t unknown_53_[0x1];
  bool unknown_54_;
};

[[gnu::used]] FuncUnitMenuItem::FuncUnitMenuItem() = default;

class GiftUnitMenuItem : public GiftMenuItem<menu::UnitCommandMenuItem> {
public:
  GiftUnitMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Gift"; }
  const char* GetHelpMid() override { return "贈り物"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
  void Unknown70() override;
};

[[gnu::used]] GiftUnitMenuItem::GiftUnitMenuItem() = default;

class ScoutUnitMenuItem : public ScoutMenuItem<menu::UnitCommandMenuItem> {
public:
  ScoutUnitMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Scout"; }
  const char* GetHelpMid() override { return "スカウト"; }
  int ACall() override;
  bool IsActive() override;
  void Unknown70() override;
};

[[gnu::used]] ScoutUnitMenuItem::ScoutUnitMenuItem() = default;

class PersonInfoUnitMenuItem
  : public PersonInfoMenuItem<menu::UnitCommandMenuItem> {
public:
  PersonInfoUnitMenuItem();

  const char* GetMid() override { return "MID_HubMenu_ScoutInfo"; }
  int ACall() override;
  void Unknown70() override;
};

[[gnu::used]] PersonInfoUnitMenuItem::PersonInfoUnitMenuItem() = default;

class LessonUnitMenuItem : public LessonMenuItem<menu::UnitCommandMenuItem> {
public:
  LessonUnitMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Lesson"; }
  const char* GetHelpMid() override { return "稽古"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
  void Unknown70() override;
};

[[gnu::used]] LessonUnitMenuItem::LessonUnitMenuItem() = default;

class ProcurementUnitMenuItem
  : public ProcurementMenuItem<menu::UnitCommandMenuItem> {
public:
  ProcurementUnitMenuItem();

  const char* GetMid() override { return "MID_HubMenu_Procurement"; }
  const char* GetHelpMid() override { return "仕送り"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
  void Unknown70() override;
};

[[gnu::used]] ProcurementUnitMenuItem::ProcurementUnitMenuItem() = default;

}

}
