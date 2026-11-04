#pragma once

#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class UnitMenuItem : public GameMenuItem {
public:
  virtual void Unknown70();
  virtual bool Unknown71();
  virtual bool Unknown72();
  virtual bool Unknown73();
  virtual void Unknown74();
  virtual bool Unknown75() { return false; }
  virtual bool Unknown76() { return false; }
  virtual bool Unknown77() { return false; }
  virtual bool Unknown78();
  virtual int Unknown79() { return 2; }
  virtual int Unknown80() { return 6; }
  virtual bool Unknown81() { return false; }
  virtual bool Unknown82() { return true; }
  virtual bool Unknown83() { return false; }
  virtual bool Unknown84() { return false; }
  virtual bool Unknown85() { return false; }
  virtual bool Unknown86() { return false; }
  virtual bool Unknown87() { return false; }
  virtual bool Unknown88() { return false; }
  virtual bool Unknown89() { return false; }
  void DrawText() override;
  bool IsActive() override;
  const char* GetStateName() override;

protected:
  uint8_t unknown_53_[0xd];
  bool unknown_60_;
  bool unknown_61_;
};

}
