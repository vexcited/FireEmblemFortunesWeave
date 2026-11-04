#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#pragma GCC visibility pop

namespace game::menu {

class ItemDialog : public Dialog {
public:
  ~ItemDialog() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogItem"; }
  void Unknown135() override;
};

ItemDialog::~ItemDialog() = default;

}
