#include "game/menu/sub_menu_item.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class SortiePlanMenuItem : public menu::TopMenuItem {
public:
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown73() override;
  virtual const char* Unknown74() = 0;
  virtual void Unknown75() {}
  virtual void Unknown76() = 0;
};

class BottomUpMenuItem : public SortiePlanMenuItem {
public:
  BottomUpMenuItem();

  const char* GetMid() override { return "MID_SortiePlanMenu_BottomUp"; }
  int ACall() override;
  const char* Unknown74() override {
    return "MID_SortiePlanMenu_BottomUp_Help";
  }
  void Unknown76() override;
};

[[gnu::used]] BottomUpMenuItem::BottomUpMenuItem() = default;

class TrainingMenuItem : public SortiePlanMenuItem {
public:
  TrainingMenuItem();

  const char* GetMid() override { return "MID_SortiePlanMenu_Training"; }
  int ACall() override;
  const char* Unknown74() override {
    return "MID_SortiePlanMenu_Training_Heip";
  }
  void Unknown76() override;
};

[[gnu::used]] TrainingMenuItem::TrainingMenuItem() = default;

class VolunteerMenuItem : public SortiePlanMenuItem {
public:
  VolunteerMenuItem();

  const char* GetMid() override { return "MID_SortiePlanMenu_Volunteer"; }
  int ACall() override;
  int RightCall() override;
  const char* Unknown74() override {
    return "MID_SortiePlanMenu_Volunteer_Help";
  }
  void Unknown75() override;
  void Unknown76() override;
};

[[gnu::used]] VolunteerMenuItem::VolunteerMenuItem() = default;

class VolunteerSubMenuItem : public menu::SubMenuItem {
public:
  VolunteerSubMenuItem();

  const char* GetMid() override;
  int ACall() override;
};

[[gnu::used]] VolunteerSubMenuItem::VolunteerSubMenuItem() = default;

}

}
