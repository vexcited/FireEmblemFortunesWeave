#include "game/facility/class_change_job_menu_item.hpp"
#include "game/menu/game_menu_item.hpp"

namespace game::facility {

int ClassChangeJobMenuItem::Unknown70() {
  return 1;
}

bool ClassChangeJobMenuItem::Unknown71() {
  return true;
}

class EmptyClassChangeJobMenuItem : public ClassChangeJobMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
  bool IsActive() override;
  bool IsEmpty() override;
  void DrawText() override;
};

const char* EmptyClassChangeJobMenuItem::GetMid() {
  return "MID_Sys_Empty";
}

int EmptyClassChangeJobMenuItem::ACall() {
  return 1;
}

bool EmptyClassChangeJobMenuItem::IsActive() {
  return true;
}

bool EmptyClassChangeJobMenuItem::IsEmpty() {
  return true;
}

}
