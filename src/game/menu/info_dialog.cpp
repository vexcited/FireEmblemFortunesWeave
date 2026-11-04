#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#pragma GCC visibility pop

namespace game::menu {

class InfoDialog : public Dialog {
public:
  ~InfoDialog() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogInfo"; }
  void Unknown84() override;
  void Unknown135() override;
};

InfoDialog::~InfoDialog() = default;

}
