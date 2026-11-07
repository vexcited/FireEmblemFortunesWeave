#include <memory>

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

#pragma GCC visibility push(hidden)

// A resource owned by the reliance menu, its type is not recovered.
class RelianceResource {
public:
  ~RelianceResource();
};

// Resets its resource before the pointer itself is destroyed.
class RelianceResourceOwner {
public:
  ~RelianceResourceOwner() {
    resource_.reset();
  }

private:
  std::unique_ptr<RelianceResource> resource_;
};

#pragma GCC visibility pop

class RelianceSelectMenu final : public GameMenu {
public:
  ~RelianceSelectMenu() override;

  void Unknown30(bool enable) override;
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_RelianceMenu"; }
  const char* Unknown42() override { return "L_UnitInfo/L_KeySort"; }
  const char* Unknown43(uint8_t kind) override;
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown69() override;
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown84() override;
  void Unknown88() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown103() override;
  int Unknown105() override;
  int Unknown107() override;
  int Unknown112() override;
  void Unknown128() override;
  void Unknown129() override;

private:
  uint8_t unknown_428_[0x18];
  RelianceResourceOwner unknown_440_;
  RelianceResourceOwner unknown_448_;
};

RelianceSelectMenu::~RelianceSelectMenu() = default;

}
