#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#pragma GCC visibility pop

namespace game::menu {

class ChangeNumDialog : public Dialog {
public:
  ~ChangeNumDialog() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogChangeNum"; }
  int Unknown55() override { return 1; }
};

ChangeNumDialog::~ChangeNumDialog() = default;

}
