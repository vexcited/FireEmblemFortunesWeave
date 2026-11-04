#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class LessonMenuItem : public menu::GameMenuItem {
public:
  LessonMenuItem();

  bool IsDecidable() override { return (unknown_60_ & 0x400000) == 0; }
  int ACall() override;
  void DrawText() override;
  bool IsActive() override { return unknown_60_ == 0; }

private:
  uint8_t unknown_53_[0xd];
  uint32_t unknown_60_;
};

[[gnu::used]] LessonMenuItem::LessonMenuItem() = default;

}

}
