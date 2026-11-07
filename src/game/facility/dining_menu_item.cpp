#include <functional>

#include "game/game_mode_data.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

void OpenDining(menu::BasicMenu* menu);

namespace {

class DiningMenuItem : public menu::TopMenuItem {
public:
  DiningMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Dining"; }
  const char* GetHelpMid() override { return "食事"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenDining(menu_->GetParent());
    return 9;
  }

  void DrawText() override;
  bool IsActive() override;
  bool Unknown72() override;
  void Unknown73() override;
};

[[gnu::used]] DiningMenuItem::DiningMenuItem() = default;

class IndividualMenuItem : public menu::TopMenuItem {
public:
  IndividualMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Individual"; }
  const char* GetHelpMid() override { return "個別行動"; }
  bool IsDecidable() override;
  void OnClose() override;
  int ACall() override;
  bool IsActive() override;
  bool Unknown70() override { return true; }
  void Unknown73() override;
};

[[gnu::used]] IndividualMenuItem::IndividualMenuItem() = default;

class RelianceMenuItem : public menu::TopMenuItem {
public:
  RelianceMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Reliance"; }
  int ACall() override;
  void DrawText() override;
  void Unknown73() override;
};

[[gnu::used]] RelianceMenuItem::RelianceMenuItem() = default;

class StayMenuItem : public menu::TopMenuItem {
public:
  StayMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Stay"; }
  void OnSelect() override;
  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
  bool Unknown70() override;
  int Unknown71() override;
  bool Unknown72() override { return true; }
  void Unknown73() override;

private:
  int32_t hotel_;
  std::function<void()> on_stay_;
};

[[gnu::used]] StayMenuItem::StayMenuItem() = default;

bool IsClearMode() {
  const GameModeData* data = GameModeData::GetInstance();
  return data != nullptr && data->GetMode() == GameModeData::kModeClear;
}

bool StayMenuItem::Unknown70() {
  return !IsClearMode() && unknown_53_;
}

int StayMenuItem::Unknown71() {
  return IsClearMode() ? -1 : 1;
}

}

}
