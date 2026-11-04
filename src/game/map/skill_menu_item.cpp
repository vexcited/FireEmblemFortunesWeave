#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::map {

namespace {

class SkillMenuItem : public menu::GameMenuItem {
public:
  SkillMenuItem();

  bool IsDecidable() override { return unknown_59_; }
  void OnSelect() override;
  int ACall() override;
  int BCall() override { return 3; }
  void DrawText() override;
  bool IsActive() override { return unknown_5a_; }
  virtual void Unknown70();
  virtual void Unknown71();
  virtual void Unknown72();

protected:
  uint8_t unknown_53_[0x6];
  bool unknown_59_;
  bool unknown_5a_;
};

[[gnu::used]] SkillMenuItem::SkillMenuItem() = default;

class CmdBtlSkillMenuItem : public SkillMenuItem {
public:
  CmdBtlSkillMenuItem();

  void OnSelect() override;
  void Unknown70() override;
  void Unknown71() override;
  void Unknown72() override;
};

[[gnu::used]] CmdBtlSkillMenuItem::CmdBtlSkillMenuItem() = default;

}

}
