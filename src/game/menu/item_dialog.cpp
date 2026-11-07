#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#include "game/menu/item_result_entry.hpp"

namespace game::menu {

class ItemDialog final : public Dialog {
public:
  ~ItemDialog() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogItem"; }
  void Unknown135() override;

private:
  uint8_t unknown_5c8_[0x10];
  std::vector<ItemResultEntry> entries_;
};

ItemDialog::~ItemDialog() = default;

}

#pragma GCC visibility pop
