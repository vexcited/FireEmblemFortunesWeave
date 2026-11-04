#include "game/facility/class_change_job_menu_item.hpp"

namespace game::facility {

class ClassJobRecycleMenuItem : public ClassChangeJobMenuItem {
public:
  int Unknown70() override;
  void OnSelect() override;
  void DrawText() override;
  bool IsActive() override;
};

int ClassJobRecycleMenuItem::Unknown70() {
  return 2;
}

}
