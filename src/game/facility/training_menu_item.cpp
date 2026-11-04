#include "game/facility/training_menu_item_base.hpp"
#include "game/game_mode_data.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class TrainingMenuItem : public facility::TrainingMenuItemBase {
public:
  TrainingMenuItem();

  void DrawText() override;
  void Unknown73() override;
};

[[gnu::used]] TrainingMenuItem::TrainingMenuItem() = default;

class WatchingMenuItem : public menu::TopMenuItem {
public:
  WatchingMenuItem();

  const char* GetMid() override { return "MID_ArenaMenu_Watching"; }
  const char* GetHelpMid() override { return "闘技場"; }

  bool IsDecidable() override {
    GameModeData* data = GameModeData::GetInstance();
    return data == nullptr || data->GetMode() != GameModeData::kModeClear;
  }

  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] WatchingMenuItem::WatchingMenuItem() = default;

}

}
