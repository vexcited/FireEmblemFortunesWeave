#include <string>

#include "game/gmap/legion_menu_util_base_menu_item.hpp"

namespace game::gmap::LegionMenuUtil {

class EmptyMenuItem : public BaseMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
  bool IsEmpty() override;
  bool Unknown72() override;
  void DrawText() override;
};

const char* EmptyMenuItem::GetMid() {
  return "MID_Sys_Empty";
}

int EmptyMenuItem::ACall() {
  return 1;
}

bool EmptyMenuItem::IsEmpty() {
  return true;
}

bool EmptyMenuItem::Unknown72() {
  return true;
}

class InfoMenuItem : public BaseMenuItem {
public:
  bool IsEnable() override;
  void Unknown17() override;
  int ACall() override;
  bool Unknown71() override { return true; }
  virtual const char* Unknown74() { return "L_MenuItem_Info"; }

private:
  void* unknown_58_;
  std::string label_;
  std::string value_;
};

bool InfoMenuItem::IsEnable() {
  return false;
}

int InfoMenuItem::ACall() {
  return 0;
}

}

namespace game::gmap {

namespace {

class LegionMenuItem : public LegionMenuUtil::BaseMenuItem {
public:
  LegionMenuItem();

  int ACall() override;
  void DrawText() override;
  bool Unknown70() override { return true; }
  const char* Unknown73() override;
};

[[gnu::used]] LegionMenuItem::LegionMenuItem() = default;

}

}
