#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class CalibrationDialog : public menu::Dialog {
public:
  CalibrationDialog();

  void Unknown02() override;
  int Unknown26() override { return 110; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogMouseCalibration"; }
  void Unknown93() override;
  void Unknown96() override;
  int Unknown100() override { return 0; }
  int Unknown101() override { return 3; }
  void Unknown135() override;

private:
  uint8_t unknown_5c8_[0x18];
  ui::AnimationAccessor cursor_animation_;
};

[[gnu::used]] CalibrationDialog::CalibrationDialog() = default;

}

}
