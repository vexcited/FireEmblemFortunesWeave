#include <cstdint>
#include <memory>

#include "game/menu/game_menu_item.hpp"
#include "ui/layout_accessor.hpp"

namespace game::menu {

namespace {

class BaseQuestMenuItem : public GameMenuItem {
public:
  int ACall() override { return 0; }
  virtual const char* Unknown70() = 0;
  virtual bool Unknown71() { return false; }
  virtual bool Unknown72() { return false; }
  virtual void Unknown73() = 0;

protected:
  uint8_t unknown_53_[0x15];
  std::weak_ptr<ui::LayoutAccessor> quest_parts_;
};

class EmptyMenuItem : public BaseQuestMenuItem {
public:
  EmptyMenuItem();

  void DrawText() override;
  bool IsEmpty() override { return true; }
  const char* Unknown70() override { return nullptr; }
  void Unknown73() override;
};

[[gnu::used]] EmptyMenuItem::EmptyMenuItem() = default;

}

}
