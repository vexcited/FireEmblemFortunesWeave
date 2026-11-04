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
