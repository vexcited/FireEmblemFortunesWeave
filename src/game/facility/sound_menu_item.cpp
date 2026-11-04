#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class SoundMenuItem : public menu::GameMenuItem {
public:
  SoundMenuItem();

  const char* GetMid() override;
  bool IsDecidable() override { return unknown_7a_; }
  bool IsActive() override { return unknown_75_; }
  void PlayIdleAnimation() override;
  void PlayCursorAnimation() override;

private:
  uint8_t unknown_53_[0x22];
  bool unknown_75_;
  uint8_t unknown_76_[0x4];
  bool unknown_7a_;
};

[[gnu::used]] SoundMenuItem::SoundMenuItem() = default;

}

}
