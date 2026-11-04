#pragma once

#include <cstdint>
#include <memory>

#include "game/menu/game_menu.hpp"

namespace game::facility {

// Only its own translation unit addresses the vtable directly.
class ObeliskHeroMenu : public menu::GameMenu {
public:
  // Placeholder for the owned object, only its virtual destructor is known.
  class Unknown448 {
  public:
    virtual ~Unknown448();
  };

  const char* Unknown32() override;
  const char* Unknown33() override;
  void Unknown02() override;
  int Unknown56() override;
  int Unknown63() override;
  void Unknown76() override;
  void Unknown77() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown92() override;
  void Unknown93() override;
  int Unknown101() override;
  int Unknown103() override;
  int Unknown105() override;
  void Unknown112() override;
  void Unknown128() override;
  int InputUnknown01() override;
  virtual void Unknown140();
  int ImplUnknown10() override;
  virtual void Unknown142();
  virtual void Unknown143();

protected:
  uint32_t unknown_428_;
  int32_t unknown_42c_;
  uint32_t unknown_430_;
  bool unknown_434_;
  std::shared_ptr<void> unknown_438_;
  std::unique_ptr<Unknown448> unknown_448_;
};

}
