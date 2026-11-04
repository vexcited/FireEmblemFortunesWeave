#include "game/facility/training_menu_item_base.hpp"

namespace {

class TrainingMenuItem : public game::facility::TrainingMenuItemBase {
public:
  TrainingMenuItem();

  void Unknown73() override;
};

[[gnu::used]] TrainingMenuItem::TrainingMenuItem() = default;

}
