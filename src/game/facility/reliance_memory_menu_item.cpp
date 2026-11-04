#include <cstdint>
#include <vector>

#include "game/menu/game_menu_item.hpp"
#include "game/menu/unit_menu_item.hpp"

namespace game::facility {

namespace {

class RelianceMemoryMenuItem : public menu::UnitMenuItem {
public:
  RelianceMemoryMenuItem();

  void DrawText() override;
  bool Unknown75() override { return false; }
  bool Unknown87() override;
};

[[gnu::used]] RelianceMemoryMenuItem::RelianceMemoryMenuItem() = default;

class EventMemoryMenuItem : public menu::GameMenuItem {
public:
  EventMemoryMenuItem();

  const char* GetMid() override;
  void DrawText() override;
  bool IsActive() override { return unlocked_; }

private:
  const void* memory_;
  uint8_t unknown_60_[0xc];
  bool unlocked_;
  std::vector<const void*> events_;
};

[[gnu::used]] EventMemoryMenuItem::EventMemoryMenuItem() = default;

}

}
