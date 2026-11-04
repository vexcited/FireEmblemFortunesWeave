#include "game/facility/facility_menu_item.hpp"

namespace game::facility {

namespace {

class TrainingKindMenuItem : public facility::FacilityMenuItem {
public:
  TrainingKindMenuItem();

  void DrawText() override;
  void Unknown70() override;
};

[[gnu::used]] TrainingKindMenuItem::TrainingKindMenuItem() = default;

}

}
